#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int i = 0;
            for (int j = 0; j < nums.size(); j++) {
                // Bring all non zero numbers to the start of the array
                if (nums[j] != 0) {
                    nums[i++] = nums[j];
                } 
            }
    
            while(i<nums.size()){
                nums[i++] = 0;
            }
        }
    };