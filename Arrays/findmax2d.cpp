#include<iostream>
using namespace std;

int findmax(int arr[][3],int rows,int cols){
    int maxi = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int main(){
    int arr[3][3] = {{1,2,50},{15,8,9},{2,25,9}};
    int ans = findmax(arr,3,3);
    cout << ans << endl;
    
    return 0;
}