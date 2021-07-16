#include<iostream>
using namespace std;

int main()
{
    int i,j,no,n;
    cout<<"enter how many rows and columns you want :";
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i%2==1) no=1;
        else no=i;
        for(j=1;j<=i;j++)
        {
            if(j==i)
                cout<<no;
            else
                cout<<no<<",";
            if(i%2==1) no++;
            else no--;
        }
        cout<<endl;
    }
    for(i=1;i<=n-1;i++)
    {
        if(i==n-1)
            cout<<i;
        else
            cout<<i<<",";
    }
    cout<<endl;

    for(i=n-1;i>=1;i--)
    {
        if(i%2==1) no=1;
        else no=i;
        for(j=1;j<=i;j++)
        {
            if(j==i)
                cout<<no;
            else
                cout<<no<<",";
            if(i%2==1) no++;
            else no--;
        }
        cout<<endl;
    }

    return 0;
}
