class Solution {
public:
    bool isAlphaNumeric(char ch){
        if(ch < '0' || ch > '9') && (ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')
            return false;
        return true;
    }
    
    bool isPalindrome(string s) {
        int len = s.length();
        if(len == 0)
            return true;
        int i=0,j=len-1;
        while(i <= j)
        {
            if(!isAlphaNumeric(s[i])){
                i++;
            }
                
            else if(!isAlphaNumeric(s[j])){
                 j--;
            }
               
             else if(tolower(s[i])!=tolower(s[j])){
                 return false;
                
             }
                 
             else{
                   i++;j--;  
             } 
                   
         }
        return true;
    }
    
    
};