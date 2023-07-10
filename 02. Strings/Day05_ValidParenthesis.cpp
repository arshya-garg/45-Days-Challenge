class Solution {
public:
    bool isValid(string s) {
         stack<char> a;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                a.push(s[i]);}
            else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                if(a.empty()){return false;}
                else if(s[i]==')' && a.top()!='('){return false;}
                else if(s[i]=='}' && a.top()!='{'){return false;}
                else if(s[i]==']' && a.top()!='['){return false;}
                else{a.pop();}
            }
        }
        if(a.empty()){
            return true;}
        else{
            return false;}
    }
};