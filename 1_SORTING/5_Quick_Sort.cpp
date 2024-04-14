#include <bits/stdc++.h>
using namespace std;

int sortPivotElement(int arr[], int s, int e){
    int pivotElement = arr[s];
    int pivotIndex = s;
    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivotElement){ 
            swap(arr[i], arr[pivotIndex]);
            pivotIndex++;
        }
    }
    swap(arr[s], arr[pivotIndex]);
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s>=e) return;
    int pivotIndex = sortPivotElement(arr, s, e);
    quickSort(arr, s, pivotIndex-1); //Sorting the unsorted subarray on left of pivot index
    quickSort(arr, pivotIndex+1, e); //Sorting the unsorted subarray on right of pivot index
}




int main(){

return 0;
}