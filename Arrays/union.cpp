#include<iostream>
#include<vector>
using namespace std;

int main(){
    //find union
    int arr1[5] = {1,2,4,6,3};
    int arr2[2] = {1,3};
    vector<int> ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){
            if(arr1[i] == arr2[j]){
                arr2[j] = -1;
                ans.push_back(arr1[i]);
            }
        }
    }
    // for(int j=0;j<2;j++){
    //     ans.push_back(arr2[j]);
    // }
    for(auto value: ans){
        cout << value << " ";
    }
    return 0;
}