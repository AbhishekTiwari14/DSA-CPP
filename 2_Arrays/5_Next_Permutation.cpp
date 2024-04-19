#include <bits/stdc++.h>
using namespace std;

//Q) Given an array of ints, find next permutation of it. Ex.) [1,2,3]->[1,3,2]-> [2,1,3] -> [2,3,1] -> [3,1,2] -> [3,2,1] & then back to [1,2,3].

void nextPermutation(vector<int>& nums) {       
        int n = nums.size(); 
        int index = -1;                      
        //Step1: Find index of 1st dip moving from R->L
        for(int i=n-1; i>0; i--){                    
            if(nums[i-1] < nums[i]){           
                index = i-1;
                break;
            }
        }
        //Step1.2-> if no such index exists, then reverse of the no. is ans
        if(index == -1){
            reverse(nums.begin(), nums.end());
        }
        //Step2: Moving from R->L, swap index no. with the 1st no. you find greater than it
        else{
            for(int i=n-1; i> index; i--){
                if(nums[i] > nums[index]){
                    swap(nums[i], nums[index]);
                    break;
                }
            }
            //Step3: Reverse the part on right of index  
            reverse(nums.begin()+index+1, nums.end());
        } 
}

int main(){
return 0;
}