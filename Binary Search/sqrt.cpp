#include<iostream>
using namespace std;

int mySqrt(int x) {
        int s = 0;
        int e = x;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s <= e){
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid < x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
        
}

int main(){
    int n = 8;
    int ans = mySqrt(n);
    cout << ans << endl;
    return 0;
}