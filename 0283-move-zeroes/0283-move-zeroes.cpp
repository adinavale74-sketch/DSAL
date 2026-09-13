class Solution {
public:
    void moveZeroes(vector<int>& no) 
    {
        int i=0;
        for(int j=0;j<no.size();j++)
        {
            if(no[j]!=0)
            {
                swap(no[i],no[j]);
                i++;
            }
        }
    }
};