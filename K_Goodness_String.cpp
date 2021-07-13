#include<iostream>
#include<cstdio>
#include<string.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int rslt[tc];

    for(int i=0;i<tc;i++)
    {
        int N,K;
        cin>>N>>K;
        string str;
        cin>>str;
        int good=0;

        for(int j=0;j<N/2;j++)
        {
            if(str[j]!=str[N-j-1])
            {
                good++;
            }
        }
        rslt[i]=abs(K-good);
    }

    for(int i=0;i<tc;i++)
    {
        cout<<"\nCase #"<<i+1<<": "<<rslt[i];
    }
}
