class Solution {
    private :
    int toBeReplaced(int num){
        int arr[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int maxi=0;
        for(int i=0;i<13;i++){
            if(num>=arr[i]){
                maxi = arr[i];
            }
        }
        return maxi;
    }
public:
    string intToRoman(int num) {
       map<int,string> mp;
       mp[1] = 'I';
       mp[4] = "IV";
       mp[5] = 'V';
       mp[9] = "IX";
       mp[10] = 'X';
       mp[40] = "XL";
       mp[50] = 'L';
       mp[90] = "XC";
       mp[100] = 'C';
       mp[400] = "CD";
       mp[500] = 'D';
       mp[900] = "CM";
       mp[1000] = 'M';
       
       string str;
       while(num !=0){
           int value = toBeReplaced(num);
           str = str + mp[value];
           num = num-value;
       }
       return str;
    }
};