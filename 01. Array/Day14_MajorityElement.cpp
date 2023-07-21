class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        n = n/2;
        for(auto i:mp){
            if(i.second >n)
                return i.first;
            
        }
        return 0;
    }
};