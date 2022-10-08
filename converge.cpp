#include<iostream>
#include<cstring>

using namespace std;
void converge(char *targ, char *src);
int main(void)
{
    char target[80] ="xxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    converge(target, "this is a test of converge() .");
    cout<<"final string"<<target<<endl;
    return 0;
}
void converge(char *targ, char *src)
{
    int i,j;
    cout<<targ;
    for(i=0,j=strlen(src);i<=j; i++,j--)
    {
        targ[i]=src[i];
        targ[j]=src[j];
        cout<<targ<<endl;

    }
}