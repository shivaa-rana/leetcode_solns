class Solution {
public:
    bool same(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for (int i = 0; i < s1.size(); i++) {
            int idx = s1[i] - 'a';
            freq[idx]++;
        }
        int freq2[26] = {0};
        int windsize = s1.size();
        int idx = 0;
        for (int i = 0; i < s2.size(); i++) {
            freq2[s2[i] - 'a']++;
            if (i - idx + 1 > windsize) {
                freq2[s2[idx] - 'a']--;
                idx++;
            }
            if (i - idx + 1 == windsize) {
                if (same(freq, freq2))
                    return true;
            }
        }
        return false;
    }
};