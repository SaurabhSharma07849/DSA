class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer=0;
        int t_pointer=0;
        string res="";
        while(t_pointer<t.size() && s_pointer<s.size()){
            if(t[t_pointer]!=s[s_pointer]){
                t_pointer++;
            }
            else{
                res+=t[t_pointer];
                s_pointer++;
                t_pointer++;

            }
            
        }
        for(int i=0;i<s.size();i++){
                if(s[i]!=res[i]){
                    return false;
                }
            }
        return true;
    }
};