class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
      int len1=s.length();
        int len2=t.length();
        
        if(len1!=len2)
            return false;
        
        for(int i=0;i<len1;i++){   
            if(mp[s[i]])
                mp[s[i]]++;
            else
                mp[s[i]] = 1;
        }
        
        for(int i=0;i<len2;i++){   
            if(!mp[t[i]])
                return false;
                mp[t[i]]--;
        }
        return true;
    }
};