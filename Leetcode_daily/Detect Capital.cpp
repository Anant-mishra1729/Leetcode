class Solution {
public:
    bool detectCapitalUse(string word) {
    return all_of(word.begin(), word.end(), [](unsigned char ch) {return isupper(ch);}) ||
        all_of(word.begin(), word.end(), [](unsigned char ch) {return islower(ch);}) ||
        isupper(word[0]) && all_of(word.begin() + 1, word.end(), [](unsigned char ch) {return islower(ch);});
}
};
