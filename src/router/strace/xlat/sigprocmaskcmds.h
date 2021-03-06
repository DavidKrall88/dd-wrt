/* Generated by ./xlat/gen.sh from ./xlat/sigprocmaskcmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sigprocmaskcmds in mpers mode

# else

static const struct xlat_data sigprocmaskcmds_xdata[] = {
#if defined(SIG_BLOCK) || (defined(HAVE_DECL_SIG_BLOCK) && HAVE_DECL_SIG_BLOCK)
  XLAT(SIG_BLOCK),
#endif
#if defined(SIG_UNBLOCK) || (defined(HAVE_DECL_SIG_UNBLOCK) && HAVE_DECL_SIG_UNBLOCK)
  XLAT(SIG_UNBLOCK),
#endif
#if defined(SIG_SETMASK) || (defined(HAVE_DECL_SIG_SETMASK) && HAVE_DECL_SIG_SETMASK)
  XLAT(SIG_SETMASK),
#endif
#if defined(SIG_SETMASK32) || (defined(HAVE_DECL_SIG_SETMASK32) && HAVE_DECL_SIG_SETMASK32)
  XLAT(SIG_SETMASK32),
#endif
};
static
const struct xlat sigprocmaskcmds[1] = { {
 .data = sigprocmaskcmds_xdata,
 .size = ARRAY_SIZE(sigprocmaskcmds_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
