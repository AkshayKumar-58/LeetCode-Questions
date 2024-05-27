class Solution {
public:
    bool isPalindrome(int x) {
          int originalNum=x;
int reverseNum=0;
if(x<0)
{
    return false;
}
while(x)
{
int lastdigit=x %10;
    reverseNum=(reverseNum*10) + lastdigit;
    x/=10;
}return originalNum==reverseNum;
    }
};