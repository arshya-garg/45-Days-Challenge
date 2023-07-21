class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp=nums1;
       int i=0,j=0,k=0;
       while(i<m && j<n){
           if(temp[i]<=nums2[j]){
               nums1[k]=temp[i];
               i++;
               k++;
           }
           else{
               nums1[k]=nums2[j];
               k++;
               j++;
           }     
        }
       while(i<m){
           nums1[k]=temp[i];
           i++;
           k++;}
        while(j<n){
            nums1[k]=nums2[j];
            k++;
            j++;
        }
    
}
};