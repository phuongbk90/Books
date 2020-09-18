#ifndef COMMON_H
#define COMMON_H

#include <assert.h>
#include <sys/time.h>

double get_time(void) {
  struct timeval t;
  int rc = gettimeofday(&t, NULL);
  assert(rc == 0);
  return (double)t.tv_sec + (double)t.tv_usec / 1e6;
}

void spin(int how_long) {
  double t = get_time();
  while (get_time() - t < (double)how_long)
    ;
}

#endif /* COMMON_H */
