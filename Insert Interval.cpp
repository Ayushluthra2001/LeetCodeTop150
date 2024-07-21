// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         vector<vector<int>>ans;

//         if(newInterval.size()==0) return intervals;
//         if(intervals.size()==0) return {newInterval};
//         ans.push_back(intervals[0]);
//         bool merged = false;
//         int i=1;
//         while(i<intervals.size()){
            
//             vector<int>temp = ans[ans.size()-1];
//            // cout<<temp[0]<<" "<<temp[1]<<" "<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
//             if((temp[1]>=newInterval[0] || temp[1] >= newInterval[1]) && !merged){
//                 ans.pop_back();
//                cout<<temp[0]<<" "<<temp[1]<<" "<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
//                 int mini = min(temp[0],newInterval[0]);
//                 int maxi = max(temp[1],newInterval[1]);

                
//                 ans.push_back({mini,maxi});

                
//                  merged= true;
//                  if(merged) ans.push_back(intervals[i]);
//                  i++;
                
                
               
//             }else if(temp[1]>=intervals[i][0] || temp[1] >= intervals[i][1]){
//                  int mini = min(temp[0],intervals[i][0]);
//                  int maxi = max(temp[1],intervals[i][1]);
//                  ans.pop_back();
//                  ans.push_back({mini,maxi});
//                  i++;
//             }
            
//             else{
//                 ans.push_back(intervals[i]);
//                 i++;
//             }

           
//         }
//         if(!merged) ans.push_back(newInterval);
//         return ans;


//     }
// };

// sorting O(NLogN)

class Solution {
public:
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);

        for(int i=1; i<intervals.size(); i++){
            vector<int>temp = ans[ans.size()-1];

            if(temp[1]>=intervals[i][0]){
                ans.pop_back();
                
                ans.push_back({temp[0],max(intervals[i][1],temp[1])});
            }else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        

        intervals.push_back(newInterval);
        return merge(intervals);


    }
};

