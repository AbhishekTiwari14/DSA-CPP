#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> stalls, int m, int k){
    int cowsPlaced = 1;
    int lastPosition = stalls[0];
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i] - lastPosition >= m){
            cowsPlaced++;
            lastPosition = stalls[i];
        }
        if(cowsPlaced == k) return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 1;
    int e = stalls.back();
    int ans = -1;
    while(s<=e){
        int m = s + ((e-s)/2);
        if(isPossible(stalls, m, k)){
            ans = m;
            s = m+1;
        }
        else e = m-1;
    }
    return ans;
}

int main(){
vector<int> stalls = {87, 93, 51, 81, 68, 99, 59};
int k = 4;
int ans = aggressiveCows(stalls, k);
cout<<ans; 

return 0;
}