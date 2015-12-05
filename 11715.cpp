#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class car{
  public:
    car();
   void myinput();
   void test1();
   void test2();
   void test3();
   void test4();
   int outinput();
   void output();
   void judge();
   void clean();
  private:
    double u,v,t,a,s;
    int input;
};
car::car()
{
  input = -1;
}
void car::myinput()
{
  cin>>input;
}
void car::test1()
{
  cin>>u>>v>>t;
  a = (v - u) / t; 
  s = (u + v)*t/2;
}
void car::test2()
{
  cin>>u>>v>>a;
  t = (v - u) / a;
  if(t<0)
    t *= -1;
  s = (u + v)*t/2;
}
void car::test3()
{
  cin>>u>>a>>s;
  v = sqrt(u*u+2*a*s);
  t = (v-u)/a;
}
void car::test4()
{
  cin>>v>>a>>s;
  u = sqrt(v*v-2*a*s);
  t = (v-u)/a;
}
int car::outinput()
{
  return input;
}
void car::judge()
{
  if(input == 1)
    test1();
  else if(input == 2)
    test2();
  else if(input == 3)
    test3();
  else if(input == 4)
    test4();
}
void car::clean()
{
  u = 0;
  v = 0;
  t = 0;
  a = 0;
  s = 0;
}
void car::output()
{
  if(input == 1)
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<s<<" "<<a<<endl;
  else if(input == 2)
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<s<<" "<<t<<endl;
  else if(input == 3)
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<v<<" "<<t<<endl;
  else if(input == 4)
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<u<<" "<<t<<endl;
}
int main()
{
 car ans;
 int times = 0;
 ans.myinput();
 while(ans.outinput()!=0)
 {
  ans.clean();
  times++;
  ans.judge();
  cout<<"Case "<<times<<": ";
  ans.output();
  ans.myinput();
 }
 return 0;
}
