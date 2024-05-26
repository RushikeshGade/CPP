#include<iostream>
using namespace std; //naked function can be friend

class Demo
{
    public:
      int i;
    private:
      int j;
    protected:
      int k;

    public:
      Demo()
      {
        i= 10;
        j= 20;
        k= 30;
      }   

      friend void fun();   
};

void fun()
{
   Demo obj;
   cout<<obj.i<<"\n";
   cout<<obj.j<<"\n";
   cout<<obj.k<<"\n";

}
int main()
{
   fun();
    return 0 ;
}