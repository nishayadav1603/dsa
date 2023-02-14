#include<iostream>
using namespace std;

bool iseven(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cin >> num;
    bool ans = iseven(num);
    if(ans){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}