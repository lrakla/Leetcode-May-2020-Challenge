class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        int j = J.length();
        int s = S.length();
        for(int i=0;i<j;i++){
            for(int k=0;k<s;k++){
                if(J.at(i)==S.at(k))
                    ans++;
            }  
        }
        return ans;
    }
};