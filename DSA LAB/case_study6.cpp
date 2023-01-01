#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct student
{
    int marks;
    int attendance;
    string name;
};
bool compareTwoStudents(student a, student b)
{
    if (a.marks != b.marks)
    {
        return (a.marks > b.marks);
    }
    else
        return (a.marks == b.marks);
}

int main()
{
    int n;
    cout << "enter the no. of students" << endl;
    cin >> n;
    student st[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the name of student " << i + 1 << "    " << endl;
        cin >> st[i].name;
        cout << "enter the marks of student " << i + 1 << "    " << endl;
        cin >> st[i].marks;
        cout << "enter the attendance of student " << i + 1 << "    " << endl;
        cin >> st[i].attendance;
    }
    sort(st, st + n, compareTwoStudents);
    int a, count = 0;
    int j = 0;

    for (int i = 0, j = 0; i < n; i++)
    {
        if (i == j)
        {
            j++;
        }
        if (i != j)
        {
            count++;
            i = j;
            j++;
            if (count == 2)
            {
                a = st[j].marks;
                break;
            }
        }
    }
    cout << "j" << endl;
    count =0;
    for (int i = 0; i < n; i++)
    {
        if (st[i].marks >= a && st[i].attendance >= 90)
        {
            cout << "enter the nmae of student " << "    " << endl;
            cin >> st[i].name;
            cout << "enter the marks of student "<< "    " << endl;
            cin >> st[i].marks;
            cout << "enter the attendance of student " <<"    " << endl;
            cin >> st[i].attendance;
            count++;
        }
        else if(st[i].marks<a)
        {
            break;
        }
    }
}
