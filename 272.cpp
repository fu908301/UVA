#include <iostream>
using namespace std;
int main()
{
  bool quotes = true;
  string line;
  while(getline(cin,line))
  {
    for(int i=0;i<line.length();i++)
    {
      if(line[i]=='"')
      {
        if(quotes)
          cout<<"``";
        else
          cout<<"''";
        quotes=!quotes;
      }
      else 
        cout<<line[i];
    }
    cout<<endl;
  }
  return 0;
}
