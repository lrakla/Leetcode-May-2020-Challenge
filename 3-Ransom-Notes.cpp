class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int> mag(128);
        for(char m : magazine){
            mag[m]++;
        }
        for(char r:ransomNote){
            if(--mag[r]<0)
                return false;
        }
        return true;
    }
};