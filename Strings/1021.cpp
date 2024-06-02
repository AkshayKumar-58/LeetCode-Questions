class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int openCount = 0;
        
        for (char c:s) {   //it checks for the chracters and iterate through s where (:)is like (in)keyword in python
            if (c == '(') {
                if (openCount > 0) {  //stores the open bracket in result string
                    result =result + c;
                }

                openCount++;
            } 
            else {  //to get closing bracket opencount reduce and stores in result
                openCount--;
                if (openCount > 0) {
                    result += c;
                }
            }
        }
        
        return result;
    }
};