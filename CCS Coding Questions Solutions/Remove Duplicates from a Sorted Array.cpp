//Remove duplicates in an sorted array

#include <iostream>
#include<vector>
using namespace std;

void display(vector<int> &ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int removeDuplicates(vector<int>& nums)
{
    int i,j,k;
    int size=nums.size();
    for(i=0;i<nums.size();i++)
    {
        for(j=i+1;j<nums.size();j++)
        {
            if(nums[j]==nums[i])
            {
                for(k=j;k<nums.size()-1;k++)
                {
                    nums[k]=nums[k+1];
                }
                nums.pop_back();
                j--;
               
            }
            
            
        }
    }
    return nums.size();
    
}


int main()
{
    
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    
    int k=removeDuplicates(nums);
    cout<<k;
    
    
}
