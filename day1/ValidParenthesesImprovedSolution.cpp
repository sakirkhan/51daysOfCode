class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int len = s.length(),i;
        char ch;
            for(i=0;i<len;i++){
                ch = s[i];
               
                if(ch == '(' || ch=='{' || ch == '['){
                    st.push(ch);
                    continue;
                }
                else if(st.empty())
                            return false; 
                else if((ch==')' && st.top()!='(' ) || (ch=='}' && st.top()!='{') || (ch==']' && st.top()!='['))
                    return false;
               else
                   st.pop();
                }
            
        return st.empty();
    }
};