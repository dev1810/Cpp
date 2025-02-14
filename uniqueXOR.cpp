#include<iostream>
#include<vector>

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i: nums){
            ans = ans ^ i;
        }    
        return ans;
        }
    };


// n ^ n = 0;
// n ^ 0 = n;