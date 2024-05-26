
// #include <iostream>
// using namespace std;
// class Demo
// {
//     public:
//     void fun(int i)
//     {
//         cout<<"first defination";
//     }
//     void fun(int i, int j)
//     {
//         cout<<"second defination";
//     }
// };

// int main() 
// {
//     Demo obj();

//     obj.fun(10);
//     obj.fun(10,20);
    

//     return 0;
// }




// #include <iostream>
// using namespace std;
// class Demo
// {
//     public:
//     void fun(int *p)
//     {
//         cout<<"first defination";
//     }
//     void fun(float *p)
//     {
//         cout<<"second defination";
//     }
//     void fun(int no)
//     {
//         cout<<"third defination";
//     }
// };

// int main() 
// {
//     int no = 11;
//     float f =3.14;

//     Demo obj();

//     obj.fun(no);
//     obj.fun(&no);
//     obj.fun(&f);
    

//     return 0;
// }


#include <iostream>
using namespace std;
class Base
{
    public:
      int i,j;
      static int k;
    Base()
    {
        i = 10;
        j = 20;
    }
    void fun()
    {
        cout<<"Base fun";
    }
    
};

int Base::k=11;

class Derived:public Base
{
   public: 
      int x,y;
   Derived()
   {
      x = 50;
      y = 60;
   }
   void gun()
   {
     cout<<"Derived gun";
   }   
};

int main() 
{
    Base bobj();
    Derived dobj();
    
    cout<<sizeof(bobj);
    cout<<sizeof(dobj);

    cout<<bobj.i;
    cout<<bobj.j;
    cout<<dobj.i;
    cout<<bobj.j;
    cout<<bobj.k;
    cout<<bobj.x;

    bobj.fun();
    dobj.fun();
    dobj.gun();
    
    return 0;
}