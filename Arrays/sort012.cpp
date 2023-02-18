#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void sort(int arr[],int n){
    int zeroes=0,ones=0,twos=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            zeroes++;
        }
        if(arr[i] == 1){
            ones++;
        }
        if(arr[i] == 2){
            twos++;
        }
    }

    int i=0;
    while(zeroes--){
        arr[i] = 0;
        i++;
    }
    while(ones--){
        arr[i] = 1;
        i++;
    }
    while(twos--){
        arr[i] = 2;
        i++;
    }

}

int main(){
    //{0,1,2,0,1,2}
    //{0,1,1,0,1,2,1,2,0,0,0,1}
    int arr[] = {0,1,2,0,1,2};
    int n = 6;

   // sort(arr,n);

    int s = 0;
    int e = n-1;
    int i = 0;
    while(i <= e){
        if(arr[i] == 0){
            swap(arr[s],arr[i]);
            i++;
            s++;
        }
        else if(arr[i] == 1){
            i++;
        }
        else{
            swap(arr[i],arr[e]);
            e--;
        }
    }

    print(arr,n);

    return 0;
}