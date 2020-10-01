//Solution to Find All Numbers Disappeared in an Array. 

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        if (nums.size()==0) return nums;
        vector<int>map(nums.size()+1,0);
        for (int i=0;i<nums.size();i++) {
            map[nums[i]]++;
        }
        vector<int>dis;
        for (int i=1;i<map.size();i++) {
            if (map[i]==0) dis.push_back(i);
        } return dis;
    }
};
