class Solution {
public:
    int longestPalindrome(string s) {
       int n=s.size();
       unordered_map<char,int> freq;
       int odd=0;
       for(char ch: s){
           freq[ch]++;
           if(freq[ch]%2==0){
               odd--;
           }
           else{
               odd++;
           }
       }
       if(odd>1) return n-odd+1;
       return n;
    }
};
