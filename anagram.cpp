class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int psize=p.size();
        int ssize=s.size();
        if(psize>ssize) return {};
        vector<int> pfreq(26,0);
        vector<int> sfreq(26,0);
        vector<int> ans;
        for(int i=0;i<psize;i++){
            pfreq[p[i]-'a']++;
            sfreq[s[i]-'a']++;
        }
        if(pfreq==sfreq) ans.push_back(0);
        for(int i=psize;i<ssize;i++){
            sfreq[s[i-psize]-'a']--;
            sfreq[s[i]-'a']++;
            if(sfreq==pfreq) ans.push_back(i-psize+1);
        }
        return ans;
    }
};
