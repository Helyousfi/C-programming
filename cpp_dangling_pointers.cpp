/*
Dangling Pointers :

Case 1 : Uninitialized pointer 

Case 2 : deleted pointer

Case 3 : multiple pointers pointing to the same address

Solutions :
    - Initialize pointer.
    - Right after you call delete on a pointer, 
        remember to reset
    - For multiple pointers pointing to the same address,  
    Make sure there is
	one clear pointer (master pointer) that owns the 
    memory ( responsible for releasing when necessary).
*/

#include <iostream>
using namespace std;

int main()
{
    int* master_int_ptr {new int{100}};
    int* slave_int_ptr1 = master_int_ptr;
    int* slave_int_ptr2 = master_int_ptr;
    
    cout << "master_int_ptr " << &master_int_ptr << " "
        << master_int_ptr << " " << *master_int_ptr << endl;
    cout << "slave_int_ptr1 " << &slave_int_ptr1 << " "
        << slave_int_ptr1 << " " << *slave_int_ptr1 << endl;
    
    delete master_int_ptr;
    master_int_ptr = nullptr;

    if(!(master_int_ptr==nullptr))
    {
        cout << "slave_int_ptr1 " << &slave_int_ptr1 << " "
        << slave_int_ptr1 << " " << *slave_int_ptr1 << endl;
    }
    

    if(0)
    {
        int* intialized_int_ptr{new int{10}};
        if(!(intialized_int_ptr==nullptr)){
        cout << intialized_int_ptr << ":" <<
        *intialized_int_ptr << endl;

        delete intialized_int_ptr;
        intialized_int_ptr = nullptr;
        
        cout << "intialized_int_ptr has been deleted"  << endl;

        if(!(intialized_int_ptr==nullptr))
        {
            cout << intialized_int_ptr << ":" <<
            *intialized_int_ptr << endl;
        }
        }
    }
    



    cout << "Program terminated succussfully!" << endl;
    return 0;
}