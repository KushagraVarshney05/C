#include <iostream>
using namespace std;
int main()
{
    int a[20], i, j, pos, temp, b, c, n;
    cout << "enter the no. of elements in array" << endl;
    cin >> n;
    cout << "enter the elements" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "unorted array is";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "the sorted array is" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }

    return 0;
}
