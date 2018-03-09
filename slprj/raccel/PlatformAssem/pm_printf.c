#include "__cf_PlatformAssem.h"
#if defined(_MSC_VER)
#include <pm_printf.h>
#else
static int pm_printf_dummy ( void ) { return 0 ; }
#endif
