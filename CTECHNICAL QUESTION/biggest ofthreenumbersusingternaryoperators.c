#include <stdio.h>
int main()
{
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  a>b && a>c ? cout<< a: b>a && b>c ? cout<<b:cout<<c;
  return 0;
}
