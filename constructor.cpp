#include<iostream>
using namespace std;
class banker{
    int principle;
    float interest;
    int time;
    int total;
    public:
    banker(){};
    banker(int p,int r,int t){
        principle=p;
        interest=float(r/100);
        time=t;
        total=p;
        for( int i=0;i<t;i++)
        {
            total=total*(1+interest);
        }
    }
    banker(int p,float r,int t);
    void show(void)
    {
        cout<<"total return after "<<time<<" years on a sum of "<<principle<<" is "<<total<<endl;
    }
};
banker::banker(int p,float r,int t)
{
     principle=p;
        interest=r;
        time=t;
        total=p;
        for( int i=0;i<t;i++)
        {
            total=total*(1+interest);
        }

}
int main()
{
    banker b1,b2,b3;
    int p ,t, R;
    float r;
    cout<<"enter the values of p,r,t respectively (r should be as ratio not as percentage)"<<endl;
    cin>>p>>r>>t;
    b1=banker(p, r, t);
    b1.show();
    cout<<"enter the values of p,R,t respectively (R should be as percentage not as ratio";
    cin>>p>>R>>t;
    b2=banker( p, R, t);
    b2.show();
    b3.show();
    return 0;

}