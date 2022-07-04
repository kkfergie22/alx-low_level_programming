#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

#define ABS(X)
#if X < 0
X = ((X)*(-1));
#endif
#endif
