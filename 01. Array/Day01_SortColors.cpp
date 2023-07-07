class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zerocount = 0, onecount = 0,twocount = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                zerocount++;
            
            else if(nums[i]==1)
                onecount++;
            
            else if(nums[i]==2)
                twocount++;
            
        }

        for(int i=0;i<n;i++){
            if(zerocount !=0 ){
                nums[i]=0;
                zerocount--;
            }
            else if(onecount !=0 ){
                nums[i]=1;
                onecount--;
            }
            else if(twocount !=0){
                nums[i]=2;
                twocount--;
            }
        }
    }
};