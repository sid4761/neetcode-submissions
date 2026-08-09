class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int &it:nums){
            if(mp[it]==1) return true;
            mp[it]=1;
        }
        return false;
    }
};