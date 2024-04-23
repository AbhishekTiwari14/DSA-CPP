class Solution {
private: 
    int findMaxRowIndex(vector<vector<int>>& mat, int r, int mid){
        int maxi = INT_MIN;
        int index = -1;
        for(int i=0; i<r; i++){
            if(mat[i][mid] > maxi){
                maxi = mat[i][mid];
                index = i;
            }
        }
        return index;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        cout<<c;
        int s = 0, e = c-1;
        while(s<=e){
            int mid = s + ((e-s)/2);
            int maxRow = findMaxRowIndex(mat, r, mid);
            if(mid-1>=0 && mat[maxRow][mid-1] > mat[maxRow][mid]){
                e = mid-1;
            } 
            else if(mid+1<c && mat[maxRow][mid+1] > mat[maxRow][mid]){
                s = mid+1;
            }
            else{
                return {maxRow, mid};
            }
        }
        return {-1,-1};
    }
};