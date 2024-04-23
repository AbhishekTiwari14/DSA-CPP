#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();        
    int n2 = nums2.size();  
    if(n1<n2) return findMedianSortedArrays(nums2, nums1);
    int s=0, e=n2;
    while(s<=e){
        int mid = s + ((e-s)/2);
        int left = (n1+n2+1)/2;
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid>0) l1 = nums2[mid-1];
        if(left-mid>0) l2 = nums1[left-mid-1];
        if(n2>mid) r1 = nums2[mid];
        if(n1 > left-mid) r2 = nums1[left-mid];
        if(l1>r2) e = mid-1;
        else if(l2>r1) s = mid+1;
        else{
            if((n1+n2)%2 == 0) return (max(l1,l2) + min(r1,r2))/2.0;
            else return max(l1,l2);
        } 
    }
}



int main(){
return 0;
}