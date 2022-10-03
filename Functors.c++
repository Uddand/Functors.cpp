#include <iostream>

using namespace std;

class Base {
    int n;
    
    public:
    Base(int n2){
        n=n2;
    }
    int operator()(int a,int b) {
        return a+b+n;
    }
};
int main()
{
   Base b1=Base(30);
  int sum= b1(10,20);
   cout<<"sum:"<<sum;

    return 0;
}