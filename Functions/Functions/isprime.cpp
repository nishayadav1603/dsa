#include<iostream>
using namespace std;

bool isprime(int num){
    int i=2;
    for(i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    bool ans = isprime(n);
    if(ans){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
}