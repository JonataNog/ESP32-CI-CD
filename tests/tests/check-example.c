#include <check.h>
#include "../src/example-test.h"
#include <stdlib.h>

START_TEST(test_example){
    float value = 28.0;
    ck_assert_int_eq(reasonable_values(value), 1);
}END_TEST

Suite *example_suite(void){
    Suite *s;
    TCase *tc_core;

    s = suite_create("Example");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_example);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void){
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = example_suite();
    runner = srunner_create(s);

    srunner_set_xml(runner, __FILE__ ".xml");
    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}