#include<iostream>
#include<vector>
using namespace std;

int main(){
    //find intersection
    int arr[] = {1,2,3,3,3,4,6,8};
    int brr[] = {1,3};
    vector<int> ans;
    for(int i=0;i<8;i++){
        for(int j=0;j<2;j++){
            if(arr[i] == brr[j]){
                brr[j] = INT_MIN;
                ans.push_back(arr[i]);
            }
        }
    }
    for(auto value: ans){
        cout << value << " ";
    }
    return 0;
}