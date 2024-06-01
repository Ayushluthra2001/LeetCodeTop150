class Solution {
public:
bool solve(string s , string t,int index1,int index2){
    if(index1>=s.length() || index2>=t.length()) return false;
    
    if(index1==s.length()-1 && index2<t.length()){
        if(s[index1]==t[index2]) return true;
       
    }
    bool pic=false,notpic=false;
    if(s[index1]==t[index2]){
        pic=solve(s,t,index1+1,index2+1);
    }
    notpic=solve(s,t,index1,index2+1);
    return pic||notpic;

}
    bool isSubsequence(string s, string t) {
        if(s.length()==0) return true;
        return solve(s,t,0,0);
    }
};
