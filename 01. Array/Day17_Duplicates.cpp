class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<int> v;
        for(auto i:mp){
            if(i.second == 2){
                v.push_back(i.first);
            }
        }
        return v;
    }
};