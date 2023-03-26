#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

int main()
{
    // Open input and output files
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");

    // Open dictionary file and store words and their unique numbers in a map
    ifstream dictionary_file("Dictionary.txt",ios::out|ios::in|ios::ate);
    unordered_map<string, int> dictionary;
    string word;
    int unique_number = 0;
    while (dictionary_file >> word)
    {
        dictionary[word] = unique_number++;
    }

    // Tokenize input file and compress each token
    string token;
    while (input_file >> token)
    {
        // Look up unique number for token in dictionary
        int unique_number = -1; // Default value if token not found
        auto it = dictionary.find(token);
        if (it != dictionary.end())
        {
            unique_number = it->second;
        }

        // Write compressed token to output file
        output_file << unique_number << " ";
    }

    // Close input and output files
    input_file.close();
    output_file.close();

    return 0;
}
