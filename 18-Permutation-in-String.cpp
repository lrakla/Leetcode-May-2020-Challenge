class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        if(n > s2.length()) return false;
        vector<int> pw(26,0),sw(26,0);
        for(int i=0; i<n; i++){
            ++pw[s1[i] -'a'];
            ++sw[s2[i] -'a'];     
        }
        if(pw==sw){
            return true;
        }
        for(int i = n; i < s2.length(); i++){
            ++sw[s2[i]-'a'];
            --sw[s2[i-n]-'a'];
            if(pw==sw) return true;
        }
        return false;
    }
};