#include <bits/stdc++.h>
#define word_bank "wordbank.txt"

using namespace std;

int main() {
    long long num=0,n;
    string f,f1,f2;
    ifstream file1("temporaryfile_compressed.txt");
    ifstream file2(word_bank);
    ofstream file3("temporaryfilecompressed_decompressed.txt");
     vector<int> line_numbers;

    if (file1.is_open()) {
        char c;

        while (file1.get(c)) {
            if (c == '$' || c == '@') {
                 line_numbers.push_back(num);
                 num=0;
        
            
        }/*
                if(c=='$')
                {
                    c=' ';
                }
                else if(c=='@')
                {
                    c='\n';
                }
                cout<<c;
                */

//num=0;

    /////////////
     //  cout<<num<<" ";
      //  num=0;
    

             else {
                n=(int)c-'0';
                num=num*10+n;
            

            }
        }

         string line;
        int lineNumber = 0;
        while (getline(file2, line)) {
            lineNumber++;
            bool found = false;
    for (int i = 0; i < line_numbers.size(); i++) {
        int n = line_numbers[i];
        if (lineNumber == n) {
            if(n==2067)
            {
                file3<<endl;
                break;
            }
                    file3 << line << " ";
                    found = true;
                    break;
                }
            }
            if (!found) {
                file3 << "$ "; // to maintain line numbers in output file
            }
            
        }

        file1.close();
        file2.close();
        file3.close();
    } else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
