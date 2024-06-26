class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int i = 0;
        int j = 0;

        unordered_map<char,int>mapping1;    // use to store pattern count
        unordered_map<string,int>mapping2;  // use to store word count
        unordered_map<string,char>mapping;  // creating mapping of word with pattern


        while(i<pattern.length() && j<s.length()){

            char ch     = pattern[i];
            string temp = "";
            int k       = j;


            while(k < s.length() && s[k] != ' ') temp += s[k] , k++;
           

            // checking if pattern and word both are present in map
            if(mapping1.find(ch) != mapping1.end() && mapping2.find(temp) != mapping2.end()){
                
                if(mapping[temp] != ch) return false; // saved pattern is matching or not
               

                mapping1[ch]++;
                mapping2[temp]++;

            } else if(mapping1.find(ch) == mapping1.end() && mapping2.find(temp) == mapping2.end()){
                // first time visiting
                mapping1[ch]++;
                mapping2[temp]++;
                mapping[temp]=ch; 
            }
            else return false;
            i++; 
            j = k + 1;
        }
        //cout<<pattern.length() <<" "<<s.length()<<endl;
        //cout<<i<<" "<<j<<endl;


        // we reached to end or not for both string 
        if(i >= pattern.length() && j >= s.length()) return true;
        return false;
    }
    
};
