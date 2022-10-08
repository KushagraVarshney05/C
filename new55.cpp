
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;int main() {
    int n, q, k, i, j;
    cin>>n>>q;
    int *arr[n];
    
    for(int i = 0; i < n; i++){
        cin>>k;
        arr[i] = new int[k];
        for(int j = 0; j < k; j++){
            cin>>arr[i][j];
        }
    }
    while(q--){
        int a, b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}