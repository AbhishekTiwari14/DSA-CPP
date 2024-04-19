#include <bits/stdc++.h>
using namespace std;

int maxProductSubarray(vector<int> arr, int n){
    int pre = 1, suff = 1;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        pre*= arr[i];
        suff*= arr[n-1-i];
        ans = max(ans, max(pre,suff));
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;
    }
    return ans;
}

int main(){
return 0;
}