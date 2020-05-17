class Solution {
public:
    int kadane(vector<int>& A, int n){
        int max_so_far = INT_MIN;
        int max_here = 0;
        for(int i =0 ;i< n ; i++){
            max_here = max(A[i],max_here + A[i]);  
            max_so_far = max(max_here,max_so_far);
        }         
        return max_so_far;
    }

    int maxCircular(vector<int>& A,int n){
        int max_kadane = kadane(A,n);
        if(max_kadane<0){
           return max_kadane;         
        }
        int max_sum = 0;
        for(int i =0; i<n ; i++){
            max_sum+=A[i];
            A[i]=-A[i];
        }
       
        max_sum += kadane(A,n);
        return (max_sum>max_kadane)?max_sum:max_kadane;
    }

    int maxSubarraySumCircular(vector<int>& A) {
        int n = A.size();
        int ans = maxCircular(A,n);
        return ans;    
    }
};