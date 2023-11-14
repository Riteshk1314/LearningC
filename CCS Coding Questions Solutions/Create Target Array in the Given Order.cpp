//Create Target Array in the Given Order

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
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
{
    vector<int> target(nums.size());
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            for(j=i-1;j>=0;j--)
            {
                if(index[i]<=index[j])
                {
                    index[j]++;
                }
            }
        }

        for(i=0;i<nums.size();i++)
        {
            target[index[i]]=nums[i];
        }
        //display(target);
        return target;

        
}


int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(0);
    
    vector<int> index;
    index.push_back(0);
    index.push_back(1);
    index.push_back(2);
    index.push_back(3);
    index.push_back(0);
    
    createTargetArray(nums,index);
}
