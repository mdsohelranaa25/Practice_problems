#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mm,dd,yy;
    cout<<"enter first date:";
    cin>>mm>>dd>>yy;
    int mm1,dd1,yy1;
    cout<<"enter second date:";
    cin>>mm1>>dd1>>yy1;
    if(yy1>yy)
    {
        cout<<"first date "<<mm<<"/"<<dd<<"/"<<yy<<" will come early on calender";

    }
    else if(yy>yy1)
    cout<<"second date "<<mm1<<"/"<<dd1<<"/"<<yy1<<" will come early on calender";

    else{

        if(mm1>mm)
    {
        cout<<"first date "<<mm<<"/"<<dd<<"/"<<yy<<"will come early on calender";

    }
    else if(mm>mm1)
    cout<<"second date "<<mm1<<"/"<<dd1<<"/"<<yy1<<"will come early on calender";


    else{

        if(dd1>dd)
    {
        cout<<"first date "<<mm<<"/"<<dd<<"/"<<yy<<"will come early on calender";

    }
    else if(dd>dd1)
    cout<<"second date "<<mm1<<"/"<<dd1<<"/"<<yy1<<"will come early on calender";

    else
    cout<<"both date are same";
    }
    }
    }



