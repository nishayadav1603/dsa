#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    //{0,1,2,0,1,2}
    //{0,1,1,0,1,2,1,2,0,0,0,1}
    int arr[1000];
    int n;
    cout << "Enter the size: " << endl;
    cin >> n;
    cout << endl;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
        cout << " ";
    }
    cout << endl;

    int s = 0;
    int e = n-1;
    int i = 0;
    while(s <= e){
        if(arr[i] == 0){
            i++;
            s++;
        }
        if(arr[i] == 1){
            swap(arr[i],arr[s]);
            i++;
        }
        if(arr[i] == 2){
            swap(arr[i],arr[e]);
            e--;
        }
    }

    print(arr,n);

    return 0;
}