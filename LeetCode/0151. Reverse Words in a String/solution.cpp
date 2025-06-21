class Solution {
public:
    string reverseWords(string s) {
        string res;
        res.reserve(s.length());
        for(int i = s.length() - 1; i >= 0;){
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;

            int end = i;
            while(i >= 0 && s[i] != ' ') i--;
            int start = i + 1;
            int len = end - start + 1;

            res.append(s, start, len);
            res += ' ';
        }

        if (!res.empty()) res.pop_back();
        return res;
    }
};