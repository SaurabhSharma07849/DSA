class Solution {
public:
    char findTheDifference(string s, string t) {
        char remain=0;
        for(int i=0;i<t.size();i++){
            remain^=t[i];
        }
        for(int i=0;i<s.size();i++){
            remain^=s[i];
        }
        return remain;
    }
};