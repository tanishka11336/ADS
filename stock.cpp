// question is to find the maximum profit
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the szize of array";
    cin >> size;
    int stock_price[size];
    cout << "enter the stock price";
    for (int i = 0; i < size; i++)
    {
        cin >> stock_price[i];
    }
    // for(int i=1;i<size;i++)
    // {
    //     if(stock_price[i]>stock_price[i-1])
    //     {
    //         profit += stock_price[i] - stock_price[i-1];
    //     }
    // }
    // cout<<profit;
    int min = stock_price[0];
    int profit = 0;
    int maxprofit=0;
    for (int i = 0; i < size; i++)
    {
        if (min > stock_price[i])
        {
            min = stock_price[i];
        }
        else
        {
            profit = stock_price[i] - min;
            if(profit > maxprofit){
                maxprofit=profit;
            }
        }
    }
    cout << maxprofit;
    return 0;
}