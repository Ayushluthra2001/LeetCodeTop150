class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() > t.length() || t.length() > s.length()) return false;
        
        
        unordered_map<char,int>mapping;
        unordered_map<char,int>mapping2;

        for(auto i : s) mapping[i]++;
        

        for(int i=0;i<t.length();i++) {

            if(mapping.find(t[i]) == mapping.end() || mapping[t[i]] <= 0) return false;
            else mapping[t[i]]--;
        }

        return true;
    }
};
