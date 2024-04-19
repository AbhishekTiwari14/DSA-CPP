#include <bits/stdc++.h>
using namespace std;

//Q) Given a 2D Matrix, if an element is 0, set its entire row and column to 0's.

//Logic - Keep track of any element in ith row = 0 by marking 1st element of that row([i][0]) = 0 & later mark all elements in the row whose first element = 0 as 0; similarly for cols
//but 1 problem is that [0][0] keeps track for 0th row as well as 0th col which is not correct(since, its possible that an element in 1st row = 0 but no element in 1st col = 0 or vv), so we create int col0 to keep track of 1st col independently and [0][0] keeps track of 1st row independently     
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();    //no. of rows 
        int n = matrix[0].size(); //no. of cols
        int col0 = 1;   //If we find any element in 0th col = 0, we mark col0 = 0    
        for(int i=0; i<m; i++){
           for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0; //If we find any element in ith row = 0, we mark [i][0] = 0 
                    if(j!=0)
                        matrix[0][j] = 0; //If we find any element in jth col = 0, we mark [0][j] = 0 
                    else
                        col0 = 0;  //If we find any element in 0th col = 0, we mark col0 = 0   
                }   
            }    
        }
        for(int i=1; i<m; i++){  //Dealing with All elements except for 1st row/col elements
            for(int j=1; j<n; j++){
//If an element belongs to a row/col, 1st element of which has been marked 0, we make that element 0.
                if(matrix[i][j] != 0){
                    if(matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }
        //Dealing with 1st row/col elements
        if(matrix[0][0] == 0){    
            for(int j=0; j<n; j++){
                matrix[0][j] = 0;
            }
        }
        if(col0 == 0){
            for(int i=0; i<m; i++){
                matrix[i][0] = 0;
            }
        }
    }

int main(){
return 0;
}