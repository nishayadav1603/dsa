#include<iostream>
#include<vector>
using namespace std;

int main(){
    //pair sum
    int n;
    cout << "Enter the size of arr: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum = 8;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == sum){
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}