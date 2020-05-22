class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        string ans = "";
        vector<int> counts;
        for(char i : s){
            map[i]++;
        }
        for(auto it : map){
            counts.push_back(it.second);
        }
        sort(counts.begin(),counts.end(),greater<int>());
        for(int i : counts){
            for (auto it = map.begin(); it != map.end(); ++it)
                if (it->second == i){
                    ans.append(i, it->first);
                    map.erase(it->first);
                    break;
                }
                    
        }
        return ans;
    }
};