#include <iostream>
using namespace std;
int divi(int n)
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        k++;
    }
    return k;
}
int main()
{
   int n;
   cin>>n;
   while(n>0)
   {
       int b;
       cin>>b;
       int a=divi(b);
       cout<<a<<endl;
       n--;
   }
}
