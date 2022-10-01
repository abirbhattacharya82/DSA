class Solution {
    public String longestCommonPrefix(String[] s) {
        for(int i=0;i<s.length;i++)
        {
            for(int j=0;j<s.length-1-i;j++)
            {
                if(s[j].length()>s[j+1].length())
                {
                    String t=s[j];
                    s[j]=s[j+1];
                    s[j+1]=t;
                }
            }
        }
        for(int i=s[0].length();i>=0;i--)
        {
            String w=s[0].substring(0,i);
            boolean f=true;
            for(int j=1;j<s.length;j++)
            {
                if(w.equalsIgnoreCase(s[j].substring(0,i))==false)
                {
                    f=false;
                    break;
                }
            }
            if(f)
            {
                return w;
            }
        }
        return "";
    }
}
