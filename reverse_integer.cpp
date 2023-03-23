class Solution {
public:
    int reverse(int x) {
        int Answer=0;
        while(x)
        {    
            
            if((Answer<=INT_MAX/10) && (Answer>=INT_MIN/10))
            {
                Answer = 10*Answer + x%10;
                x = x/10;
            }
            else
                return 0;
            
        }
    return Answer;}
};