// https://leetcode.com/problems/word-break/

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string, int> m;
        vector<int> dp(s.length(), -1);
        for(auto i:wordDict){
            m[i]=1;
        }
        return check(s, m, 0, dp);
    }
    
    bool check(string &A, map<string, int> &m, int i, vector<int> &dp){
        if(i>=A.length()){
            return true;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        string s="";
        for(int j=i;j<A.length();j++){
            s+=A[j];
            if(m[s]!=0 && check(A, m, j+1, dp)){
                dp[i]=1;
                return true;
            }
        }
        dp[i]=0;
        return false;
    }
    
};
