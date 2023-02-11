#include<iostream>
using namespace std;

int main(){
    //find max
    int arr[5] = {1,2,15,4,5};
    int maxi = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout << "Maximum no is " << maxi << endl;
    return 0;
}