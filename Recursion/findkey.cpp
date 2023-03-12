#include<iostream>
using namespace std;

int checkkey(string& str,int n,char key,int i){
    //base case
    if(i >= n){
        return -1;
    }
    if(str[i] == key){
        return i;
    }
    return checkkey(str,n,key,i+1);
}

int main(){
    string str = "nishayadav";
    int n = str.length();
    char key = 'a';
    int i = 0;
    int ans = checkkey(str,n,key,i);
    cout << ans << endl;
    return 0;
}