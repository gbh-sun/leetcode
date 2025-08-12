//����_�Ƴ�Ԫ��_27
#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int slowIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++) {
        //��ָ�룺������Ŀ��ֵ���������β������ָ�룺����
        //��ʼ�Ƿ�Ŀ��ֵʱ������ָ��ͬ��������Ŀ��ֵ����ָ�벻������ָ���������֤����ָ��ǰȫ��Ϊ��Ŀ��ֵ����������Ŀ��ֵ����ָ�����;��ָ��������Ϊ������Ŀ��ֵԪ������
        if (nums[fastIndex] != val) {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
}
//����������ָ��
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