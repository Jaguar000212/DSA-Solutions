class Solution {
public:
    bool isfreqEqual(int freq[], int windfreq[]){
        for(int i = 0; i < 26; i++){
            if(freq[i] != windfreq[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        int n = s1.length();
        int m = s2.length();
        for(int i = 0; i < n; i++) freq[s1[i] - 'a']++;

        for(int i = 0; i < m; i++) {
            int windfreq[26] = {0}, windidx = 0, idx = i;
            while(windidx < n && idx < m) {
                windfreq[s2[idx] - 'a']++;
                windidx++; idx++;
            }

            if(isfreqEqual(freq, windfreq)) return true;
        }
        return false;
    }
};