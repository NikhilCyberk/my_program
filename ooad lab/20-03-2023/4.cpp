#include <bits/stdc++.h>

using namespace std;

class Student
{
protected:
    int roll;

public:
    void getRoll(int roll)
    {
        this->roll = roll;
    }
    void putRoll()
    {
        cout << "\nRoll: " << this->roll;
    }
};
class Exam : virtual public Student
{
protected:
    float mark1, mark2;

public:
    void getMark(float m1, float m2)
    {
        mark1 = m1;
        mark2 = m2;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    void getScore(int sc)
    {
        score = sc;
    }
    void putScore()
    {
        cout << "\nScore: " << score;
    }
};
class Result : public Exam, public Sports
{
protected:
    float total;

public:
    void dispRes()
    {
        total = mark1 + mark2;
        cout << "\nMark1:" << mark1 << " Mark2:" << mark2;
        cout << "\nTotal:" << total;
        cout << "\nScore:" << score;
    }
};

int main()
{
    Exam one;
    Sports two;
    Result both;
    Student *array[3];
    array[0] = &both;
    array[1] = &one;
    array[2] = &two;
    array[0]->getRoll(101);
    array[0]->putRoll();
    return 0;
}