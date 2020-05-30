class Solution {
public:
    int dist(int x,int y){
        return (x*x + y*y);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        multimap<int,pair<int,int>> ans;
        vector<vector<int>> result;
        for(auto &pt : points){
            ans.insert( {dist(pt[0],pt[1]), {pt[0],pt[1]}});   
        }
        for(auto i=ans.begin();i!=ans.end() && K; i++){
            result.push_back({(i->second).first,(i->second).second});
            K--;
        }
       
        return result;
        
    }
};