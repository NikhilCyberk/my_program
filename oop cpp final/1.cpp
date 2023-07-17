/*Define a user-defined class to handle large integer with the range of 20
digits. You are free to choose your own data structure to handle large
integers. Define member functions to add and subtract two large integer
objects and store the result in a third object. Define necessary member
function to input and display a large integer. (Use of STL library for this
purpose is prohibited)*/
#include<bits/stdc++.h>
using namespace std;
class LargeInt{
    int digit[20];
    public:
    LargeInt(){
        for (int i = 0; i < 20; i++)
        {
            digit[i]=0;
        }
    }
    LargeInt(long long num){
        for (int i = 0; i < 20; i++)
        {
            digit[i]=num%10;
            num/=10;
        }
    }
    int add(){
        string str;
        cin >> str;
        int len=str.length();
        int index=19;
        for (int i = 0; i < count; i++)
        {
            /* code */
        }
        
    }


};