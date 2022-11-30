
#include <bits/stdc++.h>

#include <math.h>
using namespace std;
int main()
{
    // int n, i = 0;
    // cin >> n;
    // int ans = 0;
    // n = abs(n);
    // {
    //     while (n)
    //     {
    //         int dig = n & 1;
    //         n = n >> 1;
    //         ans = (dig * pow(10, i)) + ans;
    //         i++;
    //     }
    // }
    // string bin;
    // bin = to_string(ans);
    // // cout << bin;
    // int len = bin.length();
    // for (int i = 0; i < len; i++)
    // {
    //     if (bin[i] == '0')
    //     {
    //         bin[i] = '1';
    //     }
    //     else
    //     {
    //         bin[i] = '0';
    //     }
    // }
    // // cout<<bin;
    // for(int i=len-1;i<=0;i--)
    // {
    //     if(bin[i]=='1')
    //     {
    //         bin[i]=='0';
    //     }
    //     else
    //     {
    //         bin[i]=1;
    //         break;
    //     }
        
    // }
    // if(i==-1)
    // {
    //     bin='1'+bin;
    // }
    // cout<<bin;

    int a,b;
    cin>>a>>b;
    cout<<(a^b);
    return 0;
}
