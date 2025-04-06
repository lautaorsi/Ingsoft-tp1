#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t high_mask = 0x7;
    uint32_t low_mask = 0xE0000000;
    printf("%lu", (high_mask & low_mask));


    return 0;

    
}