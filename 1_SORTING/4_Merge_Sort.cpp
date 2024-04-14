#include <bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int s, int e){
    int m = s + ((e-s)/2);
    if(e<=s) return;
    mergeSort(arr, 0 , m);
    mergeSort(arr, m+1, e);
    mergeTwoArraysInSortedManner(arr, s, m, e);
}

void mergeTwoArraysInSortedManner(int arr[], int s, int m, int e){
    int left = s; //starting index of left subarray
    int right = m+1; //starting index of right subarray
    vector<int> temp;
    while(left<=m && right<=e){
        if(arr[left] <= arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    while(left<=m) temp.push_back(arr[left++]);
    while(right<=e) temp.push_back(arr[right++]);
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i - s];
    }
}

int main(){
return 0;
}