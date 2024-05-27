class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=0;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            if(j<nums.size() && nums[i]==nums[j]){
                int count=1;
                while(j<nums.size() && nums[i]==nums[j])j++,count++;
                if(count==1){
                    nums[index++]=nums[i];
                }else if(count>=2){
                    nums[index++]=nums[i];
                    nums[index++]=nums[i];
                }
                   
            
                //cout<<count<<endl;
                i=j;

            }else{
                nums[index++]=nums[i++];
            }
        }
        return index;
    }
};
