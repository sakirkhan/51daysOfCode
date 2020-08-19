class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
        if(n==0)
            return;
        if(n < k){
            k=k%n;
        }
        rotateArray(nums,i,j);
        int i=0,j=n-k-1,temp;
        while(i<j){
            temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }
        i=n-k;j=n-1;
        while(i<j){
            temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }
        i=0;j=n-1;
        while(i<j){
            temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;j--;
        }
        
    }
};