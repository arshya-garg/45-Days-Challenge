class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> v;
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    v.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum <0){
                    j++;
                }
                else{k--;}
            }
           
        }
        for(auto s : v){
            ans.push_back(s);
        }
        // int index=0;
        // 
        // int target = -nums[i];
        // while(i<n){
        //     for(int j=i+1;j<n;j++){
        //     for(int k=j+1;k<n;k++){
        //         if(nums[j]+nums[k]==target){
        //                     v[index].push_back(nums[i]);
        //                     v[index].push_back(nums[j]);
        //                     v[index].push_back(nums[k]); 
        //                     index++;
        //         }
        //     }
            
        // }
        // i++;
        // }
        return ans;
    }
};