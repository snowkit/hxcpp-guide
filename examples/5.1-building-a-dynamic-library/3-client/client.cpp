#include <dlfcn.h>

//Define a function pointer typedef for clearer code below
//A void function, no return and no arguments.
typedef void (*VoidFN)(void);

int main() {

    void* handle = dlopen("../2-shared/libEmpty.dylib", RTLD_NOW);

        //first we initialize the library + thus hxcpp
    void* init = dlsym(handle, "run_haxe");
        //since the return is a void*, we want to cast it to a function pointer
        //We defined a function pointer typedef above called VoidFN
    VoidFN init_fn = (VoidFN)init;
        //Now we can call it like a regular function (pointer)
    init_fn();

        //Same goes for the test function.
    void* test = dlsym(handle, "empty_test");
    VoidFN test_fn = (VoidFN)test;
    
    test_fn();

        //Now we close the library as we don't need it
    dlclose(handle);

    return 0;

} //main
