class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        
        for(int i=0; i<s.length(); i++)
        {
            arr[int(s[i]) - 97] += 1;
        }
        
        for(int i=0; i<s.length(); i++)
        {
            if(arr[int(s[i]) - 97] == 1)
                return i;
        }
        return -1;
    }
};