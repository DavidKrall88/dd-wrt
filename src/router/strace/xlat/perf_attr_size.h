/* Generated by ./xlat/gen.sh from ./xlat/perf_attr_size.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_ATTR_SIZE_VER0) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER0) && HAVE_DECL_PERF_ATTR_SIZE_VER0)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER0) == (64), "PERF_ATTR_SIZE_VER0 != 64");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER0 64
#endif
#if defined(PERF_ATTR_SIZE_VER1) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER1) && HAVE_DECL_PERF_ATTR_SIZE_VER1)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER1) == (72), "PERF_ATTR_SIZE_VER1 != 72");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER1 72
#endif
#if defined(PERF_ATTR_SIZE_VER2) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER2) && HAVE_DECL_PERF_ATTR_SIZE_VER2)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER2) == (80), "PERF_ATTR_SIZE_VER2 != 80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER2 80
#endif
#if defined(PERF_ATTR_SIZE_VER3) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER3) && HAVE_DECL_PERF_ATTR_SIZE_VER3)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER3) == (96), "PERF_ATTR_SIZE_VER3 != 96");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER3 96
#endif
#if defined(PERF_ATTR_SIZE_VER4) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER4) && HAVE_DECL_PERF_ATTR_SIZE_VER4)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER4) == (104), "PERF_ATTR_SIZE_VER4 != 104");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER4 104
#endif
#if defined(PERF_ATTR_SIZE_VER5) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER5) && HAVE_DECL_PERF_ATTR_SIZE_VER5)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER5) == (112), "PERF_ATTR_SIZE_VER5 != 112");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER5 112
#endif
#if defined(PERF_ATTR_SIZE_VER6) || (defined(HAVE_DECL_PERF_ATTR_SIZE_VER6) && HAVE_DECL_PERF_ATTR_SIZE_VER6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_ATTR_SIZE_VER6) == (120), "PERF_ATTR_SIZE_VER6 != 120");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_ATTR_SIZE_VER6 120
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat perf_attr_size in mpers mode

# else

static const struct xlat_data perf_attr_size_xdata[] = {
 XLAT(PERF_ATTR_SIZE_VER0),
 XLAT(PERF_ATTR_SIZE_VER1),
 XLAT(PERF_ATTR_SIZE_VER2),
 XLAT(PERF_ATTR_SIZE_VER3),
 XLAT(PERF_ATTR_SIZE_VER4),
 XLAT(PERF_ATTR_SIZE_VER5),
 XLAT(PERF_ATTR_SIZE_VER6),
};
static
const struct xlat perf_attr_size[1] = { {
 .data = perf_attr_size_xdata,
 .size = ARRAY_SIZE(perf_attr_size_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
