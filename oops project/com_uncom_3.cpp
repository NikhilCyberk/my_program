#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

int main()
{
    // Open input, dictionary, and output files
    ifstream input_file("input.txt");
    ifstream dictionary_file("Dictionary.txt");
    ofstream output_file("output.txt");

    // Create dictionary of words and their unique identifiers
    unordered_map<string, int> dictionary;
    string word;
    int unique_id = 0;
    while (dictionary_file >> word)
    {
        dictionary[word] = unique_id++;
    }

    // Process input file and write compressed output to output file
    string token;
    while (input_file >> token)
    {
        auto it = dictionary.find(token);
        if (it != dictionary.end())
        {
            // Token is in dictionary, so write its unique identifier to output file
            output_file << it->second << " ";
        }
        else
        {
            // Token is not in dictionary, so write it to output file as is
            output_file << token << " ";
        }
    }

    // Close files
    input_file.close();
    dictionary_file.close();
    output_file.close();

    return 0;
}
