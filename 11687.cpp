#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
int _count(int _length,int times)
{
  char temp[10];
  int next_length;
  sprintf(temp,"%d",_length);
  next_length = strlen(temp);
  if(next_length == _length)
    return ++times;
  else 
    return _count(next_length,++times);
}
int main()
{
  char *input;
  int _length,times = 1,answer;
  input = new char [1000001];
  cin>>input;
  while(strcmp(input,"END"))
  {
    _length = strlen(input);
    if(_length == 1 && input[0] == '1')
      answer = 1;
    else
      answer = _count(_length,times);
    cout<<answer<<endl;
    cin>>input;
  }
  return 0;
}

