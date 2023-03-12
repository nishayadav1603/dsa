#include<iostream>
#include<vector>
using namespace std;

void solve(string str,string output,int i,vector <string>& ans){
    //base case 
    if(i >= str.length()){
        ans.push_back(output);
        return;
    }

    //exclude
    solve(str,output,i+1,ans);

    //include
    solve(str,output + str[i],i+1,ans);
}

int main(){
    string str = "abc";
    string output = "";
    int i = 0;
    vector <string> ans;
    solve(str,output,i,ans);
    for(auto answer: ans){
        cout << answer<< endl;    
    }   
    return 0;
}