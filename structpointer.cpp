#include<iostream>
using namespace std;
struct my{
    int price;
    my *p;
};
int main()
{
 my a,b;
 a.price=400;
 b.price=500;
 b.p=NULL;
 a.p=&b;
 cout<<a.p->price;
}