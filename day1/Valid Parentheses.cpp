class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int len = s.length(),i;
            char ch,last;
        
            for(i=0;i<len;i++){
                ch = s[i];
               
                if(ch == '(' || ch=='{' || ch == '['){
                    st.push(ch);
                }
                else
                    {
                        if(st.empty())
                            return false;
                          last = st.top();
                         st.pop();
                  
                    if(ch==')' && last!='(' )
                        return false;
                    else if(ch=='}' && last!='{')
                        return false;
                    else if(ch==']' && last!='[')
                        return false;
                     
                    }
               
                }
            
        if(!st.empty())
            return false;
        return true;
    }
};