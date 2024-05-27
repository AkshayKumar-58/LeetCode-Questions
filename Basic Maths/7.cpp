class Solution {
public:
    int reverse(int x) {
        
          int reverseNum=0;
        while(x!=0)
        {
          int lastdigit=x % 10;
          reverseNum=(reverseNum * 10) + lastdigit;
          x/=10;
        
        }
        return reverseNum;
    }
};