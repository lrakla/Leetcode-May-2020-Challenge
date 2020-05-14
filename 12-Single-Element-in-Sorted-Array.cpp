class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int high  = nums.size()-1,low=0;
        int mid;
        while(low<high && high>1){
            mid = low + (high-low)/2;
            
            if((nums[mid]==nums[mid-1] && mid%2 == 1 )||( nums[mid]==nums[mid+1] && mid%2==0))
                low = mid+1;
            else
                high = mid;
   
        }
        return nums[low];
     
    }
};