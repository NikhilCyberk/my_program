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

    // search for words in file1 and update word_map and file3
    line_number = 1;
    while (file1 >> word)
    {
        if (word_map.find(word) != word_map.end())
        {
            file3 << word_map[word] << "$"; // word found, print line number
        }
        else
        {
            word_map[word] = line_number++; // word not found, add to word_map
            ofstream file2(word_bank, ios::app);
            file2 << word << endl;           // and file2
            file3 << line_number - 1 << " "; // print line number
        }
    }

    file1.close();
    file2.close();
    file3.close();

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
    ifstream file1(f1);
    ifstream file2(word_bank);
    ofstream file3(f2);
    if (!file1.is_open() || !file2.is_open() || !file3.is_open())
    {
        cerr << "Error: could not open files." << endl;
        // return 1;
    }

    // Get all inputs from file1
    vector<int> line_numbers;
    int n;
    while (file1 >> n)
    {
        // cout<<n<<" ";
        line_numbers.push_back(n);
    }

    // Go to each line number in file2 and print the word in file3

    string line;
    int lineNumber = 0;
    while (getline(file2, line))
    {
        lineNumber++;
        bool found = false;
        for (int i = 0; i < line_numbers.size(); i++)
        {
            int n = line_numbers[i];
            if (lineNumber == n)
            {
                file3 << line << " ";
                found = true;
                break;
            }
        }
        if (!found)
        {
            file3 << "$ "; // to maintain line numbers in output file
        }
    }

    file1.close();
    file2.close();
    file3.close();

    cout << "  <<FILE DECOMPRESSED>>\n";
}