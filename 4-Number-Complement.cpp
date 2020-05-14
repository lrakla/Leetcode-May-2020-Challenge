class Solution {
public:
    int findComplement(int num) {
        int n = (int)log2(num)+1; 
        int cmp = pow(2,n)-1;    
        return cmp^num;
    }
};