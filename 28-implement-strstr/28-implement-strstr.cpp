class Solution {
public:
    int strStr(string haystack, string needle) {
     
        int n1 = haystack.length(), n2 = needle.length();
        int i, j;
        for(i=0; i<=n1-n2; i++)
        {
            for(j=0; j<n2; j++)
            {
                if(haystack[i+j] != needle[j])
                    break;
            }
            if(j == n2)
                return i;
        }
        return -1;        
    }
};