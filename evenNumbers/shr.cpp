#include <iostream>
using namespace std;
class Addition {
    public:
    int ADD(int x,int y)
    {
        return x+y;
    }
    int ADD() {
        string a="Hello";
        string b="World";
        string c=a+b;
        cout<<c<<endl;
    }

};
int main(void) {
    Addition obj;
    cout<<obj.ADD(128,15)<<endl;
    obj.ADD();
    return 0;
}