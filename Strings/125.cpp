class Solution {
public:
bool isAlphanumeric(char s){
    if((s >='a' &&  s<='z') || (s >='A' &&  s<='Z') || (s >='0' &&  s<='9'))
    {
        return 1;
    }
    return 0;
}
char toLowerCase(char s){
    if((s>='a' && s<='z' ) || (s>='0' && s<='9'))
    {
        return s;
    }
    else
    {
        char temp=s-'A'+'a';
        return temp;
    }

}
bool checkPalindrome(string s)
{
    int start=0;
    int end=s.size()-1;
    while(start < end)
    {
       if(s[start]!=s[end])
       {
        return false;
       }
       start++;
       end--;
    }
    return true;
    
}
    bool isPalindrome(string &s) {
      string temp="";
      for(char c :s){
        if(isAlphanumeric(c))
        {
            temp.push_back(toLowerCase(c));   //On the hand converts in lowercase
        }
      }
   
    return checkPalindrome(temp);
    }
};