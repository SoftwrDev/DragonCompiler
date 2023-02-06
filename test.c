#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int sum(int num_args, ...) {
   int val = 0;
   va_list ap;
   int i;

   va_start(ap, num_args);
   i = va_arg(ap, int);
    i = va_arg(ap, int);

   return i;
}

int main(void) {
   printf("Sum of 10, 20 and 30 = %i\n",  sum(1, 50, 100, 200));

   return 0;
}

