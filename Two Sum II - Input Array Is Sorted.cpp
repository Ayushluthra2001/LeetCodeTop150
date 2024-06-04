class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        while(start<=end){
            int curr=numbers[start]+numbers[end];
            cout<<curr<<endl;
            if(target==curr) return {start+1,end+1};
            else if(target<curr) end--;
            else start++;
        }
        return {-1,-1};
    }
};
