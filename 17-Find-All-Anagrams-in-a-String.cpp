class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int lp = p.length();
        int n = s.length();
        //pw is counter for pattern elements, sw is counter for sliding window
        vector<int> ans,sw(26,0),pw(26,0); 
        if(n < lp){
            return ans;
        }
        for(int i = 0; i < lp; i++){
            ++sw[s[i]-'a'];
            ++pw[p[i]-'a'];
            
        }
        if(sw==pw){
            ans.push_back(0);
        }
        for(int i = lp; i < n ; i++){
            ++sw[s[i]-'a'];
            --sw[s[i-lp]-'a'];
            if(sw==pw){
                ans.push_back(i-lp+1);
            }    
        }
        return ans;  
    }
};