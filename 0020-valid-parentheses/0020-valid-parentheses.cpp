class Solution {
public:
stack<char> sp;
bool res=false;
    bool isValid(string s) 
    {
        for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(ch=='(' || ch=='[' || ch=='{')
        {
            sp.push(ch);
        }
        else
        {
            if(sp.empty())
                {
                    return false;
                }

                if((ch == ')' && sp.top() == '(') ||
                   (ch == ']' && sp.top() == '[') ||
                   (ch == '}' && sp.top() == '{'))
                {
                    sp.pop();
                }
                else
                {
                    return false;
                }
        }
        
    }
    return sp.empty();     
    }  
    
};