/* Generated by ./xlat/gen.sh from ./xlat/epollevents.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(EPOLLIN) || (defined(HAVE_DECL_EPOLLIN) && HAVE_DECL_EPOLLIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLIN) == (0x00000001), "EPOLLIN != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLIN 0x00000001
#endif
#if defined(EPOLLPRI) || (defined(HAVE_DECL_EPOLLPRI) && HAVE_DECL_EPOLLPRI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLPRI) == (0x00000002), "EPOLLPRI != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLPRI 0x00000002
#endif
#if defined(EPOLLOUT) || (defined(HAVE_DECL_EPOLLOUT) && HAVE_DECL_EPOLLOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLOUT) == (0x00000004), "EPOLLOUT != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLOUT 0x00000004
#endif
#if defined(EPOLLERR) || (defined(HAVE_DECL_EPOLLERR) && HAVE_DECL_EPOLLERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLERR) == (0x00000008), "EPOLLERR != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLERR 0x00000008
#endif
#if defined(EPOLLHUP) || (defined(HAVE_DECL_EPOLLHUP) && HAVE_DECL_EPOLLHUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLHUP) == (0x00000010), "EPOLLHUP != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLHUP 0x00000010
#endif
#if defined(EPOLLNVAL) || (defined(HAVE_DECL_EPOLLNVAL) && HAVE_DECL_EPOLLNVAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLNVAL) == (0x00000020), "EPOLLNVAL != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLNVAL 0x00000020
#endif
#if defined(EPOLLRDNORM) || (defined(HAVE_DECL_EPOLLRDNORM) && HAVE_DECL_EPOLLRDNORM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLRDNORM) == (0x00000040), "EPOLLRDNORM != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLRDNORM 0x00000040
#endif
#if defined(EPOLLRDBAND) || (defined(HAVE_DECL_EPOLLRDBAND) && HAVE_DECL_EPOLLRDBAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLRDBAND) == (0x00000080), "EPOLLRDBAND != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLRDBAND 0x00000080
#endif
#if defined(EPOLLWRNORM) || (defined(HAVE_DECL_EPOLLWRNORM) && HAVE_DECL_EPOLLWRNORM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLWRNORM) == (0x00000100), "EPOLLWRNORM != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLWRNORM 0x00000100
#endif
#if defined(EPOLLWRBAND) || (defined(HAVE_DECL_EPOLLWRBAND) && HAVE_DECL_EPOLLWRBAND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLWRBAND) == (0x00000200), "EPOLLWRBAND != 0x00000200");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLWRBAND 0x00000200
#endif
#if defined(EPOLLMSG) || (defined(HAVE_DECL_EPOLLMSG) && HAVE_DECL_EPOLLMSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLMSG) == (0x00000400), "EPOLLMSG != 0x00000400");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLMSG 0x00000400
#endif
#if defined(EPOLLRDHUP) || (defined(HAVE_DECL_EPOLLRDHUP) && HAVE_DECL_EPOLLRDHUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLRDHUP) == (0x00002000), "EPOLLRDHUP != 0x00002000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLRDHUP 0x00002000
#endif
#if defined(EPOLLEXCLUSIVE) || (defined(HAVE_DECL_EPOLLEXCLUSIVE) && HAVE_DECL_EPOLLEXCLUSIVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLEXCLUSIVE) == (0x10000000), "EPOLLEXCLUSIVE != 0x10000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLEXCLUSIVE 0x10000000
#endif
#if defined(EPOLLWAKEUP) || (defined(HAVE_DECL_EPOLLWAKEUP) && HAVE_DECL_EPOLLWAKEUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLWAKEUP) == (0x20000000), "EPOLLWAKEUP != 0x20000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLWAKEUP 0x20000000
#endif
#if defined(EPOLLONESHOT) || (defined(HAVE_DECL_EPOLLONESHOT) && HAVE_DECL_EPOLLONESHOT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLONESHOT) == (0x40000000), "EPOLLONESHOT != 0x40000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLONESHOT 0x40000000
#endif
#if defined(EPOLLET) || (defined(HAVE_DECL_EPOLLET) && HAVE_DECL_EPOLLET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((EPOLLET) == (0x80000000), "EPOLLET != 0x80000000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define EPOLLET 0x80000000
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat epollevents in mpers mode

# else

static const struct xlat_data epollevents_xdata[] = {
 XLAT(EPOLLIN),
 XLAT(EPOLLPRI),
 XLAT(EPOLLOUT),
 XLAT(EPOLLERR),
 XLAT(EPOLLHUP),
 XLAT(EPOLLNVAL),
 XLAT(EPOLLRDNORM),
 XLAT(EPOLLRDBAND),
 XLAT(EPOLLWRNORM),
 XLAT(EPOLLWRBAND),
 XLAT(EPOLLMSG),
 XLAT(EPOLLRDHUP),
 XLAT(EPOLLEXCLUSIVE),
 XLAT(EPOLLWAKEUP),
 XLAT(EPOLLONESHOT),
 XLAT(EPOLLET),
};
static
const struct xlat epollevents[1] = { {
 .data = epollevents_xdata,
 .size = ARRAY_SIZE(epollevents_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
