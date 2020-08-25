#include <bits/stdc++.h>

using namespace std;


    int calcPrimes(int n)
{
    int ret=0;
    int arr[n+1]={0};
    for(int i=0;i<=n;i++)
    {
        arr[i]=i;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]!=-1)
        {
            for(int j=2*i;j<=n ;j+=i)
            {
                if(arr[j] % arr[i] == 0)
                {
                    arr[j]=-1;
                }
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i] != -1)
        {
            ret++;
        }
    }
    return ret;
}
void sillyGame(int n) 
{
    string ret="Alice";
    int nprimes=calcPrimes(n);
    if(nprimes%2==0)
    {
        cout<<"Bob\n";
    }
    else
    {
        cout<<"Alice\n";
    }
}

int main()
{
    int n,g;
    
    scanf("%d",&g);
    while(g--)
    {
        scanf("%d",&n);
        sillyGame(n);
    }
    
    return 0;
}