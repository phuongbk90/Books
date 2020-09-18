#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: cpu <string>\n");
    exit(EXIT_FAILURE);
  }
  char *str = argv[1];
  while (1) {    
    sleep(3);
    printf("%s\n", str);
  }
  return (EXIT_SUCCESS);
}
