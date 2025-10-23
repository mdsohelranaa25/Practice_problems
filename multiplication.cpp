#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,sum=0;
    cout<<"enter the numbers of rows and cols for first matrix:"<<endl;
    cin>>m>>n;
    int a[m][n];

    int x,y;
    cout<<"enter the numbers of rows and cols for second matrix:"<<endl;
    cin>>x>>y;
    int b[x][y];
    // cout<<"enter the numbers of rows and cols for third matrix:"<<endl;
    // int e,f;
    // cin>>e>>f;
    int c[m][y];

    cout<<"enter elements for first matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];

        }
    }

     cout<<"enter elements for second matrix:"<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
             cout<<"Enter b["<<i<<"]["<<j<<"]: ";
            cin>>b[i][j];

        }
    }
    //  cout<<"enter elements for third matrix:"<<endl;
    // for(int i=0;i<e;i++)
    // {
    //     for(int j=0;j<f;j++)
    //     {
    //         cin>>c[i][j];

    //     }
    // }

cout<<"that first matrix is:"<<endl;

for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }



cout<<"that second matrix  is:"<<endl;

for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }


//     cout<<"that  third matrix is:"<<endl;

// for(int i=0;i<e;i++)
//     {
//         for(int j=0;j<f;j++)
//         {
//             cout<<c[i][j]<<" ";

//         }
//         cout<<endl;
//     }



if(n!=x)
{
    cout<<"matrix cannot be multiplicated";
}
else
{
for(int i=0;i<m;i++)
{
    for(int j=0;j<y;j++)
    {
        for(int k=0;k<n;k++)
        {
            sum=sum+a[i][k]*b[k][j];

        }
        c[i][j]=sum;
        sum=0;
    }


}
cout<<"multiplicated matrix:"<<endl;
for(int i=0;i<m;i++)
{
    for(int j=0;j<y;j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
}
}
