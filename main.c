#include <stdio.h>
#include <time.h>

#include "recursive.h"

int main() {
    clock_t start = clock(), end;








    end = clock();
    printf("\nTime: %f", (double) (end-start)/CLOCKS_PER_SEC);
//O(2^n)
return 0;
}
