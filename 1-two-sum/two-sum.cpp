class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n = nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            
        }

        for(int i=0;i<n;i++){
            int temp = nums[i];

            for(auto it: mp){
                if(mp.find(target - temp) != mp.end()){
                    return {i, mp[target-temp]};
                }
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};