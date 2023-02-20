#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 5, 10, 20, 40, 80} ;
    int m = 6;
    int b[] = {6, 7, 20, 80, 100} ;
    int n = 5;
    int c[] = {3, 4, 15, 20, 30, 70, 80, 120} ;
    int size = 8;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<size;k++){
                if(a[i] = b[j] = c[k]){
                    cout << a[i] << " ";
                }
            }
            
        }
    }
    return 0;
}