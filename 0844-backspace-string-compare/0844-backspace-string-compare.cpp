
class Solution {
public:
    stack<char> sp1;
    stack<char> sp2;

    bool backspaceCompare(string s, string t) 
    {
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];

            if(ch=='#')
            {
                if(!sp1.empty())
                    sp1.pop();
            }
            else
            {
                sp1.push(ch);
            }
        }

        for(int i=0;i<t.length();i++)
        {
            char ch=t[i];

            if(ch=='#')
            {
                if(!sp2.empty())
                    sp2.pop();
            }
            else
            {
                sp2.push(ch);
            }
        }

        while(!sp1.empty() && !sp2.empty())
        {
            if(sp1.top()!=sp2.top())
            {
                return false;
            }

            sp1.pop();
            sp2.pop();
        }

        return sp1.empty() && sp2.empty();
    }
};