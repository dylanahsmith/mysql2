#ifndef MYSQL2_MONOTIME_H
#define MYSQL2_MONOTIME_H

#include <time.h>

#define MONOTONIC_TIME_PER_SEC 1

typedef time_t monotonic_time_t;
monotonic_time_t monotonic_time();

#endif
