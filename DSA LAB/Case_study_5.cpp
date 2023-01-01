#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int person[10];
    cout << "enter the weight of 10 persons" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> person[i];
    }
    sort(person, person + 10);
    int count = 0, weight = 0;
    for (int i = 0; i < n; i++)
    {
        weight += person[i];
        if (weight <= 700)
        {
            count++;
        }
        else
            break;
    }
    cout << "tottal no. of person that have to walk are   " << (n - count) << endl;
}
