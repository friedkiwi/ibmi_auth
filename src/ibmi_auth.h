#include <as400_types.h>
#include <as400_protos.h>

#include "php.h"

#define PHP_IBMI_AUTH_EXTNAME "ibmi_auth"
#define PHP_IBMI_AUTH_VERSION "0.0.1"


static  ILEpointer qsygetph __attribute__ ((aligned (16)));
static  ILEpointer qsyrlsph __attribute__ ((aligned (16)));

PHP_FUNCTION(ibmi_auth);

