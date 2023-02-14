#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    //find unique element
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    int ans = findunique(arr);
    cout << "Unique elements:  " << ans << endl;
    return 0;
}