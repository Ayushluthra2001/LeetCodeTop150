class Solution {
public:
    int romanToInt(string s) {
        int ans=0;


        unordered_map<char,int>mapping;
        mapping['I']=1;
        mapping['V']=5;
        mapping['X']=10;
        mapping['L']=50;
        mapping['C']=100;
        mapping['D']=500;
        mapping['M']=1000;

        for(int i=s.length()-1; i>=0; i--){
            if(mapping[s[i]]>=mapping[s[i+1]])
            ans+=mapping[s[i]];
            else {
                ans= ans-mapping[s[i]];
            }
        }

        return ans;
    }
};
