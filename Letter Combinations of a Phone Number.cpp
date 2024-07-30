class Solution {
public:

    void solve(vector<string>&ans, unordered_map<int,vector<char>>& mapping,int index , string temp,string digits){
        
        if(index>=digits.length()) {
            if(temp.length()>=1)
            ans.push_back(temp);
            return ;
        }
    
       
        char currDigit = digits[index]-'0';
       
        vector<char>digitMapping = mapping[currDigit];
       
        for(int i=0;i<digitMapping.size();i++){
           
            solve(ans,mapping,index+1,temp+digitMapping[i],digits);
        }

        
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        

        unordered_map<int ,vector<char>>mapping;
        mapping[2]={'a','b','c'};
        mapping[3]={'d','e','f'};
        mapping[4]={'g','h','i'};
        mapping[5]={'j','k','l'};
        mapping[6]={'m','n','o'};
        mapping[7]={'p','q','r','s'};
        mapping[8]={'t','u','v'};
        mapping[9]={'w','x','y','z'};


         solve(ans,mapping,0,"",digits);
    

        return ans;
    }
};
