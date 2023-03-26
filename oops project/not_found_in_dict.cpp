#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream fd{"Dictionary.txt", fstream::in}; // fd for file pointing to dictionary
    fstream fin{"input.txt", fstream::in};     // fin for file pointing to any txt
    fstream fc{"output.txt", fstream::out};    // fc for file pointing to any compressed txt
    string word, dword, cword;
    long long int pos_dict, pos_story, pos_comp;
    int codeword = 256; // start with codeword 256 as the first 255 are reserved
    unordered_map<string, int> dictionary;
    for (int i = 0; i < 256; i++)
    {
        dictionary[string(1, i)] = i;
    }
    while (fin >> word)
    {
        pos_story = fin.tellg();
        auto it = dictionary.find(word);
        if (it != dictionary.end())
        {
            // word found in dictionary
            pos_dict = it->second;
            cword = to_string(pos_dict);
        }
        else
        {
            // word not found in dictionary, assign a new codeword
            dictionary[word] = codeword;
            cword = to_string(codeword);
            codeword++;
        }
        fc << cword << " " << pos_story << "\n";
    }
    fc.close();
    fd.close();
    fin.close();
    return 0;
}
