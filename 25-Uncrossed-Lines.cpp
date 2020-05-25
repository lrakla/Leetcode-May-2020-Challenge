class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int a=A.size(),b=B.size(),dp[a+1][b+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=a;i++){
            for(int j=1;j<=b;j++){
                dp[i][j]=A[i-1]==B[j-1]?1+dp[i-1][j-1]:max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
       
        return dp[a][b];
    }
};