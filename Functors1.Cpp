#include <iostream>
#include<algorithm>
#include<vector>
//#include <functional>
using namespace std;

class Base {
    public:
    bool operator()(int n) {
        return n%2==0;
    }
};
int main() {
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    Base b1;
    int even_count=count_if(nums.begin(),nums.end(),b1);
    cout<<"even_count:"<<even_count<<endl;
    return 0;
    
}