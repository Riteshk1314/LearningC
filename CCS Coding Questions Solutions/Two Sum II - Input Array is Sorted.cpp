//Find 2 Numbers from a sorted array such that they add to a specific target

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

vector<int> twoSum(vector<int>& numbers, int target) 
{
    int i=0,j=numbers.size()-1;
    vector<int> ans;
    while(i<j)
    {
        int sum=numbers[i]+numbers[j];
        if(sum==target)
        {
            ans.push_back(i+1);
            ans.push_back(j+1);
            break;
            
        }
        else if(sum<target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
    
        
}

int main()
{
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);
    vector<int> ans=twoSum(numbers,9);
    display(ans);
    
}
