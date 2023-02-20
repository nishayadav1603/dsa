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
    int precision = 2;
    //cout << "Enter the precision " << endl;
    //cin >> precision;
    double step = 0.1;
    double finalans = ans;
    for(int i=0;i<precision;i++){
        for(int j=finalans;j*j<=n;j=j+step){
            finalans = j;
        }
        step = step/10;
    }
    cout << finalans << endl;
    return 0;
}