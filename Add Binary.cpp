class Solution {
public:
    string addBinary(string a, string b) {
        string temp="";
        int carry=0;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0 || j>=0 || carry>0){
            int curr=carry;
            if(i>=0 && j>=0){
                curr+=a[i]-'0';
                curr+=b[j]-'0';
               if(curr==2){
                temp+='0';
                carry=1;
               }
                else if(curr==1){
                    temp+='1';
                    carry=0;
                }else if(curr==0){
                    temp+='0';
                    carry=0;
                }else{
                    temp+='1';
                    carry=1;
                }
            }else{
                if(i>=0) curr+=a[i]-'0';
                if(j>=0) curr+=b[j]-'0';
                if(curr==2){
                temp+='0';
                carry=1;
               }
                else if(curr==1){
                    temp+='1';
                    carry=0;
                }else if(curr==0){
                    temp+='0';
                    carry=0;
                }else{
                    temp+='1';
                    carry=1;
                }
            }
            i--,j--;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};
