#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;
    v.push_back(2);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;
    v.push_back(3);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;
    v.push_back(4);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;
    v.push_back(5);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;

    cout << "element" << v[2] << endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }
    vector<int> a(5,2);
    for(int i:a)
    {
        cout<<i<<endl;
    }
    vector<int> vec(10);
    // vec.reserve(1000);
    for(int i=0;i<20;i++)
    {
        vec.push_back(i);
        cout<<"size:"<<vec.size()<<"     capacity:"<<vec.capacity()<<endl;
    }
    for(auto i:vec)
    {
        cout<<*i<<endl;
    }

    return 0;
}