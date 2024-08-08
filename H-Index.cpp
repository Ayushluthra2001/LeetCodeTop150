class Solution {
public:
    int hIndex(vector<int>& citations) {
        int maxi = 0;

        sort(citations.begin(),citations.end(),greater<int>());
        
        for(int i=0; i<citations.size(); i++){

                if(citations[i] >=i+1){
                    maxi = max(maxi,i+1);

                }else{
                    maxi = max(maxi,citations[i]);
                }
        }
        
        return maxi;   
    }
};
