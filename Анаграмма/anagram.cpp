#include <iostream>
#include <string>
using namespace std;
int main()
{
 string s1, s2;
 cin>>s1>>s2;
 int a[255] = {0}, b[255] = {0}, kol = 1, n;
 
 if(s1.length() == 0)
 {
  cout<<"NO";
  return 0;
 }
 
 for(int i=0;i<s1.length();i++)
 {
  n = (int) s1[i];
  a[n]++;
 }
 
 for(int i=0;i<s2.length();i++)
 {
  n = (int) s2[i];
  b[n]++;
 }
 
 for(int i=0;i<254;i++)
 {
  if(a[i] == b[i]) kol++;
 }
 
 if(kol == 255)
  cout<<"YES";
 else cout<<"NO";
 
 return 0;
}