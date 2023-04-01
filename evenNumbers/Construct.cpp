#include <iostream>
using namespace std;
class Test
{
    public:
    Test()
    {
        cout<<"Constructor";
    }
    ~Test()
    {
        cout<<"\n Destructor";
    }
};
    main()
    {
        Test t;
        return 0;
    }
