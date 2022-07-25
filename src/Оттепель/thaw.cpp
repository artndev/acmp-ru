#include <iostream>
using namespace std;
int main()
{
 int a[101], i, n, kol=0, mkol=0;

cin>>n;

for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++)
{
 if(a[i] > 0) kol++;
 else kol = 0;
 if(kol>mkol) mkol=kol;
}
cout<<mkol;
 return 0;
}