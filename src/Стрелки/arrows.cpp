#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
 string s;
 int i, kol=0;
 cin>>s;
 for(i=0;i<s.length();i++)
 {
  if(s.substr(i, 5) == ">>-->")
   kol++;
  else if(s.substr(i, 5) == "<--<<")
   kol++;
 }
 cout<<kol;
 
 return 0;
}