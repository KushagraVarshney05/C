#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "eneter the number of rows";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << "    ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "*"
                 << "    ";
        }
        for (int j = n-i; j > 0; j--)
        {
            
            cout << j << "    ";
        }

        cout << endl
             << endl;
    }
}
