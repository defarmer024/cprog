#include <iostream>

using namespace std;


class A     //Base class
{
public:
int l;
void len()
{
std::cout<<"\n\nLenght :\t";
std::cin>>l;                  //Lenght is enter by user
}
};
class B :public A   //Inherits property of class A
{
public:
int b,c;
void l_into_b()
{
len();
std::cout<<"\n\nBreadth :::\t";
std::cin>>b;                      //Breadth is enter by user
c=b*l;                       //c stores value of lenght * Breadth i.e. (l*b) .
}
};

class C
{
public:
int h;
void height()
{
std::cout<<"\n\nHeight :::\t";
std::cin>>h;                  //Height is enter by user
}
};

//Hybrid Inheritance Level
class D:public B,public C
{
public:
int res;
void result()
{
l_into_b();
height();
res=h*c;                          //res stores value of c*h  where c=l*b and h is height which is enter by user
std::cout<<"\n\nResult (l*b*h) :::\t"<<res;
}
};

int main()
{
D d1;
d1.result();
return 0;
}

