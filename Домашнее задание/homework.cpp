#include <iostream>
using namespace std;
int main()
{
 short n;
 cin>>n;
 short a[n];
 
 for(short i=0;i<n;i++)
 {
  cin>>a[i];
 }
  
 short posnums = 0, midpr = 1;
 short imax, imin;
 short max = 0, min = 1000;
  
 for(short i=0;i<n;i++)
 {
  if(a[i] > 0) posnums += a[i];
  if(a[i] > max) 
  {
    max = a[i];
    imax = i;
  }
  if(a[i] < min)
  {
    min = a[i];
    imin = i;
  }
 }

 if(imin > imax)
 {
    for(short i=imax+1;i<imin;i++)
    {
      midpr *= a[i];
    } 
 }
 if(imax > imin)
 {
   for(short i=imin+1;i<imax;i++)
   {
     midpr *= a[i];
   }
 }
  
 cout<<posnums<<" "<<midpr;

 return 0;
}
