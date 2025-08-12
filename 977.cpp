//数组_有序数组的平方和_977
#include<iostream>
#include<vector>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    vector<int> result(nums.size(), 0);
    int index = nums.size() - 1;
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        if (nums[left] * nums[left] <= nums[right] * nums[right]) { //可优化为比较-left和right
            result[index--] = nums[right] * nums[right];
            right--;
        }
        else {
            result[index--] = nums[left] * nums[left];
            left++;
        }
    }
    return result;
}
int main() {
    vector<int> result;
    vector<int> nums = { -4,-1,0,3,10 };
    result=sortedSquares(nums);
    for (auto num : result) {
        cout << num << endl;;
    }
    return -1;
}