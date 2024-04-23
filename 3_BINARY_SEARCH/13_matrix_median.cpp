#include <bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &matrix, int m, int n) {
    int s= 1, e = 1e9;
    while(s<=e){
        int mid = s + ((e-s)/2);
        int countSmaller = 0;
        for(int i=0; i<m; i++){
            int cnt =  upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            countSmaller+= cnt;
        }
        if(countSmaller<= (m*n) / 2) s=mid+1;
        else e=mid-1;
    }
    return s;
}