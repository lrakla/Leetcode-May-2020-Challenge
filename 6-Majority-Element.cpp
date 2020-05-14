class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        float condition = n/2;
        unordered_map<int,int> map;
        for(int i:nums){
            map[i]++;
        }
        for(auto it=map.begin();it!=map.end();it++){
            if(it->second > condition){
                return it->first;
            }
        }
        return -1;
    }
};