

#include <iostream>
#include<vector>

using namespace std;
//Uncomment Display Function to check output

void display(vector<int> &ans)
{
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

//Paste This Function
vector<int> getConcatenation(vector<int>& v) 
    {
        int i;
        int size=v.size();
        for(i=0;i<size;i++)
        {
            v.push_back(v[i]);
        }
        //display(v);

        return v;
    
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
    
    getConcatenation(nums);
}
