#include <bits/stdc++.h>
using namespace std;

//(Q1) FInd the majority element(count >n/2) in given array(given that majority element always exists)

int MVA(vector<int> ar){
    int element = ar[0];
    int count = 1; 
    for(int i=1; i<ar.size(); i++){
        if(ar[i] == element) count++;
        else count--;
        if(count<0){
            element = ar[i];
            count = 1;
        }
    }
}

//(Q2) FInd the majority elements(count >n/3) in given array

vector<int> majorityElement(vector<int>& nums) {
        int count1 =0, count2 = 0;
        vector<int> ans;
        int element1 =INT_MIN, element2 = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(count1 == 0 && nums[i] != element2){
                element1 = nums[i];
                count1++;
            }
            else if(count2 == 0 && nums[i] != element1){
                element2 = nums[i];
                count2++;
            }
            else if(nums[i] == element1){
                count1++;
            }
            else if(nums[i] == element2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0, count2 =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == element1) count1++;
            else if(nums[i] == element2) count2++;
        }
        if(count1> nums.size()/3) ans.push_back(element1);
        if(count2> nums.size()/3) ans.push_back(element2);
        return ans;
    }

int main(){
return 0;
}