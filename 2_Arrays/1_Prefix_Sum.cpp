#include <bits/stdc++.h>
using namespace std;

//Q1) Find longest subarray with sum = k.
//Sol) Prefix Sum Hashmap: TC: O(N), SC: O(N)

int longestSubarrayWithSumK(vector<int> nums, int k){
    unordered_map<int,int> prefixSum;
    prefixSum[0] = -1;
    int sum = 0, ans = 0;
    for(int i=0; i<nums.size(); i++){
        sum+= nums[i];
        if(prefixSum.find(sum-k) != prefixSum.end()){
            ans = max(ans, prefixSum[sum-k]);
        }
        if(prefixSum.find(sum) == prefixSum.end()) prefixSum[sum] = i;
    }
    return ans;
}


int main(){
return 0;
}
