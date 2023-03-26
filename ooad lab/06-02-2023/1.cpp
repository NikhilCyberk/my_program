#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,zo=0,on=0,tw=0;
    cout << "enter a number for array :";
    cin >> n;
    int arr[n],zero[n],one[n],two[n];
    for (i=0;i<n;i++){
        cout << "\nenter array number : ";
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}