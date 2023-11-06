

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

//Paste This Function
vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;
    for(int i=0;i<nums.size();i++)
    {
        ans.push_back(nums[nums[i]]);
    }
    //display(ans);
    return ans;
}




int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(4);
    
    buildArray(nums);
}
