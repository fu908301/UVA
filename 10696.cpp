#include <iostream>
using namespace std;
int f91(int N)
{
  if(N>=101)
    return N-10;
  else if(N<=100)
  {
    int temp=f91(f91(N+11));
    return temp;
  }
}
int main()
{
  int num;
  cin>>num;
  while(num!=0)
  {
    cout<<"f91("<<num<<") = "<<f91(num)<<endl;
    cin>>num;
  }
  return 0;
}
