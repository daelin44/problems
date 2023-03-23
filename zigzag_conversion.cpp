class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || s.length()<=numRows)
        {return s;}
        string answer = s;
        int k = 0;
        for(int i = 0; i < numRows; i++)
        {
            int j = i;
            while(j<s.length())
            {
                
                answer[k] = s[j];
                k++;
                    
                if(i>0 && i <numRows-1 && (j+(numRows-i-1)*2) < s.length())
                {
                    answer[k] = s[j+(numRows-i-1)*2];
                    k++;
                }
                j = j + numRows+numRows-2;
            }
        }
        return answer;
    }
};