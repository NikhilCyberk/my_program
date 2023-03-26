#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value, temp;
        cin >> value;
       // a = b = c = value / 3;
       // temp = value % 3;
      //  b = b + temp;
      a=(value+1)/3;
      b=((value+2)/3)+1;
      c=(value/3)-1;
      

/*
        if (a == c && c > 1)
        {
            a = a + 1;
            c = c - 1;
            if (a == b & c > 1)
            {
                b = b + 1;
                c = c - 1;
            }
            else if (a == b && c == 1)
            {
                b = b + 1;
                a = a - 1;
            }
            else if (a > b && c == 1)
            {
                temp = a - b;
                a = a - temp;
                b = b + temp;
            }
        }
       */

         if(a+b+c==value){
             //cout <<"wright\n";
             cout<<a<<" "<<b<<" "<<c<<"\n";
         }
      

    }
}
