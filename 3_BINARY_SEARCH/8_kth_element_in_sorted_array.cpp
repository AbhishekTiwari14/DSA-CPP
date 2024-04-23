int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
    if(n>m) return kthElement(arr2, arr1, m, n, k);
    int left = k;
    int s=0, e = n;
    while(s<=e){
        int mid = s+ ((e-s)/2);
        int l1 = INT_MIN, l2 = INT_MIN;   
        int r1 = INT_MAX, r2 = INT_MAX;
        if(mid>0) l1 = arr1[mid-1];
        if(left-mid>0) l2 = arr2[left-mid-1];
        if(n>mid) r1 = arr1[mid];  
        if(m>left-mid) r2 = arr2[left-mid];
        if(l1>r2) e = mid-1;
        else if(l2>r1) s = mid+1;
        else{
            return max(l1,l2);
        }   
    }
    return 0;
}