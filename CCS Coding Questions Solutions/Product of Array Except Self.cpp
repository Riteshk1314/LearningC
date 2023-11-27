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
    
    int i=0,j=0;
    int n=nums.size();
    vector<int> answer;
    int left[n],right[n];
    left[0]=1;
    right[n-1]=1;
    for(i=1;i<n;i++)
    {
        left[i]=left[i-1]*nums[i-1];
        
    }
    for(i=n-2;i>=0;i--)
    {
        right[i]=right[i+1]*nums[i+1];
    }
    for(i=0;i<n;i++)
    {
        answer.push_back(left[i]*right[i]);
    }
    
    
    
    display(answer);
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
