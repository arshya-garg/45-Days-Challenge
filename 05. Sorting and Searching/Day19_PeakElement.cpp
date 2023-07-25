class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while(e>s){
            int mid = s + (e-s)/2;
            if(nums[mid] > nums[mid+1])
                e = mid;
            
            else
                s = mid+1;
        }
        return s;
    }
};