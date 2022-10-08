#include <iostream>
#include <fstream>
using namespace std;
/* fstream base-->ofstream and ifstream;
 */
int main()
{
    // string st = "hello kush", st2;
    //  ofstream out("sample60.txt");
    //  out << st;
    // out.close();
    // ifstream in("sample60.txt");
    // in >> st2;
    // cout << st2;
    string st="hellokush60",s2;
    fstream out;
    out.open("sample60.txt",ios::in|ios::out);
    out<<st;
    out>>s2;
    cout<<s2;
    out.close();
    return 0;
}
