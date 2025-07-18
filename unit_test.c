#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <string.h>

#include "../headers/shared.h"

int os_substr(char *dest, const char *src, size_t position, ssize_t length)
{
    dest[0] = '\0';

    if ( length <= 0  ) {
        /* Unsupported negative length string */
        return -3;
    }
    if ( src == NULL ) {
        return -2;
    }
    if ( position >= strlen(src) ) {
        return -1;
    }

    strncat(dest, (src + position), (size_t) length);

    return 0;
}

void test_os_substr_negative_length(void **state){
    char src[120] = "TEST";
    char dest[120];
    int result = os_substr(dest,src,5,-2);
    assert_int_equal(result,-3);
}

void test_os_substr_src_length_minor_than_position(void **state){
    char src[120] = "TEST";
    char dest[120];
    int result = os_substr(dest,src,5,4);
    assert_int_equal(result,-1);
}

void test_os_substr_null_src(void **state){
    char dest[120];
    int result = os_substr(dest, NULL, 0, 5);
    assert_int_equal(result, -2);
}

void test_os_substr_success(void **state){
    char src[120] = "TEST STRING";
    char dest[120];
    int result = os_substr(dest, src, 0, 4);
    assert_int_equal(result, 0);
    assert_string_equal(dest, "TEST");
}

int main(){
     const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_os_substr_negative_length),
        cmocka_unit_test(test_os_substr_position_too_large),
        cmocka_unit_test(test_os_substr_null_src),
        cmocka_unit_test(test_os_substr_normal),
    };
    return cmocka_run_group_tests(tests, NULL, NULL);
}