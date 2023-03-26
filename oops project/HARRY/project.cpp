#include <bits/stdc++.h>
using namespace std;
#define word_bank "wordbank.txt"
void compress();
void decompress();

int main()
{
    int choice;
    cout << "     PRESS 1 TO COMPRESS\n";
    cout << "     PRESS 2 TO DECOMPRESS\n";
    cout << "---------------------------------\n";
    cout << "ENTER CHOICE: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        compress();
        break;
    case 2:
        decompress();
        break;
    default:
        cout << "WRONG CHOICE";
    }
}
void compress()
{
    string f, f1, f2;
    cout << "Enter file name to compress: ";
    cin >> f;
    f1 = f + ".txt";
    f2 = f + "_compressed.txt";
    ifstream file1(f1);
    ifstream file2(word_bank);
    ofstream file3(f2);

    map<string, int> word_map;

    // read file2 into word_map
    string word;
    int line_number = 1;
    while (file2 >> word)
    {
        word_map[word] = line_number++;
    }

    if (file1.is_open())
    {
        char c;
        word = "";
        while (file1.get(c))
        {
            if (c == ' ' || c == '\n')
            {
                if (c == ' ')
                {
                    c = '$';
                }
                else if (c == '\n')
                {
                    c = '@';
                }

                if (word_map.find(word) != word_map.end())
                {
                    file3 << word_map[word] << c; // word found, print line number
                }
                else
                {
                    word_map[word] = line_number++; // word not found, add to word_map
                    ofstream file2(word_bank, ios::app);

                    file2 << word << endl;         // and file2
                    file3 << line_number - 1 << c; // print line number

                    // word="";
                }

                // cout<<word<<c;
                word = "";
                // do something when a delimiter is found
            }
            else
            {
                word += c;
                // do something with the character
            }
        }

        file1.close();
        file2.close();
        file3.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

    cout << "  <<FILE COMPRESSED>>\n";
}

void decompress()
{
    string f, f1, f2;
    cout << "Enter file name to decompress: ";
    cin >> f;
    f1 = f + ".txt";
    f2 = f + "_decompressed.txt";
    // Open file1 for reading, file2 for reading, and file3 for writing
    long long num = 0, n1, n;
    ifstream file1(f1);
    ifstream file2(word_bank);
    ofstream file3(f2);
    vector<int> line_bankNum;

    if (file1.is_open())
    {
        char c;

        while (file1.get(c))
        {
            if (c == '$' || c == '@')
            {
                if (num != 0)
                {
                    line_bankNum.push_back(num);
                }
                if (c == '$')
                {
                    line_bankNum.push_back(-1);
                }
                else if (c == '@')
                {
                    line_bankNum.push_back(-2);
                }
                // cout<<c;
                num = 0;
            }
            else
            {
                // string to number
                n = (int)c - '0';
                num = num * 10 + n;
            }
        }
        file2.close();
        string line;

        for (int i = 0; i < line_bankNum.size(); i++)
        {
            n1 = line_bankNum[i];

            if (n1 == -1)
            {
                file3 << " ";
            }

            else if (n1 == -2)
            {
                file3 << "\n";
            }
            else
            {
                ifstream file2(word_bank);
                int lineNumber = 0;
                while (getline(file2, line))
                {

                    lineNumber++;

                    if (lineNumber == n1)
                    {

                        file3 << line;

                        file2.close();
                    }
                }
            }
        }

        file1.close();
        file2.close();
        file3.close();
    }
    else
    {
        cout << "Unable to open file" << endl;
    }

    cout << "  <<FILE DECOMPRESSED>>\n";
}