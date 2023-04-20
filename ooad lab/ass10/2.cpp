#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename, word;
    cout << "Enter filename: ";
    cin >> filename;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error: Unable to open file.\n";
        return 0;
    }

    cout << "Enter word to search: ";
    cin >> word;

    int count = 0;
    string line;
    while (getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(word, pos)) != string::npos) {
            count++;
            pos += word.length();
        }
    }

    cout << "The word \"" << word << "\" occurs " << count << " times in the file.\n";

    file.close();
    return 0;
}
