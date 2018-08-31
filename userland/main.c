/* main.c
 * A bridge between container.rs,
 * all the exec files,
 * all the transpilers,
 * and the stdlibs.
 */

#include "fs.h"
#include "mem.h"
#include "std.h"
#include "task.h"

/* container.rs */
int32_t new_container(const char * str)
