
#include <stdio.h>
#include "Empty.h"

extern "C" {
    
    extern void hxcpp_set_top_of_stack();
    extern const char* hxRunLibrary();

    int run_haxe() {
        
        hxcpp_set_top_of_stack();

        const char *err = hxRunLibrary();

        if(err) {
            printf("Error %s\n", err);
            return -1;
        }
        
        return 0;

    } //run_haxe

    void empty_test() {
        Empty_obj::test();
    }

}
