#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; i++)
        {
            if(arr[i]>arr[j]) swap(arr[i], arr[j]);
        }
        
    }
    
}

int main(){
return 0;
}