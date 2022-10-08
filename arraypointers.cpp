#include <iostream>
using namespace std;
class array
{
private:
    int *val;
    int rsum, csum, r, c, i, j;

public:
    array();
    void display();
};
array::array()
{
    cout << "enter the no. of rows and column" << endl;
    cin >> r >> c;
    val = new int[r * c];
    cout << "enter the elements" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> val[i * c+j];
        }
    }
}
void array::display()
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<val[i*c+j];
        }
        cout<<endl;
    }
    // for (i = 0; i < r; i++)
    // {
    //     rsum = 0;
    //     for (j = 0; j < c; j++)
    //     {
    //         rsum = rsum + val[i * j];
    //     }
    //     cout << "the sum of" << i + 1 << "row is" << rsum<<endl;
    // }
    // for (j = 0; j < r; j++)
    // {
    //     csum = 0;
    //     for (i = 0; i < c; i++)
    //     {
    //         csum = csum + val[i * j];
    //     }
    //     cout << "the sum of" << j + 1 << "column is" << csum<<endl;
    // }
}
int main()
{
    array z;
    z.display();
}
