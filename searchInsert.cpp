//using binary search

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        if(target>nums.back()) return nums.size();
        
        while(low<high){
            int mid=(low+high)/2;
            if(target==nums[mid]) return mid;
            if(target>nums[mid]) low=mid+1;
            else high=mid;
        }
        return low;
    }
};
