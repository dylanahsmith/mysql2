#include <mysql2_ext.h>

#include <time.h>

monotonic_time_t monotonic_time() {
    time_t t;
    time(&t);
    return t;
}
