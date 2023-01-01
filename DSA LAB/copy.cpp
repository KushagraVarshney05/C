#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    vector<int> nums{1,4,3,4,1,2,1,3,1,3,2,3,3};
    vector<int> v(nums);
    sort(v.begin(),v.end());
        int n=nums.size();
        int a=n/2;
        int b=n-a;
        int k=0;
        for(int i=b-1,j=n-1;i>=0&&j>=b&&k<n;i--,j--)
        {
            nums[k]=v[i];
            k++;
            nums[k]=v[j];
            k++;
        }
        if(k<n)
        {
            nums[k]=v[b-1];
        }
        for(auto i:nums)
        {
            cout<<i<<endl;
        }
}
