class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int len = nums.size();
        map<int,int>map;
        map[nums[0]]=1;
        int i;
        for(i = 1; i < len; i++){
           if(map[target-nums[i]]){
               v.push_back(map[target-nums[i]] - 1);
               v.push_back(i);
               return v;
           }
           map[nums[i]]=i+1;
        }
        return v;
        
    }
};