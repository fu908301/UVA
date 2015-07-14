#include <iostream>
#include <stdio.h>
using namespace std;
int length(int data)
{
  int length=1;
  while(data!=1)
  {
    if(data%2)
      data=data*3+1;
    else  
      data=data/2;
    length++;
  }
  return length;
}
int main()
{
  int a,b,tempa,tempb,i,result,templen;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
    result=0;
    tempa=a;
    tempb=b;
    if(a>b)
      swap(a,b);
    for(i=a;i<=b;i++)
    {
      templen=length(i);
      if(templen>result)
        result=templen;
    }
    cout<<tempa<<" "<<tempb<<" "<<result<<endl;
  }
  return 0;
}
