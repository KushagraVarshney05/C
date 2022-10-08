#include <iostream>
#include<cstring>
using namespace std;
struct person
{
    int pid;
    char pname[30];
    char address[50];
    int phone[10];
};
class stack
{
    person P[10];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push();
    void pop();
    void display();
};
// void stack::push()
// {
//     person p;
//     if (top == 10)
//     {
//         cout << "person stack is full" << endl;
//     }
//     else
//     {
//         cout << "enter person id";
//         cin >> p.pid;
//         cout << "enter person name";
//         gets(p.pname);
//         cout << "enter the address";
//         gets(p.address);
//         cout << "enter the phone no.";
//         cin>>p.phone;

//         P[top] = p;
//         top++;
//         cout << "top ="<< top << endl;
//     }
// }
// void stack::pop()
// {
//     person p;
//     if (top == 0)
//     cout << "person stack is empty\n";
//     else
//     {
//         p = P[top];
//         top--;
//         cout << "the deleted person details are" << endl;
//         cout << p.pid << endl;
//         cout << p.pname << endl;
//         cout << p.address << endl;
//         cout << p.phone << endl;
//     }
// }
// void stack:: display()
// {
//     if(top==-1)
//     cout<<"person stack is empty";
//     else
//     {
//         cout<<"person stack is as follows";
//         for(int i=top-1;i>=0;i--)
//         cout<<endl<<P[i].pid<<endl<<P[i].pname<<endl<<P[i].address<<endl<<P[i].phone<<endl;
//     }
// }
// int main()
// {
//     int ch;
//     stack s;
//     do
//     {
//         cout<<"stack operation menu";
//         cout<<"\n 1:push";
//         cout<<"\n 2:pop";
//         cout<<"\n 3:display";
//         cout<<"\n 4:quit";
//         cin>>ch;
//         switch(ch)
//         {
//             case 1:s.push();
//             break;
//             case 2:s.pop();
//             break;
//             case 3:s.display();
//             break;
//             case 4:exit(0);
//         }
//     }while(ch!=4);
// }