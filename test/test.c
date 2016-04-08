#include "thirdparty/ctest.h"
int kvadrat(int a,int b,int c, int *x1, int *x2);
CTEST(koren_suite, simple_test) {
    // Given
    const int a = 2;
    const int b = 2;
    const int c = -3;

 
    // When
    
    int x1;
    int x2;
    const int  y = kvadrat(a, b, c, &x1, &x2);
    
 
    // Then
    const int expected_y = 2;
    const int expected_x1 = 1;
    const int expected_x2 = -3;
    ASSERT_EQUAL(expected_y, y);
    ASSERT_EQUAL(expected_x1, x1);
    ASSERT_EQUAL(expected_x2, x2);
}

