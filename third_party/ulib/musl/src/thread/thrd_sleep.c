#include <threads.h>

#include <assert.h>
#include <zircon/syscalls.h>

#include "time_conversion.h"

int thrd_sleep(const struct timespec* req, struct timespec* rem) {
    // For now, Zircon only provides an uninterruptible nanosleep. If
    // we ever introduce an asynchronous mechanism that would require
    // some EINTR-like logic, then we will also want a nanosleep call
    // which reports back how much time is remaining. Until then,
    // always report back 0 timeout remaining.

    int ret = _zx_nanosleep(_zx_deadline_after(__timespec_to_zx_time_t(*req)));
    assert(ret == 0);
    if (rem) {
        *rem = (struct timespec){
            .tv_sec = 0,
            .tv_nsec = 0,
        };
    }
    return 0;
}
