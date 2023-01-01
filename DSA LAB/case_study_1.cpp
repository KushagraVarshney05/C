#include<bits/stdc++.h>
using namespace std;
struct student
{
    string last_name;
    string first_name;
    float garde_point;
};
struct employee
{
    string last_name;
    string first_name;
    int salary;
};
bool compareTwoStudents(student a, student b)
{

    if (a.last_name != b.last_name)
        return a.last_name < b.last_name;
 
    
    if (a.first_name != b.first_name)
        return a.first_name < b.first_name;
 
    
 
    return (a.first_name == b.first_name);
}
int main()
{
    student st[2], temp;
    employee em[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "enter the first name of student" << i + 1 << endl;
        cin >> st[i].first_name;
        cout << endl
             << "enter the last name of student" << i + 1 << endl;
        cin >> st[i].last_name;
        cout << endl
             << "enter the grade of student" << i + 1 << endl;
        cin >> st[i].garde_point;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "enter the first name of employee" << i + 1 << endl;
        cin >> em[i].first_name;
        cout << endl
             << "enter the last name of employee" << i + 1 << endl;
        cin >> em[i].last_name;
        cout << endl
             << "enter the salary of employee " << i + 1 << endl;
        cin >> em[i].salary;
    }
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "enter the first name of student" << i + 1 << endl;
    //     cout << st[i].first_name;
    //     cout << endl
    //          << "enter the last name of student" << i + 1 << endl;
    //     cout << st[i].last_name;
    //     cout << endl
    //          << "enter the grade of student" << i + 1 << endl;
    //     cout << st[i].garde_point << endl;
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     if (st[i].last_name[0] > st[i + 1].last_name[0])
    //     {
    //         temp = st[i];
    //         st[i] = st[i + 1];
    //         st[i + 1] = temp;
    //     }
    //     if (st[i].last_name[0] == st[i + 1].last_name[0])
    //     {
    //         if (st[i].first_name[0] > st[i + 1].first_name[0])
    //         {
    //             temp = st[i];
    //             st[i] = st[i + 1];
    //             st[i + 1] = temp;
    //         }
    //         if((st[i].first_name[0] == st[i + 1].first_name[0]))
    //         {

    //         }
    //     }
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2 - i - 1; j++)
    //     {
    //         if (st[i].last_name[0] > st[i + 1].last_name[0])
    //         {
    //             temp = st[i];
    //             st[i] = st[i + 1];
    //             st[i + 1] = temp;
    //         }
    //     }
    // }
    sort(st, st + 2, compareTwoStudents);
    // sort(em, em + 2, compareTwoStudents);
    cout<<"the list of students is"<<endl;
    cout<<"last name     "<<"first name      "<<"grade point        ";
    for (int i = 0; i < 2; i++)
    {
        
        cout << st[i].last_name<<"     ";
      
        cout << st[i].first_name<<"      ";
        
        cout << st[i].garde_point << endl;
    }
    cout<<"the list of employees is"<<endl;
    cout<<"last name     "<<"first name      "<<"salary       ";
    for (int i = 0; i < 2; i++)
    {
        
        cout << em[i].last_name<<"     ";
      
        cout << em[i].first_name<<"      ";
        
        cout << em[i].salary << endl;
    }
    // for(int k=0;k<2;k++)
    // {
    //     if(st[k].garde_point>3)
    //     {
    //         if (st[i].last_name[0] == st[i + 1].last_name[0])
    //         {
    //             temp = st[i];
    //             st[i] = st[i + 1];
    //             st[i + 1] = temp;
    //         }
    //     }
    // }
    
    


}
