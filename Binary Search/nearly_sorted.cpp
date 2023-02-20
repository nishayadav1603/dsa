#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr,int target) {
        int s = 0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        while(s <= e){
            if(arr[mid] == target){
                return mid;
            }
            if(arr[mid-1] == target){
                return mid-1;
            }
            if(arr[mid+1] == target){
                return mid+1;
            }
            if(arr[mid] < target){
                s = mid + 2;
            }
            else{
                e = mid - 2;
            }
            mid = s + (e-s)/2;
        }
        return -1;
        
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: " << endl;
    for(int i=0;i<arr.size();i++){
        cin >> arr[i];
    }
    int target = 40;
    int ans = search(arr,target);
    cout << ans << endl;
    return 0;
}