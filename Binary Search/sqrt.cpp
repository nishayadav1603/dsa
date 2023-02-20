#include<iostream>
using namespace std;

int mySqrt(int x) {
        int s = 0;
        int e = x;
        int target = x;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s <= e){
            if(mid*mid == target){
                return mid;
            }
            else if(mid*mid < target){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
        
}

int main(){
    int n = 20;
    int ans = mySqrt(n);
    cout << ans << endl;
    return 0;
}