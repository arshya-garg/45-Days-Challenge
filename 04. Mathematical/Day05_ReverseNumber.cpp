class Solution {
public:
    int reverse(int x) {
        long long revnum = 0;
        while(x!=0){
            int digit = x%10;
            revnum = revnum*10 + digit; 
            x=x/10;
        }
        if(revnum>2147483647 || revnum<(-2147483647)){return 0;}
        return revnum;
    }
};




















