class Solution {
public:
    bool isPerfectSquare(int num) {
        for(unsigned int i = 1 ; i*i <= num ; i++){
            if((num/i) == i && num % i == 0){
                return true;
            }
        }
        return false;
    }
};