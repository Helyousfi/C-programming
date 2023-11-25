#include <iostream>
using namespace std;

int main()
{
    int age{24};
    const int& ref_age{age};

    cout << ++age << endl;
    cout << ref_age << endl;

    cout << &age << ":" << age << endl;
    cout << &ref_age << ":" << ref_age << endl;
    
    return 0;
}