#include "types.h"
#include "user.h"

int
main(void)
{
  int i, x = 0;
  for (i = 0; i < 100000; i++)
    x += i;

  printf(0, "finished\n");
  exit();
}
