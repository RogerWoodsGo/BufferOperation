#include "buffer.h"

int main(){
    buffer* b = buffer_init();
    buffer_copy_string(b,"Keep Calm and Carry On");
    printf("The Content of buffer is: %s\n", b->ptr);
    printf("The size of buffer we allocate is %d, used %d, remain %d\n", b->size, b->used, b->size - b->used);
    return 0;
}
