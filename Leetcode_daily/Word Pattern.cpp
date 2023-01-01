class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        stringstream ss(str);
        string s;
        unordered_map <char,string> atob;
        unordered_map <string,char> btoa;
        int i = 0;
        while(getline(ss, s, ' '))
        {
            if(atob[pattern[i]] == "")
            {
                atob[pattern[i]] = s;
            }
            else if(atob[pattern[i]] != s)
            {
                return false;
            }
            if(btoa[s] == NULL)
            {
                btoa[s] = pattern[i];
            }                
            else if(btoa[s] != pattern[i])
            {
                return false;
            }
            i++;
        }
        if(i < pattern.length())
        {
            return false;
        }
        return true;
    }
};
