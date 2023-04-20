#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Error: Unable to open file.\n";
        return 0;
    }

    int num_words = 0, num_lines = 0;
    string line;
    while (getline(file, line))
    {
        num_lines++;
        size_t pos = 0;
        while ((pos = line.find(' ', pos)) != string::npos)
        {
            num_words++;
            pos++;
        }
        num_words++;
    }

    cout << "Number of words: " << num_words << endl;
    cout << "Number of lines: " << num_lines << endl;

    file.close();
    return 0;
}
