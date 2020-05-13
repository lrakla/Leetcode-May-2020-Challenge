class Solution {
vector<vector<int>> c;
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        c = coordinates;
        int n = c.size();
        if(n==2)
            return true;
        for(int j=2;j<n;j++){
            int x_sum = (((c[1][0]-c[0][0])*(c[j][1]-c[0][1]))-((c[j][0]-c[0][0])*(c[1][1]-c[0][1])));
            if(x_sum!=0)
                return false;                     
        }
        return true;
    }
};