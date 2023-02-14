#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(row=0;row<n;row+=1)
    {
        int count=0;
        if(row==0)
        {
            cout<<"";
        }
        else
        {
            cout<<"";
            for(col=0;col<row;col+=1)
            {
                count+=1;
                cout<<count;
            }
            for(col=0;col<row-1;col+=1)
            {
                count-=1;
                cout<<count;
            }
            cout<<"";
        }
        cout<<endl;
    }


    for(row=0;row<n-1;row+=1)
    {
        int count=0;
        if(row==n-2)
        {
            cout<<"";
        }
        else
        {
            cout<<"";
            for(col=0;col<n-row-2;col+=1)
            {
                count+=1;
                cout<<count;
            }
            for(col=0;col<n-row-3;col+=1)
            {
                count-=1;
                cout<<count;
            }
            cout<<"";
        }
        cout<<endl;
    }
    return 0;
}