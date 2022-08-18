class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int cnt[100001] = {0};
        int n = 100001;
        
        for(int num:arr)
            cnt[num]++;
        
        int ans = 0;
        int removed = 0;
        int size = arr.size();
        size /= 2;
        
        sort(cnt, cnt + n, greater<int>());
        
        for(int i=0; i<arr.size(); i++)
        {
            if(cnt[i] != 0)
            {
                ans++;
                removed += cnt[i];
                if(removed >= size)
                    break;
            }
        }
        
        return ans;
    }
};