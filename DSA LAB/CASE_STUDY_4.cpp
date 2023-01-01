#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        float x;
        cout << "enter the rain probabality(x) of day  " << i + 1 << " (constraints:0<=x<=1)" << endl;
        cin >> x;
        if (x < 0.5 && x >= 0.1)
        sum++;
        if (x <= 0)
        sum += 2;
    }
    cout << "total no. of matches are   " << sum << endl;
}
