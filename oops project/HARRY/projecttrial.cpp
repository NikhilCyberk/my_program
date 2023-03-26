#include <bits/stdc++.h>
#define word_bank "wordbank.txt"
using namespace std;

int main()
{
    long long num = 0, n1, n;
    string f, f1, f2;
    ifstream file1("1_compressed.txt");
    ifstream file2(word_bank);
    ofstream file3("1_decompressed.txt");
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
        string line;
        //  int lineNumber = 0;
        //   for (int i = 0; i < line_bankNum.size(); i++)
        //     {
        //          n1 = line_bankNum[i];
        //          cout<<n1<<" ";
        //     }

        for (int i = 0; i < line_bankNum.size(); i++)
        {
            n1 = line_bankNum[i];
            // cout<<n1<<" ";
            //   cout<<n<<" ";
            if (n1 == -1)
            {
                // cout << " ";
                file3 << " ";
                // continue;
            }
            else if (n1 == 1)
            {
                // coifut << endl;
                //   file3<<"\n";
                //  continue;
            }
            else if (n1 == -2)
            {
                // coifut << endl;
                file3 << "\n";
                //  continue;
            }
            else
            {
                int lineNumber = 0;
                while (getline(file2, line))
                {
                    // cout<<line<<" ";
                    file3 << line;
                    break;
                    // lineNumber++;
                    // cout<<lineNumber<<" ";
                    // cout<<n1<<" ";
                    // bool found = false;
                    // if (lineNumber == n1)
                    // {
                    //    // cout << line;
                    //    file3<<n1<<" ";
                    //    //cout<<line<<"\n";
                    //      file3 << line;
                    //     // lineNumber=0;
                    //   //  found = true;
                    //     break;
                    // }
                    // lineNumber=0;
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

    return 0;
}
