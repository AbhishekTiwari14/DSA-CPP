#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        for(int j=i; j>=0; j--){
            if(arr[j]<arr[j-1]) swap(arr[j], arr[j-1]);
        }
    }
    
}

int main(){

int ar[8] = {4,1,6,2,7,7,3,5};
insertionSort(ar, 8);
for(auto i:ar) cout<<i;

return 0;
}