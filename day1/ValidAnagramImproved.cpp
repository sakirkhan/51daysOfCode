class Solution {
public:
    bool isAnagram(string s, string t) {
          int mp[26] = {0},i;
      int len1=s.length();
        int len2=t.length();
        
        if(len1!=len2)
            return false;
        
        for(int i=0;i<len1;i++){   
            mp[s[i]-'a']++;
            mp[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++){   
           if(mp[i]!=0)
               return false;
        }
        return true;
    }
};