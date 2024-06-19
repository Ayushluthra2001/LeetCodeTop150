class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxi=0;
        unordered_map<char,int>mapping;
        while(j<s.length()){
            if(mapping.find(s[j])!=mapping.end()){
                
                while(i<s.length() && i<=j && mapping.find(s[j])!=mapping.end()){
                    
                    mapping[s[i]]--;
                    if(mapping[s[i]]==0) mapping.erase(s[i]);
                    i++;
                }
            }
             mapping[s[j]]++;
            j++;
            int x=mapping.size();
            //cout<<endl;
           // for(auto i : mapping) cout<<i.first<<" "<<i.second<<endl;
            maxi=max(maxi,x);
           
        }
        return maxi;
    }
};
// "pwwkew"
//    i
//       j
// mapping[w : 1 k:1 e : 1]
// size=2
