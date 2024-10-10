class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int temp_len = 0;
        int size_s = s.size();

        for(int i = 0; i<=size_s; i++)
        {
            if(temp_len>0)
                len=temp_len;

            if(s[i]==' '){
                temp_len=0;
            }

            else{
                temp_len++;
            }
        }
        return len;
    }
};
