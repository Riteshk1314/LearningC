//Product of array except self

#include<iostream>
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

vector<int> productExceptSelf(vector<int>& nums) 
{
    vector<int> answer;
    int ans=1;
    int flag=0;
    int i;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            ans=ans*nums[i];
        }
        else
        {
            flag=1;
        }
            
    }
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]!=0 && flag==0)
        {
        answer.push_back(ans/nums[i]);
        }
        else if(flag==1 && nums[i]!=0)
        {
            answer.push_back(0);

        }
        else if(nums[i]==0)
        {
            ans=1;
            for(int j=0;j<nums.size();j++)
            {
                if(j!=i)
                {
                    ans=ans*nums[j];
                }
            }
            answer.push_back(ans);
        }

    }
    return answer;
    
}

int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    productExceptSelf(nums);
}