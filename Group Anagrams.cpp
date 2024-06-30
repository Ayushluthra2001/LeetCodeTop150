class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // HashMap for grouping words that are anagrams
        unordered_map<string, vector<string>> mapping;

        // Result array 
        vector<vector<string>> result;
        
        // Iterating over the array and inserting words into the HashMap 
        // by sorting them so that anagrams are grouped together 
        for(auto i : strs){
            string temp = i;
            sort(temp.begin(), temp.end());
            mapping[temp].push_back(i);
        }

        // Adding all groups of anagrams to the result vector 
        for(auto i : mapping){
            result.push_back(i.second);
        }
        return result;
    }
};
