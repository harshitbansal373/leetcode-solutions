// Problem link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1, m = -1, index;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > m) {
                index = i;
                m = nums[i];
            }
        }
        product *= m - 1;
        m = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == index) continue;
            m = max(m, nums[i]);
        }
        product *= m - 1;
        return product;
    }
};
