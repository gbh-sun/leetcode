//数组_移除元素_27
#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int slowIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
        //慢指针：不包含目标值的子数组的尾部；快指针：递增
        //开始是非目标值时，快慢指针同步；遇到目标值后慢指针不动，快指针递增，保证了慢指针前全部为非目标值；在遇到非目标值后慢指针更新;慢指针索引即为不包含目标值元素数量
        if (nums[fastIndex] != val) {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
}
//法二：左右指针
int removeElement2(vector<int>& nums, int val) {
    int left = 0, right = nums.size() - 1;
    while (left <=right) {
        if (nums[left] == val) {
            nums[left] = nums[right];
            right--;
        }
        else {
            left++;
        }
    }
    return left;
}
int main() {
    int val = 0;
    vector<int> nums = { -1,0,3,5,9,12 };
    return removeElement2(nums, val);
}