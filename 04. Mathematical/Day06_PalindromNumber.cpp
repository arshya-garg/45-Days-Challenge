class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int digit;
        long long temp=x;
        if(x<0){return false;}
        while(x>0){
            digit=x%10;
            rev=(rev*10)+ digit;
            x= x/10;
        }
        
        
        if(rev==temp){return true;}
        else{return false;}
    }
};