#include <iostream>
using namespace std;
int main()
{
  char table[100] = {96,'1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']',92,'A','S','D','F','G','H','J','K','L',';',39,'Z','X','C','V','B','N','M',',','.','/'};
  char c;
  int loc;
  while(cin.get(c))
  {
    if(c == ' ')
      cout<<" ";
    else if(c == '\n')
      cout<<endl;
    else if(c == 'Q' || c == 'A' || c == 'Z' || c == 96)
      cout<<c;
    else
    {
      for(int i = 0;i < 100;i++)
      {
        if(c == table[i])
        {
          loc = i;
          break;
        }
      }
      cout<<table[loc-1];
    }
  }
  return 0;
}
