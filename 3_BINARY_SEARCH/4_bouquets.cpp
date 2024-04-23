class Solution {
private:
    int countBouquets(vector<int>& bloomDay, int mid, int k, int n){
        int count = 0;
        int bouquets = 0;
        for(int i=0; i<n; i++){
            if(mid>= bloomDay[i]){
                count++;
            }
            else{
                bouquets += count/k;
                count = 0;
            }
            if(i == n-1) bouquets += count/k;
        }
        return bouquets;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(m > n/k) return -1;
        int s = INT_MAX, e = INT_MIN;
        for(int i=0; i<n; i++){
            s = min(s, bloomDay[i]);
            e = max(e, bloomDay[i]);
        }
        int ans = 0;
        while(s<=e){
            int mid = s + ((e-s)/2);
            int bouquets = countBouquets(bloomDay, mid, k, n);
            if(bouquets >= m){
                ans = mid;
                e = mid-1; 
            } 
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};