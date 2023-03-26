#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int n,a,b,c;
    // cin >> n;
    // int value,temp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >>value;
    //     a=b=c=value/3;
    //     temp=value%3;
    //     b=b+temp;
        
    //     if(a==c && c>1){
    //         a=a+1;
    //         c=c-1;
    //         if(a==b & c>1){
    //             b=b+1;
    //             c=c-1;
    //         }
    //         else if(a==b && c==1){
    //             b=b+1;
    //             a=a-1;
    //         }
    //         else if(a>b && c==1){
    //             temp=a-b;
    //             a=a-temp;
    //             b=b+temp;
    //         }
    //        else if(a>b && c>1){
    //             temp=a-b;
    //             b=b+temp;
    //             a=a-temp;
    //        }
    //     }
    //      cout<<a<<" "<<b<<" "<<c<<"\n";
 
       /* if(a+b+c==value){
            cout <<"wright\n";
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        else{
            cout << "no";
        }
*/
    // }
    int h1,h2,h3;
    int n;
    int t; cin>>t;
    do{
        cin>>n;
        h1=n%3;
        n-=n%3;
        h2=h3=n/3;
        h1+=n/3;
        if(h3>=h2){
            h2+=1;
            h3-=1;
        }
        if(h2>=h1){
            h1+=1;
            h2-=1;
        }
        t--;
        cout<<h2<<" "<<h1<<" "<<h3<<"\n";
    }while(t>0);
}