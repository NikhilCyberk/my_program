#include <iostream>
#include <math.h>
using namespace std;
class Number
{
private:
    int data;

public:
    Number() : data(0) {}
    Number(int dt) : data(dt) {}
    ~Number(void) { cout << "\nObject is Destroyed!!"; }
    void getNumber()
    {
        cout << "\n getNumber Called\n";
        cout << "\nenter a number : ";
        cin >> data;
    }
    bool isArmstrong()
    {

        int i = 0, r = 0, temp = data;
        while (temp != 0)
        {
            i = temp % 10;
            r += i * i * i;
            temp = temp / 10;
        }
        if (temp == data)
        {
            return 1;
            //    cout << "\nnumber is Armstrong"
        }
        else
        {
            return 0;
            //  cout << "\n number is not Armstrong"
        }
    }
    bool isPrime()
    {
        cout << "\nisPrime Called";
        for (int i = 1; i < sqrt(data); i++)
        {
            if (data % i == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    int nextCoprime()
    {
        int i,flag=1,temp1=data,temp2=temp1+1;
            for(i=2;i<temp1;i++){
                if(temp1%i==0 && temp2 %i ==0){
                    flag =0;
                    break;
                }
            }
            return(flag);
    }
    int reverse()
    {

        int i = 0, r = 0, temp = data;
        while (temp != 0)
        {
            i = temp % 10;
            r = r * 10 + i;
            temp = temp / 10;
        }
        cout << "reverse number : " << r;
    }
    void changeNumber(int x){
            data=x;
            cout << "   mutate value : "<<data;
    }
};
int main()
{
    Number n1;
    Number n2;
    n1.getNumber();
    n2.getNumber();
    cout << "\n \n ";
    cout << "\n***********\n";
    cout << "\nArmstrong number : 1";
    if (n1.isArmstrong())
    {
        cout << "\nnumber 1 is Armstrong";
    }
    else
    {
        cout << "\nnumber 1 is not Armstrong";
    }
    cout << "\n \n ";

    cout << "\n***********\n";
    cout << "\nArmstrong number : 2";
    if (n1.isArmstrong())
    {
        cout << "\nnumber 2 is Armstrong";
    }
    else
    {
        cout << "\nnumber 2 is not Armstrong";
    }
cout << "\n \n ";
    cout << "\n***********\n";
    cout << "prime Number : ";
    if (n1.isPrime())
    {
        cout << "\nnumber 1 is prime";
    }
    else
    {
        cout << "\nnumber 1 is not prime";
    }
    cout << "\n \n ";
    if (n2.isPrime() == 0)
    {
        cout << "\nnumber 2 is prime";
    }
    else
    {
        cout << "\nnumber 2 is not prime";
    }
    cout << "\n \n ";

    if(n1.nextCoprime()){
        cout << "\nnumber 1 is coprime:";
    }
    else{
        cout << "\n number 1 is not coprime ";
    }
cout << "\n \n ";
    if(n2.nextCoprime()){
        cout << "\nnumber 2 is coprime:";
    }
    else{
        cout << "\n number 2 is not coprime ";
    }

cout << "\n \n ";
    cout << "\n*** reverse of num 1 ***\n";
    n1.reverse();
    cout << "\n \n ";
    cout << "\n*** reverse of num 2 ***\n";
    n2.reverse();
    cout << "\n \n ";
          cout << "Mutater Called 1";
    n1.changeNumber(567);
    
    cout << "\n \n ";
          cout << "Mutater Called 2";
    n2.changeNumber(345);

}