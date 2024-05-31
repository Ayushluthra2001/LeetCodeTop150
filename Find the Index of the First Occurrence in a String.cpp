class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        while( i<haystack.length() ){
            if( needle[0] == haystack[i] ){
                int j=0;
                int b=i;
                
               
                while( j<needle.length() && b<haystack.length() && haystack[b] == needle[j] )b++,j++;
                if( j == needle.length() ) return i;
                i++;
            }else{
                i++;
            }
        }
        return -1;
    }
};
