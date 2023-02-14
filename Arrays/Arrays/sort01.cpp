#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);

    int s = 0;
    int e = arr.size()-1;
    int i = 0;
    //  while(s <= e){
    //      if(arr[s] == 0){
    //          s++;
    //      }
    //      if(arr[e] == 1){
    //          e--;
    //      }
    //      if(arr[s] == 1 && arr[e] == 0){
    //          swap(arr[s],arr[e]);
    //          s++;
    //          e--;
    //      }
    //  }
     while(s <= e){
         if(arr[i] == 0){
             swap(arr[s],arr[i]);
             i++;
             s++;
         }
         if(arr[i] == 1){
             swap(arr[e],arr[i]);
             e--;
         }
     }
    for(auto value:arr){
        cout << value << " ";
    }
    return 0;
}