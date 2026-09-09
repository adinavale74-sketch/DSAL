class Solution {
public:
    stack<int> sp;
    int sum = 0;

    int calPoints(vector<string>& operations) 
    {
        for(int i=0;i<operations.size();i++)
        {
            char ch=operations[i][0];

            if(ch=='C')
            {
                sp.pop();
            }
            else if(ch=='D')
            {
                int m=sp.top();
                sp.push(m*2);
            }
            else if(ch=='+')
            {
                int m1=sp.top();
                sp.pop();

                int m2=sp.top();
                sp.push(m1);
                sp.push(m1+m2);
            }
            else
            {
                int num=stoi(operations[i]);
                sp.push(num);
            }
        }

        while(!sp.empty())
        {
            int n1=sp.top();
            sp.pop();
            sum=n1+sum;
        }

        return sum;
    }
};