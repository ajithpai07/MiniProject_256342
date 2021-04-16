#include "unity.h"

#include "Calendar.h"
#define PROJECT_NAME    "Calendar"

/* Prototypes for all the test functions */
void test_NumberofDays(void);
void test_LeapYears(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_NumberofDays);
  RUN_TEST(test_LeapYears);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_NumberofDays(void) {
  TEST_ASSERT_EQUAL(31, NumberofDays(1, 1999));
  TEST_ASSERT_EQUAL(29, NumberofDays(2, 2000));
  TEST_ASSERT_EQUAL(31, NumberofDays(12, 2012));
  TEST_ASSERT_EQUAL(28, NumberofDays(02, 2021));
  TEST_ASSERT_EQUAL(29, NumberofDays(02, 2004));
  TEST_ASSERT_EQUAL(31, NumberofDays(8, 2029));
  TEST_ASSERT_EQUAL(30, NumberofDays(9, 2023));
}
void test_LeapYears(void) {
  TEST_ASSERT_EQUAL(729389, LeapYears(1998));
  TEST_ASSERT_EQUAL(729754, LeapYears(1999));
  TEST_ASSERT_EQUAL(734502, LeapYears(2012));
  TEST_ASSERT_EQUAL(737424, LeapYears(2020));
  TEST_ASSERT_EQUAL(731580, LeapYears(2004));
}

