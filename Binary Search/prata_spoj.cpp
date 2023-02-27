#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ispossible(vector<int>cooksranks,int nP,int mid){
    int currP = 0;
    for(int i=0;i<cooksranks.size();i++){
        int R = cooksranks[i],j=1;
        int timetaken = 0;
        while(true){
            if(timetaken + j * R <= mid){
                ++currP;
                timetaken += j*R;
                ++j;
            }
            else{
                break;
            }
        }
        if(currP >= nP){
            return true;
        }
    }
    return false;
}

int mintimetocomporder(vector<int>cooksranks,int nP){
    int start = 0;
    int highestelement = *max_element(cooksranks.begin(),cooksranks.end());
    int end = highestelement * (nP * (nP+1)/2);
    int ans = -1;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(ispossible(cooksranks,nP,mid)){
            ans = mid;
            end = mid - 1;   
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
} 

int main(){
    // 3
    // 10
    // 4 1 2 3 4
    // 12
    int T;
    cin >> T;
    
    while(T--){
        int nP,nC;
        cin >> nP >> nC;
        vector<int>cooksranks;
        while(nC--){
            int R;
            cin >> R;
            cooksranks.push_back(R);
        }
        cout << mintimetocomporder(cooksranks,nP) << endl;
    }

    
    return 0;
}