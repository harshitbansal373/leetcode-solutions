//Solution to Two Sum problem

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        for (int i=0;i<nums.size();i++) {
            umap[nums[i]] = i+1;
        }
        for (int i=0;i<nums.size();i++) {
            if (umap[target-nums[i]]) {
                if (umap[target-nums[i]]-1!=i)
                return {i,umap[target-nums[i]]-1};
            }
        } return {-1,-1};
    }
};
