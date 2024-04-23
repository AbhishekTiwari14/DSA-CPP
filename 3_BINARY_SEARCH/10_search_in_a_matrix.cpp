#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int s = 0, e = (r*c)-1;
        while(s<=e){
            int mid = s + ((e-s)/2);
            int i = mid/c;
            int j = mid%c;
            if(matrix[i][j] == target){
                return true;
            } 
            else if(matrix[i][j] < target){
                s = mid + 1;
            }
            else{
                e = mid - 1; 
            }
        } 
        return false;
    }

int main(){
return 0;
}