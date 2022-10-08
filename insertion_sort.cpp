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
    cout << "unsorted array is" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    cout << endl;
    for (i = 1; i < n; i++)
    {
        for (j = i; j >= 1; --j)
        {
            if (a[j] < a[j - 1])
            {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
            else
            {
                break;
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
