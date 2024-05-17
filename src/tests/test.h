#ifndef CHECK_TEST_EXAMPLE_TEST_H
#define CHECK_TEST_EXAMPLE_TEST_H

/**
install check: https://libcheck.github.io/check/web/install.html

then add an environment variables as follows
export CPATH=/opt/homebrew/include
export LIBRARY_PATH=/opt/homebrew/lib
**/
#include "check.h"

#include "../fizzbuzz.h"

Suite* fizzbuzz_suite(void);

#endif //CHECK_TEST_EXAMPLE_TEST_H
