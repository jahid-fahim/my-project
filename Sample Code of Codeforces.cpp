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
    ll n,m,a,b,k,ans=0,t=0,c=1,p;
    ll mx=INT_MAX;
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        while(a<t)
        {
            a+=b;
        }
        if(a<mx)
        {
            mx=a;
            ans=i+1;
        }
    }
    cout<<ans<<endl;



























    return 0;
}
//Alhamdulillah
