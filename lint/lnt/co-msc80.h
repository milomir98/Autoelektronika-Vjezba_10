
#ifndef LINT_SUPPORT_CO_MSC80_H_
#define LINT_SUPPORT_CO_MSC80_H_

// co-msc80.h  --
// This header is automatically included in every module if you use
// co-msc80.lnt.  (There is a -header(co-msc80.h) option therein
// for this purpose
//
// This header is used to compensate for the fact that class typeinfo
// is available for use in the MSC compilers without an explicit
// definition.  According to the standard this class definition
// is not by default available.


#ifdef __cplusplus

#include <typeinfo>

#endif

#endif /* LINT_SUPPORT_CO_MSC80_H_ */
