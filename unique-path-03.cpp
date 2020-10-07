// https://leetcode.com/problems/unique-paths-iii/

class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int c=0, c1=0, s=0, e=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    s=i;
                    e=j;
                } else if(grid[i][j]==0 || grid[i][j]==2){
                    c1+=1;
                }
            }
        }
        dfs(grid, s, e, n, m, c, c1);
        return c;
    }
    
    bool check(int x, int y, int n, int m){
        if(x<0 || y<0 || x>=n || y>=m){
            return false;
        }
        return true;
    }
    
    void dfs(vector< vector<int> > &A, int i, int j, int n, int m, int &c, int c1){
        if(A[i][j]==2){
            if(c1==0){
                c+=1;
            }
            return ;
        }
        int a = A[i][j];
        A[i][j]=-1;
        int dx[] = {-1, 0, 0, 1};
        int dy[] = {0, -1, 1, 0};
        for(int k=0;k<4;k++){
            if(check(i+dx[k], j+dy[k], n, m) && A[i+dx[k]][j+dy[k]]!=-1){
                dfs(A, i+dx[k], j+dy[k], n, m, c, c1-1);
            }
        }
        A[i][j]=a;
        return;
    }
    
};
