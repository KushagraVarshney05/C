#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student
{
    int n;
    int marks[100][5];
    int scores[100];

public:
    int count=0;
    void input();
    int total();
    int highest();
};
void Student::input()
{
    cin >> n;
    for (int y = 0; y < n; y++)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[y][i];
        }
    }
}
int Student::total()
{
    for (int y = 0; y < n; y++)
    {
        scores[y]=0;
        for (int i = 0; i < 5; i++)
        {
            
            scores[y] = scores[y] + marks[y][i];
        }
    }
}
int Student:: highest()
{
    int high = scores[0];
    for (int i = 0; i < n; i++)
    {
        if (high < scores[i])
            count++;
    }

}

int main()
{
    Student a;
    a.input();
    a.total();
    a.highest();
    cout << a.count;
    return 0;
}