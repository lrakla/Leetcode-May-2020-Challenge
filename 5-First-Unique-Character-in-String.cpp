class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            map[s.at(i)]++;
        }
        for(int i=0;i<n;i++){
            if(map[s.at(i)]==1){
                return i;
            }
        }
    return -1;
    
    }     
};