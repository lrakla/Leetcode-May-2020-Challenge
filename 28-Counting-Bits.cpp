class Solution {
public:
    inline bool ispowerof2(int n){
        return (n & (n-1)) == 0;
    }
    vector<int> countBits(int num) {
        vector<int> dp(num+1,0);
        dp[0] = 0;
        if(num>=1)
            dp[1]=1;
        int curr = 2; //current element
        int near_2 = 2; //nearest power of 2
        while(curr<=num){
            near_2 = ispowerof2(curr)?curr:near_2;
            dp[curr] = 1 + dp[curr - near_2];
            curr++;
            
        }
        return dp;
        
    }
};