#include <iostream>
#include <cmath>
using namespace std;

class simple
{
protected:
    int a, b;
    int opr;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void operation()
    {
        cout << "enter the operation" << endl
             << "1 for sum"
             << endl
             << "2 for subtract" << endl
             << "3 for multiply" << endl
             << "4 for division" << endl;
        cin >> opr;
        switch (opr)
        {
        case 1:
            cout << "the sum is" << a + b;
        case 2:
            cout << "the difference is" << a - b;
        case 3:
            cout << "the multiplication is" << a * b;
        case 4:
            cout << "the division is" << float(a / b);
        }
    }
};
class scientific
{
protected:
    int a, b;
    int opr;

public:
    void get(int x, int y)
    {
        a = x;
        b = y;
    }
    void operations()
    {
        cout << "enter the operation" << endl
             << "5 for sine "
             << endl
             << "6 for cos" << endl
             << "7 for tan" << endl
             << "8 for expo" << endl;
        cin >> opr;
        switch (opr)
        {
        case 5:
            cout << "the sine is" << sin(a);
        case 6:
            cout << "the cos is" << cos(a);
        case 7:
            cout << "the tan is" << tan(a);
        case 8:
            cout << "the expo is" << exp(a);
        }
    }
};
class hybrid : public simple, public scientific
{
    public:
    int a ,b;
    
};
int main()
{
    hybrid my;
    my.get(4,4);
    my.operation();
    return 0;

}

