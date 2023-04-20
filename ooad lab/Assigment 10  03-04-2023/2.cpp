/*Use a function template to perform insertion sort on the arrays of
i. integers,
ii.doubles,
iii. Distances (feet, inches)*/
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void insertion_sort(T arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
template <typename T>
void insertion_sort_double(T arr[], int size)
{

    for (int i = 1; i < size; i++)
    {
        double current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
template <typename T>
void distance_convert_to_feet(T inches)
{
    cout << "\nconvert to feet : ";
    double feet = inches / 12;
    cout << feet << "feet" << endl;
    ;
}
template <typename T>
void distance_convert_to_inches(T feet)
{
    cout << "\n convert to inches :";
    double inches = feet * 12;
    cout << inches << "inches";
    cout << endl;
}
int main()
{
    cout << "int array \n";
    int int_array[5] = {5, 6, 8, 2, 4};
    insertion_sort<int>(int_array, 5);
    cout << "\ndouble array \n";
    double double_array[5] = {5.6, 8.2, 9.1, 1.2, 2.3};
    insertion_sort_double<double>(double_array, 5);
    distance_convert_to_feet(50);
    distance_convert_to_inches(100);
}