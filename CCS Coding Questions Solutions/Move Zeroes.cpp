//Move Zeroes

#include <iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int i,t;
    int pos=0;
    for(i=0;i<=nums.size()-1;i++)
    {
        if(nums[i]!=0)
        {
            t=nums[i];
            nums[i]=nums[pos];
            nums[pos]=t;
            pos++;
        }
    }
        
}

void display(vector<int> &ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    moveZeroes(nums);
    display(nums);
}
