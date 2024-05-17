#include "test.h"

START_TEST(test_fizzbuzz_normal) {
    ck_assert_str_eq(fizzbuzz(1), "1");
    ck_assert_str_eq(fizzbuzz(11), "11");
    ck_assert_str_eq(fizzbuzz(14), "14");
}

END_TEST

START_TEST(test_fizzbuzz_fizz) {
    ck_assert_str_eq(fizzbuzz(3), "fizz");
    ck_assert_str_eq(fizzbuzz(39), "fizz");
}

END_TEST

START_TEST(test_fizzbuzz_buzz) {
    ck_assert_str_eq(fizzbuzz(5), "buzz");
    ck_assert_str_eq(fizzbuzz(40), "buzz");
}

END_TEST

START_TEST(test_fizzbuzz_fizzbuzz) {
    ck_assert_str_eq(fizzbuzz(15), "fizzbuzz");
    ck_assert_str_eq(fizzbuzz(45), "fizzbuzz");
}

END_TEST

Suite* fizzbuzz_suite(void) {
    Suite* suite;
    TCase* core;

    suite = suite_create("fizzbuzz");
    core = tcase_create("Core");

    tcase_add_test(core, test_fizzbuzz_normal);
    tcase_add_test(core, test_fizzbuzz_fizz);
    tcase_add_test(core, test_fizzbuzz_buzz);
    tcase_add_test(core, test_fizzbuzz_fizzbuzz);
    suite_add_tcase(suite, core);

    return (suite);
}
