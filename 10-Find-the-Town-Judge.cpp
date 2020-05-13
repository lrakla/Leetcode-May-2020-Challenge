class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int s = trust.size();
        unordered_map<int,int> map;
        unordered_set<int> trusty;
        if(s==0)
            return N;//number,countoftrust
        for(int i =0;i<s;i++){
            map[trust[i][1]]++;
            trusty.insert(trust[i][0]);
        }
        for (auto it = map.begin(); it != map.end(); ++it){
            if (it->second == (N-1)){
                int temp = it->first;
                if (trusty.find(temp) == trusty.end()) 
                    return temp;
            }
        }   
        return -1;
        
    }
};