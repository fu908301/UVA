#include <iostream>
using namespace std;
bool judge(int *input);
bool judge(int *input)
{
  if(input[0] > input[1])
  {
    for(int i = 0;i < 9;i++)
    {
      if(input[i] < input[i+1])
        return false;
    }
    return true;
  }
  if(input[0] < input[1])
  {
    for(int i = 0; i < 9; i++)
    {
      if(input[i] > input[i+1])
        return false;
    }
    return true;
  }
}
int main()
{
  int input[10];
  int times;
  bool result;
  cin>>times;
  cout<<"Lumberjacks:"<<endl;
  for(int i = 0;i < times;i++)
  {
    for(int j = 0;j < 10;j++)
      cin>>input[j];
    result = judge(input);
    if(result == true)
      cout<<"Ordered"<<endl;
    else if(result == false)
      cout<<"Unordered"<<endl;
  }
}
