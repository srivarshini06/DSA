class Solution {
public:
    int lengthOfLastWord(string s) {
        // 1. Find the index of the very last non-space character
        size_t end = s.find_last_not_of(' ');
        if (end == string::npos) return 0; // Guard against empty or all-space strings

        // 2. Find the index of the last space character *before* that word
        size_t start = s.find_last_of(' ', end);

        // 3. (End index - Start index) gives the exact length of the last word
        return (start == string::npos) ? end + 1 : end - start;
    }
};
