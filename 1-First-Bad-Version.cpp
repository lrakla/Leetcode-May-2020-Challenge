// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int mid;
        int low=1,high = n;
       
        while(low<mid && mid<high){
  
            mid = (high-low)/2;
           
            if(isBadVersion(mid)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
            
        }
        
        return mid;
        
    }
};