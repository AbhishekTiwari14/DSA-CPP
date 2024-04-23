#include <bits/stdc++.h>
using namespace std;

//Q) given a 'sorted' array having all values twice except for one value which occurs only once, find the unique value.

var singleNonDuplicate = function(nums) {
    let s=0, e = nums.length-1;
    //edge cases
    if(e === 1) return nums[0];
    if(nums[0] !== nums[1]) return nums[0];
    if(nums[e] !== nums[e-1]) return nums[e];
    s++, e--;  
    while(s<=e){
        let m = s + Math.floor((e-s)/2);
        if(nums[m] != nums[m+1] && nums[m]!= nums[m-1]){
            return nums[m];
        }
        else{
            if(nums[m] === nums[m+1]){
                if(m%2===0){
                    s = m+1;
                }
                else e = m-1;
            }
            else{
                if(m%2===0){
                    e = m-1;
                }
                else s = m+1;
            }
        }
    }
    return -1;
};