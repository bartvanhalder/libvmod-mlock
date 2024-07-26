#include "config.h"

#include <stdio.h>
#include <stdlib.h>

#include "cache/cache.h"

#include "vtim.h"
#include "vcc_mlock_if.h"

#include <sys/mman.h>

VCL_INT
vmod_all(VRT_CTX)
{
        return(mlockall(MCL_CURRENT|MCL_FUTURE));
}
