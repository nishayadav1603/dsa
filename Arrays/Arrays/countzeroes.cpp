#include<iostream>
using namespace std;

int main(){
    //count number of zeroes and ones
    int arr[5] = {1,2,15,4,5};
    int numzero = 0;
    int numone = 0;
    for(int i=0;i<5;i++){
        if(arr[i] == 0){
            numzero++;
        }
        if(arr[i] == 1){
            numone++;
        }
    }
    cout << "Number of zeroes are: " << numzero << endl;
    cout << "Number of ones are: " << numone << endl;
    return 0;
}