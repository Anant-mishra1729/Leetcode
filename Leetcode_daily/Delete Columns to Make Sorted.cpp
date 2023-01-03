class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int i = 0; i < strs[0].length(); i++)
        {
            char prev = '\0';
            for(int j = 0; j < strs.size(); j++)
            {
                if(strs[j][i] < prev)
                {
                    count++;
                    break;
                }        
                prev = strs[j][i];       
            }
        }
        return count;
    }
};
