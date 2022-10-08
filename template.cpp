#include <iostream>
using namespace std;
template <class t>
class vector
{
    int size;
    t arr[];

public:
    vector(int a)
    {
        size = a;
        for (int i = 0; i < size; i++)
        {
            cout << "enter the no.";
            cin >> arr[i];
        }
    }
       t sum()
      {
          t sum=0;
          for (int i = 0; i < size; i++)
          {
              sum+=arr[i];
          }
          return sum;
      }
};
int main()
{
    vector<float> my(5);
     float k=my.sum();
     cout<<k;

    return 0;
}

