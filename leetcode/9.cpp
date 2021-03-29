class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        string s = std::to_string(x);
        for (int i=0;2*i<=s.length();i++){
            if (s[i]!=s[s.length()-1-i]) return false;
        }
        return true;
    }
};
