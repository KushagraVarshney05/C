#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int age,stnd ;
    string first,last,st;
    public:
    void set_age( int a);
    int get_age();
    void set_standard( int sd);
    void set_first_name(string first_name);
    void set_last_name(string last_name);
    int get_standard();
    string get_first_name();
    string get_last_name();
    string to_string();
};
void Student :: set_age(int a)
{
   age=a; 
}
void Student :: set_first_name(string first_name)
{
   first=first_name; 
}
void Student :: set_last_name(string last_name)
{
    
   last=last_name; 
   
}
void Student :: set_standard(int sd)
{
    stnd=sd; 
}
int Student ::get_age()
{
    return age;
}
string Student ::get_first_name()
{
    return first;
}
string Student ::get_last_name()
{
    return last;
}
int Student ::get_standard()
{
    return stnd;
}
string Student ::to_string()
{
    char c=',';
    string x,y;
    stringstream a,b;
    a<<age;
    b<<stnd;
    a>>x;
    b>>y;
    st=x+c+first+c+last+c+y;
    return st;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
