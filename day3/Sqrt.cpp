class Solution {
public:
    int mySqrt(int x) {
        
       return findSqrt(0,x,x);
       
    }
    
     int findSqrt(long long int l,long long int r,long long int x){
        long long int mid;
        if(l<=r){
            mid=l+(r-l)/2;
            if(mid*mid == x || ((mid * mid) < x && ((mid+1)*(mid+1) > x) ))
                return mid;
            else if(mid * mid < x)
                return findSqrt(mid+1,r,x);
            else 
                return findSqrt(l,mid-1,x);
        }
         return 0;
    }
};