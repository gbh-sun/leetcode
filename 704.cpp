//数组_二分查找_704
#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, mid = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (nums[mid] < target) {
            l = mid + 1;
        }
        else if (nums[mid] > target) {
            r = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1;
}
int main() {
    int target = 0;
    vector<int> nums={-1,0,3,5,9,12};
    return search(nums,target);
}