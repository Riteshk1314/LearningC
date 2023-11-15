//Best time to buy and sell stock
#include <iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> &prices)
    {
        int min_price=prices[0];        //store the minimum price of the stock initially 0
        int maxProf=0;                  // Maximum profit initially is 0
        for(int i=1;i<prices.size();i++)   //iterate through the array from 1 as 0 is min
        {
            maxProf = max(maxProf,prices[i]-min_price);     
            //prices[i]-min_price will give the max profit of the stock at index i and if it is greater than maxProf, update maxProf  
            min_price=min(min_price,prices[i]);
            //update the min_price if prices[i]<min_price so that the next profit can be    maximized
        }

        return maxProf;
    }

int main()
{
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);
    
    cout<<maxProfit(prices);
}
