#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    int noSwaps = true;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
                noSwaps = false;
            }
            if(noSwaps) return;
        }
    }
    
}

int main(){

    return 0;
}