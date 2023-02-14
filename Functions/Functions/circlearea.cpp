#include<iostream>
using namespace std;

float circlearea(float r){
    float area = 3.14*r*r;
    return area;
}

int main(){
    float r;
    cin >> r;
    float area = circlearea(r);
    cout << area << endl;
}