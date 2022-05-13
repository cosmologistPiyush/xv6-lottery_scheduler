#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if (argc < 2 || argc > 2) {
    printf(0, "invalid args\n");
    return 1;
  }

  int tickets, i;

  tickets = atoi(argv[1]);
  settickets(tickets);
  for (i = 0; i < 1000; i++) {
    if (!(i % 50))
      printf(1, "tickets: %d\n", tickets);
  }

  exit();
}
