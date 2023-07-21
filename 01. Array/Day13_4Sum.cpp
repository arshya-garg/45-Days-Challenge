class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int a=0;a<n;a++){
            for(int b = a+1;b<n;b++){
                int c = b+1;
                int d = n-1;
                while(d>c){
                    // long long int sum = nums[a]+nums[b]+nums[c]+nums[d];
                    long long int sum = nums[a];
                    sum +=nums[b];
                    sum+=nums[c];
                    sum+=nums[d];
                    if(sum == target){
                        s.insert({nums[a],nums[b],nums[c],nums[d]});
                        c++;
                        d--;
                    }
                    else if(sum < target)
                        c++;
                    
                    else
                        d--;
                }
            }
        }
        for(auto i : s){
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};