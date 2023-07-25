class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int prod1 = nums[n-1]*nums[n-2]*nums[n-3];
        int prod2 = nums[n-1]*nums[0]*nums[1];
        return max(prod1,prod2);
        
        // int ans= 1;
        // vector<int> v;

        // for(int i=0;i<n;i++){
        //     if(nums[i]<0){
        //         nums[i] = abs(nums[i]);
        //         v.push_back(nums[i]);
        //     }
        // }
        // sort(nums.begin(),nums.end());

        // for(int i=n-1;i>=n-3;i--){
        //     if(binary_search(v.begin(), v.end(),nums[i])){
        //         nums[i] = -nums[i];
        //         ans = ans*nums[i];
        //         }
        //     else{
        //         ans = ans*nums[i];
        //         }
        // }
        // return ans; 
        // isme sirf [-1000,-1000,1000] wala galat dikha rha
    }
};