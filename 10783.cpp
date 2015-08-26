#include <iostream>
using namespace std;
int main()
{
  int times,i,a,b,j;
  cin>>times;
  for(i=1;i<=times;i++)
  {
    int sum=0,temp;
    cin>>a>>b;
    if(a%2==0)
      a+=1;
    if(b%2==0)
      b-=1;
    if(a>b)
    {
      temp=a;
      a=b;
      b=temp;
    }
    for(j=a;j<=b;j+=2)
      sum=sum+j;
    cout<<"Case "<<i<<": "<<sum<<endl;
  }
  return 0;
}
