class Solution {
public:
    int myAtoi(string s) {
        bool ignore = 0;
        bool hadSign = 0;
        bool hadNumber = 0;
        bool hadZero = 0;
        bool negative = 0;
        unsigned curNum = 0;
        for(char c : s)
        {
            switch(c)
            {   
                
                case '0': 
                    if(hadNumber && !ignore)
                    {
                        if(curNum <= 2147483648/10)
                        curNum *= 10;
                        else curNum = 2147483648;
                    }
                    hadZero = 1;
                    break;
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    if(!ignore)
                    {
                    hadNumber = 1;
                    if(curNum <= (2147483648-(c-48))/10)
                        curNum = (curNum*10) + (c-48);
                    else
                        curNum = 2147483648;
                    }
                    break;
                case '-':
                    if(!hadNumber && !hadZero && !hadSign)
                    {
                        negative = 1;
                        hadSign = 1;
                    }
                    else
                        ignore = 1;
                    break;
                case ' ':
                    if(hadNumber || hadZero || hadSign)
                        ignore = 1;
                    break;
                case '+':
                    if(hadNumber || hadZero || hadSign)
                        ignore = 1;
                    else
                        hadSign = 1;
                    break;
                default:
                    ignore = 1;
            }
        }
        if (curNum == 2147483648 && !negative)
            curNum--;
        if(negative)
            curNum *= -1;
        return curNum;
    }
};