// https://leetcode.com/problems/combination-sum-iii/

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector< vector<int> > ans;
        vector<int> v;
        if(k==1){
            v.push_back(n);
            ans.push_back(v);
            return ans;
        }
        if(k==9){
            for(int i=1;i<=9;i++){
                v.push_back(i);
            }
            ans.push_back(v);
            return ans;
        }
        vector<bool> vis(10, false);
        for(int i=1;i<=9;i++){
            dfs(k-1, n-i, i, v, ans, vis);
        }
        return ans;
    }
    
    void dfs(int k, int n, int i, vector<int> v, vector< vector<int> > &ans, vector<bool> vis){
        v.push_back(i);
        vis[i]=true;
        if(n==0 && k==0){
                ans.push_back(v);
            return;
        }
        if(k==0 || n==0){
            return;
        }
        for(int j=i+1;j<=9;j++){
            if(!vis[j] && n-j>=0){
                dfs(k-1, n-j, j, v, ans, vis);
            }
        }
        return ;
    }
    
};
