class Solution {
private:
    int calculateTime(vector<int> piles, int m){
        int time = 0;
        for(int i=0; i<piles.size(); i++){
            int t = ceil(double(piles[i])/double(m));
            time+= t;
        }
        return time;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e = INT_MIN;
        for(int i=0; i<piles.size(); i++){
            e = max(e, piles[i]);
        }
        int ans = -1;
        while(s<=e){
            int m = s + ((e-s)/2);
            long long timeTaken = calculateTime(piles, m);
            if(timeTaken <= h){
                ans = m;
                e = m-1;
            } 
            else{
                s = m+1;
            }
        }
        return ans;
    }
};