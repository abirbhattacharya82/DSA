class Solution{
  public:
    int longestKSubstr(string s, int k) 
    {
        unordered_map<char,int> un;
        int i = 0,j = 0,maxLen = -1;
        while(j<s.size())
        {
            //Adding callculation for each j
            un[s[j]]++;
            if(un.size() < k)
            ++j;
            else if(un.size() == k)//window size hits k
            {
                maxLen = max(j-i+1,maxLen);
                ++j;
            }
            else if(un.size()>k)
            {
                //removing the calculation of i until there size of map is greater than k
                while(un.size()>k)
                {
                    un[s[i]]--;
                    if(un[s[i]] == 0)
                    un.erase(s[i]);
                    ++i;
                }
                ++j;
            }
        }
        return maxLen;
        
    }
};
