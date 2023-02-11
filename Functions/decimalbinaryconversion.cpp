#include<iostream>
#include<cmath>
using namespace std;

int decimaltobinaryMethod1(int n){
    //Division Method
    int binaryno = 0;
    int i=0;
    while(n > 0){
        int bit = n % 2;
        binaryno = binaryno + bit * pow(10,i++);
        n = n/2;
    }
    return binaryno;

}

int decimaltobinaryMethod2(int n){
    //Bitwise Method
    int binaryno = 0;
    int i=0;
    while(n > 0){
        int bit = (n & 1);
        binaryno = binaryno + bit * pow(10,i++);
        n = n >> 1;
    }
    return binaryno;

}

int binarytodecimal(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int bit = n % 10;
        decimal = decimal + bit * pow(2,i++);
        n = n/10;
    }
    return decimal;
}

int main(){
    int n;
    cin >> n;
    //cout << decimaltobinaryMethod1(n) << endl;
    cout << decimaltobinaryMethod2(n) << endl;
    //cout << binarytodecimal(n) << endl;

}