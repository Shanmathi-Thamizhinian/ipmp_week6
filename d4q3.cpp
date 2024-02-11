class Solution {
public:
    string reverseWords(string s) {
        stringstream temp;
        temp<<s;
        string c,ans="";
        while(temp>>c){
            ans=c+' '+ans;
        }
        int n=ans.size();
        ans.resize(n-1);
        return ans;
    }
};
