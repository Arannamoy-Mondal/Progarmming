class Solution {
public:
    int search(string pat, string txt) {
        vector<int>mpp(26, 0),mpf(26, 0);
        int k = pat.length(), n = txt.length();
        for (int i=0;i<k;i++) 
        {
            int index = pat[i] - 'a';
            mpp[index]++;
        }
        for (int i=0;i<k;i++) 
        {
            int index = txt[i] - 'a';
            mpf[index]++;
        }
        int cnt = 0;
        if (equal(mpp.begin(), mpp.end(), mpf.begin())) cnt++;
        for (int i = 1; i <= n-k; i++) 
        {
            mpf[txt[i+k-1]-'a']++;
            mpf[txt[i-1]-'a']--;
            if (equal(mpp.begin(), mpp.end(), mpf.begin())) cnt++;
        }
        return cnt;
    }
};