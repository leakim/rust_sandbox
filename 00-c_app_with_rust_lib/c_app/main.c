#include <stdio.h>
#include "rust_work.h"

int main()
{
#if 1
    for(int i=0; i< 10; i++)
    {
        printf("rust_add(%d, %d) -> %d\n", i, 1, rust_add(i, 1));
    }
#endif
    return 0;
}
