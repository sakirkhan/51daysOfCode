class Solution {
public:
    int romanToInt(string s) {
     int len = s.length();
      
        int i,prev=0,res=0,digit;
        
        for(i=len-1;i>=0;i--){
            digit = getInt(s[i]);
            if(digit >=prev)
                res+=digit;
            else
                res-=digit;
            
            prev=digit;
        }
        return res;
    }
    int getInt(char ch){
        switch(ch){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
        }
        return -1;
    }
};