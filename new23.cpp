#include<iostream>
#include<cstring>
using namespace std;

typedef char STRING[80];
void mixitnow(STRING S)
{
    int size=strlen(S);
    for(int l=0;l<size-1;l+=2)
    {
        char ws=S[l];
        S[l]=S[l+1];
        S[l+1]=ws;
    }
    for(int l=1;l<size;l+=2)
    if(S[l]>='M' && S[l]<='U')
    S[l]='@';

}

int main()
{
    STRING word="CRACKAJACK";
    mixitnow(word);
    cout<<word<<endl;
    cout<<"hello";
    return 0;
}