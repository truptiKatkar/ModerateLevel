#include<iostream>
using namespace std;
int main()
{
    int i,j,no,a;
    cout<<"Enter how many number of rows and columns?";
    cin>>a;
    for(i=1; i<=a; i++)
    {
        if(i%2==1) no=1;
        else no=i;
        for(j=1; j<=i; j++)
        {
            if(j==i)
                cout<<no;
            else
                cout<<no<<"#";
            if(i%2==1) no++;
            else no--;
        }
        cout<<endl;
    }
    return 0;
}
