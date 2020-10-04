// https://leetcode.com/problems/insert-interval/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& A, vector<int>& B) {
        vector< vector<int> > ans;
        int n = A.size(), c=0;
        for(int i=0;i<n;i++){
            if(A[i][1] < B[0]){
                ans.push_back(A[i]);
            } else{
                c=1;
                if(B[1]<A[i][0]){
                    ans.push_back(B);
                } else{
                    int s = min(A[i][0], B[0]), e = max(A[i][1], B[1]);
                    i+=1;
                    while(i<n){
                        if(A[i][0]<=e){
                            e = max(e, A[i][1]);
                            i+=1;
                        } else{
                            break;
                        }
                    }
                    ans.push_back({s, e});
                }
                while(i<n){
                    ans.push_back(A[i]);
                    i+=1;
                }
            }
        }
        if(c==0){
            ans.push_back(B);
        }
        return ans;
    }
};
