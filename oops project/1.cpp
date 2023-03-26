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
                    file3 << "$";
                }
                else if (c == '\n')
                {
                    file3 << "@";
                }

                if (word_map.find(word) != word_map.end())
                {
                    file3 << word_map[word] << " " << word; // word found, print line number and word
                }
                else
                {
                    word_map[word] = line_number++; // word not found, add to word_map
                    ofstream file2(word_bank, ios::app);
                    file2 << word << endl;                   // and file2
                    file3 << line_number - 1 << " " << word; // print line number and word
                }
                if (c == ' ')
                {
                    file3 << "$";
                }
                else if (c == '\n')
                {
                    file3 << "@";
                }

                word = "";
            }
            else
            {
                word += c;
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

    ifstream file1(f1);
    ifstream file2(word_bank);
    ofstream file3(f2);

    if (!file1.is_open() || !file2.is_open() || !file3.is_open())
    {
        cerr << "Error: could not open files." << endl;
        return;
    }

    // Read word bank into a map
    map<int, string> word_map;
    string word;
    int line_number = 1;
    while (getline(file2, word))
    {
        word_map[line_number++] = word;
    }

    // Read compressed file and decompress
    char c;
    int line_number_tmp = 0;
    string word_tmp = "";
    while (file1.get(c))
    {
        if (c == '$')
        {
            file3 << " ";
        }
        else if (c == '@')
        {
            file3 << endl;
        }
        else if (isdigit(c))
        {
            line_number_tmp = 10 * line_number_tmp + (c - '0');
        }
        else
        {
            if (line_number_tmp > 0)
            {
                if (word_map.find(line_number_tmp) != word_map.end())
                {
                    file3 << word_map[line_number_tmp];
                }
                else
                {
                    cerr << "Error: line number not found in word bank." << endl;
                    return;
                }
                line_number_tmp = 0;
            }
            word_tmp += c;
        }
    }

    file1.close();
    file2.close();
    file3.close();

    cout << "  <<FILE DECOMPRESSED>>\n";
}
