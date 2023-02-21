#include<iostream>
using namespace std;

int maxProfit(int prices[],int size) {
        int maxpro = 0;
        int minprice = INT_MAX;
        for(int i=0;i<size;i++){
            minprice = min(minprice,prices[i]);
            maxpro = max(maxpro,prices[i]-minprice);
        }
        return maxpro;
    }

int main(){
    int prices[] = {7,1,5,3,6,4};
    int size = 6;
    int profit = maxProfit(prices,size);
    cout << profit << " ";
    return 0;

}