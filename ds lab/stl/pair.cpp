#include <bits/stdc++.h>
using namespace std;
int arr[10];
int top = -1;
void pushElement(int x)
{
   if (top == -1)
   {
      top = 0;
   }
   arr[top] = x;
   top++;
}

int popElement()
{
   if (top == -1)
   {
      cout << "\nStack Empty!!";
      return -1;
   }
   top--;
   int temp = arr[top];
   return temp;
}

void print()
{
   int i = top - 1;
   while (i >= 0)
   {
      cout << arr[i] << " ";
      i--;
   }
}
int main()
{
   pushElement(10);
   pushElement(20);
   pushElement(30);
   pushElement(10);
   pushElement(40);
   print();
   int temp = popElement();
   cout << endl
        << temp << endl;
   print();
}