#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 5, 10, 20, 40, 80} ;
    int m = 6;
    int b[] = {6, 7, 20, 80, 100} ;
    int n = 5;
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120} ;
    int size = 8;
    int i=0,j=0,k=0;
    while(i<m && j<n && k<size){
        if(a[i] == b[j] && b[j] == c[k]){
            cout << a[i] << " ";
            i++,j++,k++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else if(b[j] < c[k]){
            j++;
        }
        else{
            k++;
        }
    }
    
    return 0;
}