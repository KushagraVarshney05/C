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
    cout << "unorted array is" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    cout << endl;
    for (i = 0; i < n-1 ; i++)
    {
        pos = i;
        b=a[i];

        for (j = i; j < n; j++)
        {
            if (b > a[j])
            {
                b = a[j];
                pos=j;
            }
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;

        
    }
    cout << "the sorted array is" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }

    return 0;
}
