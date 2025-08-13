//数组_有序数组的平方和_977
#include<iostream>
#include<vector>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int l = 0, r = 0,sum=0,result=0;
    while (r<=nums.size()) {
        if (sum < target&&r!=nums.size()) {
            sum += nums[r++];
            result++;
        }else {
            if (sum - nums[l] >= target) {
                sum -= nums[l];
                l++; result--;
            }
            else if (r<nums.size()&&nums[r] > nums[l]) {
                sum -= nums[l];
                sum += nums[r];
                l++; r++;
            }
            else {
                break;
            }
        }
    }
    return sum>=target?result:0;

}

int main() {
    /*vector<int> nums = { 2,3,1,2,4,3 };
    int target = 7;*/
    /*vector<int> nums = {1,4,4};
    int target = 4;*/
    vector<int> nums = { 1,1,1,1,1,1,1,1 };
    int target = 11;
    return minSubArrayLen(target, nums);
   
}