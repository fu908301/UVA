#include <iostream>
using namespace std;
class closest_sums{
  public:
    closest_sums();
    ~closest_sums();
    void first_input(int n);
    void second_input(int m);
    void calculus(int n,int m);
    void print_case();
  private:
    int *_first,*_second,answer,answer_sub,cmp_sub,cmp_sum,_count;
};
closest_sums::closest_sums()
{
  _first = new int [1000];
  _second = new int [25];
  _count = 0;
}
closest_sums::~closest_sums()
{
  delete _first;
  delete _second;
}
void closest_sums::first_input(int n)
{
  cin>>_first[n];
}
void closest_sums::second_input(int m)
{
  cin>>_second[m];
}
void closest_sums::calculus(int n,int m)
{
  answer = _first[0] + _first[1];
  for(int i = 0;i < m;i++)
  {
    for(int j = 0;j < n-1;j++)
    {
      for(int k = j+1;k < n;k++)
      {
        cmp_sum = _first[j] + _first[k];
        cmp_sub = cmp_sum - _second[i];
        answer_sub = answer - _second[i];
        if(cmp_sub < 0)
          cmp_sub *= -1;
        if(answer_sub < 0)
          answer_sub *= -1;
        if(answer_sub > cmp_sub)
          answer = cmp_sum;
      }
    }
    cout<<"Closest sum to "<<_second[i]<<" is "<<answer<<"."<<endl;
  }
}
void closest_sums::print_case()
{
  _count++;
  cout<<"Case "<<_count<<":"<<endl;
}
int main()
{
  closest_sums result;
  int n,m;
  cin>>n;
  while(n!=0)
  {
    for(int i = 0;i<n;i++)
      result.first_input(i);
    cin>>m;
    for(int j = 0;j<m;j++)
      result.second_input(j);
    result.print_case();
    result.calculus(n,m);
    cin>>n;
  }
  return 0;
}
