/*
* Author: Jony Roy
* Date: 17-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

int main(int argc, char *argv[])
{

   int testCase;
   cin>>testCase;
   while(testCase--)
   {
       double a,b,z;
       cin>>a>>b>>z;
       int ans;
       if(2.0*a-b<=0.0)
        ans=0;
       else
        ans=(int)((z*(2.0*a-b))/(a+b));
       cout<<ans<<endl;
   }
   return 0;
}

