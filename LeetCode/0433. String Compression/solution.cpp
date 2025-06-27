class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0;
        int len = 0;
        char curr = chars[0];
        for(int i = 0; i < chars.size(); i++){
            if (chars[i] == curr) len++;
            else {
                chars[idx++] = curr;
                if (len > 1) for (char j: to_string(len)) chars[idx++] = j;
                len = 1; curr = chars[i];
            }
        }
        chars[idx++] = curr;
        if (len > 1) for (char j: to_string(len)) chars[idx++] = j;
        chars.resize(idx);

        return idx;
    }
};