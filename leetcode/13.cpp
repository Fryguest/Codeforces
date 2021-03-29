class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>m={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int num=0;
        for (int i=0;i<s.length();i++)
        {
            if (i<s.length()-1 and m[s[i]]<m[s[i+1]]) num-=m[s[i]];
            else num+=m[s[i]];
        }
        return num;
    }
};
