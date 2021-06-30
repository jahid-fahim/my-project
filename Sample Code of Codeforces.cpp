/*بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
  Bismillah-ir-Rahman-ir-Rahim*/


//Array
/*initialize all value zero of a array char a[1024] = {0};*/
//Vector
/*initialize all value zero of a vector vector<int>vec(100,0);
To erase 8th variable use myVector.erase(myVector.begin() + 7)
To erase variable use myVector.swap(secondVector)*/
//Stack
/*Declaration of a stack is like vector.Taking input
in stack using myStack.push(input);*/
//Queue
/*Declaration of a queue is queue <int> myQ;
like vector and stack.Taking input in stack using myQ.push(input);*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pi 3.14159265
#define pb push_back


int main()
{
    //ll t,x,y,j,i,z,p=0,q=0,d,mx=0;
    ll n,m,k,ans=0,ans1=0,c=1,p;
    cin>>n;
    int a[2*n];
    cin>>a[0];
    for(ll i=1; i<2*n; i++)
    {
        cin>>a[i];
        if(a[i]==a[i-1])
            c++;
    }
    sort(a,a+2*n);
    if(c==2*n)
        cout<<"-1"<<endl;
    else
    {
        for(ll i=0; i<2*n; i++)
        {
            cout<<a[i]<<" ";
        }
    }



























    return 0;
}
//Alhamdulillah
