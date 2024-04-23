#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int max = 0;
    int index = -1;
    for(int i=0; i<n; i++){
        int count = matrix[i].end() - lower_bound(matrix[i].begin(), matrix[i].end(), 1);
        if(count > max){
            max = count;
            index = i;
        }
    }
    return index;
}