#include <iostream>
#include <cstring>
using namespace std;
class LCD{
  public:
    LCD();
    ~LCD();
    void input_length();
    void input_number();
    void first_row();
    void second_row();
    void third_row();
    void first_clown();
    void second_clown();
    bool judge();
  private:
    int _length;
    char * _input;
};
LCD::LCD()
{
  _input = new char [10];
  _length = -1;
}
LCD::~LCD()
{
  delete _input;
}
void LCD::input_length()
{
  cin>>_length;
}
void LCD::input_number()
{
  cin>>_input;
}
void LCD::first_row()
{
  for(int i = 0;i < strlen(_input);i++)
  {
    cout<<" ";
    for(int j = 0;j < _length;j++)
    {
      if(_input[i] == '1' || _input[i] == '4')
        cout<<" ";
      else if(_input[i] == '0' || _input[i] == '2' || _input[i] == '3' || (_input[i] >= '5' && _input[i] <= '9'))
        cout<<"-";
    }
    cout<<" ";
    if(i == strlen(_input) - 1)
      cout<<endl;
    else if(i != strlen(_input) - 1)
      cout<<" ";
  }
}
void LCD::second_row()
{
  for(int i = 0;i < strlen(_input);i++)
  {
    cout<<" ";
    for(int j = 0;j < _length;j++)
    {
      if(_input[i] == '0' || _input[i] == '1' || _input[i] == '7')
        cout<<" ";
      else if((_input[i] >= '2' && _input[i] <= '6') || _input[i] == '8' || _input[i] == '9')
        cout<<"-";
    }
    cout<<" ";
    if(i == strlen(_input) - 1)
      cout<<endl;
    else if(i != strlen(_input) - 1)
      cout<<" ";
  }
}
void LCD::third_row()
{
  for(int i = 0;i < strlen(_input);i++)
  {
    cout<<" ";
    for(int j = 0;j < _length;j++)
    {
      if(_input[i] == '1' || _input[i] == '4' || _input[i] == '7')
        cout<<" ";
      else if(_input[i] == '0'|| _input[i] == '2'|| _input[i] == '3' || _input[i] == '5' || _input[i] == '6' ||  _input[i] == '8' || _input[i] == '9')
        cout<<"-";
    }
    cout<<" ";
    if(i == strlen(_input) - 1)
      cout<<endl;
    else if(i != strlen(_input) - 1)
      cout<<" ";
  }
  cout<<endl;
}
void LCD::first_clown()
{
  for(int i = 0;i < _length;i++)
  {
    for(int j = 0;j < strlen(_input);j++)
    {
      if(_input[j] == '1' || _input[j] == '2' || _input[j] == '3' || _input[j] == '7')
      {
        cout<<" ";
        for(int k = 0;k < _length;k++)
          cout<<" ";
        cout<<"|";
      }
      else if(_input[j] == '0' || _input[j] == '4' || _input[j] == '8' || _input[j] == '9')
      {
        cout<<"|";
        for(int k = 0;k < _length;k++)
          cout<<" ";
        cout<<"|";
      }
      else if(_input[j] == '5' || _input[j] == '6')
      {
        cout<<"|";
        for(int k = 0;k < _length;k++)
          cout<<" ";
        cout<<" ";
      }
      if(j == strlen(_input) - 1)
        cout<<endl;
      else if(j != strlen(_input) - 1)
        cout<<" ";
    }
  }
}
void LCD::second_clown()
{
  for(int i = 0;i < _length;i++)
  {
    for(int j = 0;j < strlen(_input);j++)
    {
      if(_input[j] == '1' || _input[j] == '3' || _input[j] == '4' || _input[j] == '5' || _input[j] == '7' || _input[j] == '9')
      {
        cout<<" ";
        for(int k = 0;k < _length;k++)
          cout<<" ";
        cout<<"|";
      }
      else if(_input[j] == '6' || _input[j] == '8' || _input[j] == '0')
      {
        cout<<"|";
        for(int k = 0;k < _length;k++)
          cout<<" ";
        cout<<"|";
      }
      else if(_input[j] == '2')
      {
        cout<<"|";
        for(int k = 0;k < _length;k++)
          cout<<" ";
        cout<<" ";
      }
      if(j == strlen(_input) - 1)
        cout<<endl;
      else if(j != strlen(_input) - 1)
        cout<<" ";
    }
  }
}
bool LCD::judge()
{
  if(_length == 0)
    return false;
  else 
    return true;
}
int main()
{
  LCD answer;
  answer.input_length();
  while(answer.judge())
  {
    answer.input_number();
    answer.first_row();
    answer.first_clown();
    answer.second_row();
    answer.second_clown();
    answer.third_row();
    answer.input_length();
  }
  return 0;
}
