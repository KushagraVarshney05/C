#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    int ans = 0;
    if (n >= 0)
    {
        while (n)
        {
            int dig = n & 1;
            n = n >> 1;
            ans = (dig * pow(10, i)) + ans;
            i++;
        }
    }
    else
    {
    
    }
    cout << ans+1;
    return 0;
}
