class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mapping;
        for(auto i : magazine) mapping[i]++;
        for(auto i : ransomNote){
            if(mapping.find(i)==mapping.end() || mapping[i]<=0) return false;
            mapping[i]--;
        }
        return true;
    }
};
