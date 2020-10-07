//solution to Plus One

//Given a non-empty array of digits representing a non-negative integer, increment one to the integer.


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i=digits.size()-1;i>=0;i--) {
            int data = digits[i]+carry;
            digits[i] = data%10;
            carry = data/10;
        }
        if (carry==0) return digits;
        vector<int>ans;
        ans.push_back(1);
        for (int i=0;i<digits.size();i++) ans.push_back(digits[i]);
        return ans;
    }
};
