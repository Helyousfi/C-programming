#include<iostream>
using namespace std;
int main()
{
    int* dynamic_arr {new int[4]{4, 5, 6, 3}};
    int static_arr[4] = {4, 5, 6, 3};

    for(auto& s : static_arr)
    {
        ++s;
        // cout << s << endl;
    }
    return 0;
}