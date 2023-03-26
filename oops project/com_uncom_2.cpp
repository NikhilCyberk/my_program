#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream fd; // fd for file pointing to dictionary
    fstream ft; // ft for file pointing to any txt
    fstream fc; // fc for file pointing to any compressed txt
    fstream ftemp;
    fd.open("Dictionary.txt", ios::in | ios::binary);
    ft.open("input.txt", ios::in | ios::binary);
    fc.open("output.txt", ios::out);
    string word, dword, cword, tword;
    long long int pos_dict, pos_story, pos_comp;
    while (!ft.eof())
    {
        ft >> word;
        pos_story = ft.tellg();
        fc << word << " " << pos_story << "\n";
    }
    fc.close();
    fc.open("output.txt", ios::in | ios::out | ios::ate | ios::binary);
    while (!fc.eof())
    {
        fc >> cword;
        while (!fd.eof())
        {
            fd >> dword;
            if (cword == dword)
            {
                pos_dict = fd.tellg();
                // if (cword > stoi(pos_dict))
            }
        }
    }

    ft.close();
    fd.close();
    return 0;
}