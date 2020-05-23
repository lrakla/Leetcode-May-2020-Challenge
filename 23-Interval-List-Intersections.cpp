class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        int a = A.size();
        int b = B.size();
        vector<vector<int>> ans;
        for(int i=0,j =0; (i < a) && (j< b); A[i][1]<B[j][1] ? ++i:++j ){
            int low = max(A[i][0],B[j][0]);
            int high = min(A[i][1] ,B[j][1]);
        
            if(low<=high)
                ans.push_back({low,high});
        }
        return ans;
        
    }
};