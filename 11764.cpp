#include <iostream>
using namespace std;
int main()
{
  int times;
  cin>>times;
  for(int i = 0;i < times;i++)
  {
    int times2,stage[50],up = 0,down = 0;
    cin>>times2;
    for(int j = 0;j < times2;j++)
      cin>>stage[j];
    if(times2 == 1)
    {
      up = 0;
      down = 0;
    }
    else
    {
      for(int j = 0;j < times2 - 1;j++)
      {
        if(stage[j] < stage[j+1])
          up++;
        else if(stage[j] > stage[j+1])
          down++;
      }
    }
    cout<<"Case "<<i+1<<": "<<up<<" "<<down<<endl;
    up = 0;
    down = 0;
  }
  return 0;
}
