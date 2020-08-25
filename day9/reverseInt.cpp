class Solution {
public:
    int reverse(int x) {
       int rem,rev =0;
        int maxL = 2147483647,minL = -2147483648;
      
        while(x!= 0){
            rem = x % 10;
             if(rev > INT_MAX/10 || (rev == INT_MAX/10 && rem > 7))
                return 0;
            if(rev < INT_MIN/10 || (rev == INT_MIN/10 && rem < -8))
                return 0;
            rev = (10 * rev) + rem;
           
            x/=10;
        }
        return rev ;
    }
};