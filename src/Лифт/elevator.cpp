#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 
string s;
cin>>s;

int max = 0, min = 101, t = 0;

for(int i = 0; i < s.size(); i++)
 {
    if(s[i] == '1') t++;
    else t--;
    
    if(t > max) max = t;
    if(t < min) min = t;
 }

int answer = max - min + 1;
cout<<answer;

 return 0;
}