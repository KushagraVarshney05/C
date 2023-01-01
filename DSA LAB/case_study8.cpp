#include <iostream>
#include<bits\stdc++.h>
#include <string>
#include <algorithm>
#include <utility>
#include <set>
using namespace std;

int main() 
{
    int n, m, p;
    cout << "enter the size of two arrays";
    cin >> n >> m;
    cout << "enter the sumo of two variables";
    cin >> p;
    int arr1[n], arr2[m];
    cout << "enter the first array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter the second array";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    // sort(arr1, arr1 + n);
    // sort(arr2, arr2 + m);

    // for (int i = 0; i < n; i++)
    // {
    //     if (a == arr1[i])
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         a = arr1[i];
    //     }

    //     for (int j = 0; j < m; j++)
    //     {
    //         if (b == arr2[j])
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             b = arr2[j];
    //             if (a + b == k)
    //             {
    //                 cout << "(" << a << "," << b << ")" << endl;
    //             }
    //         }
    //     }
    // }
    int z=m*n;
    int k=0;
    pair<int,int> arr[z];
    for(int i;i<n;i++)
    {
        for(int j=0;j<m;j++,k++)
        {
            arr[k].first=arr1[i];
            arr[k].second=arr2[j];
            k++;

        }
    }
    set<pair<int ,int>> s;
    for(int i=0;i<=k;i++)
    {
        if(arr[k].first+arr[k].second==p)
                s.insert(arr[i]);
    }
    for(auto &it:s)
    {
        cout<<"("<<it.first<<","<<it.second<<")"<<endl;
    }
}