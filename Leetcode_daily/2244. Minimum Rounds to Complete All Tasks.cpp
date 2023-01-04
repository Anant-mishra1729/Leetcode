class Solution {
public:
int minimumRounds(vector<int>& tasks) {
    unordered_map<int, int> mp;
    int rounds = 0;
    for (auto val : tasks)
    {
        mp[val]++;
    }

    for (auto task : mp)
    {
        if (task.second == 1)
        {
            return -1;
        }
        else if (task.second % 3 == 0)
        {
            rounds += task.second / 3;
        }
        else
        {
            rounds += task.second / 3 + 1;
        }
    }
    return rounds;
}
};
