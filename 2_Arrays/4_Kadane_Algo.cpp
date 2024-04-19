#include <bits/stdc++.h>
using namespace std;

//Q) Find sum of largest sum subarray  
int kadaneAlgo(vector<int> ar){
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < ar.size(); i++){
        sum+= ar[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    return maxi;
}

//Q) Return the start & end index of subarray with largest sum 
vector<int> kadaneAlgo2(vector<int> ar){
    int sum = 0;
    int maxi = INT_MIN;
    int s=0, e=0;
    for (int i = 0; i < ar.size(); i++){
        if(sum == 0) s=i;
        sum+= ar[i];
        if(maxi < sum){
            maxi = sum;
            e = i;
        }
        if(sum < 0) sum = 0;
    }
    return maxi;
}

int main(){
return 0;
}