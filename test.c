#include <stdio.h>
int main()
{
   int x = 0;
   for (x = 0; x < 50; x+=1)
   {
      continue;
   }
   printf("%i\n", x);
}