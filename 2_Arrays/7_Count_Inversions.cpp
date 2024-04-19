#include <bits/stdc++.h>
using namespace std;

//Q) Count no. of inversions (an inversion is when ar[i] > ar[j] & i<j)

int mergeTwoArraysInSortedManner(int arr[], int s, int m, int e){
    int left = s; //starting index of left subarray
    int right = m+1; //starting index of right subarray
    int count = 0;
    vector<int> temp;
    while(left<=m && right<=e){
        if(arr[left] <= arr[right]) temp.push_back(arr[left++]);
        else{ 
            count+= m-left+1;   //CHANGE MADE
            temp.push_back(arr[right++]);
        }
    }
    while(left<=m) temp.push_back(arr[left++]);
    while(right<=e) temp.push_back(arr[right++]);
    for (int i = s; i <= e; i++) {
        arr[i] = temp[i - s];
    }
    return count; 
}

int mergeSort(int arr[], int s, int e){
    int m = s + ((e-s)/2);
    int count = 0;
    if(e<=s) return count;
    count+= mergeSort(arr, 0 , m);
    count+= mergeSort(arr, m+1, e);
    count+= mergeTwoArraysInSortedManner(arr, s, m, e);
    return count;   
}


int main(){

int arr[6] = {2,5,6,1,3,4};
int ans = mergeSort(arr, 0, 5);
cout<<ans;  //7

return 0;
}