class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;

        for(int i = 0; i < nums.size(); i++)
        {
            if(umap[target - nums[i]] && umap[target - nums[i]] -1 != i)
            {
                return {i,umap[target - nums[i]] - 1};
            }
            umap[nums[i]] = i + 1;
        }
        return {-1,-1};
    }
};
