#include<iostream>
#include<cstring>
using namespace std;
class binary
{
    string s;
    public:
    void read(void);
    int check_binary(void);
    void display(void);
    void ones_complement(void);
};
void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        s.at(i)='1';
        else
        s.at(i)='0';
    }
    cout<<"ones complement is"<<s<<endl;
    
}
void binary::read(void)
{
    cout<<"enter a binary no.";
    cin>>s;

}
int binary::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1' )
        {
        cout<<"the no. is not binary"<<endl;
        exit(0);
        }
    }
    return 0;   
}
void binary::display(void)
{
    cout<<"the original no. is"<<s<<endl;
}



int main()
{
binary b;
int z;
b.read();
z = b.check_binary();
if(z==0)
{
cout<<"the no. is binary"<<endl;
}
else
exit(0);
cout<<"hello";
b.display();
b.ones_complement();
return 0;
}