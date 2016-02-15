#include "../qunit.h"

static const int foo = 1234;
static const char *bar = "Hello, world!";

const char *foo_test(void) {
  q_should_eq("%d", "%d", foo, 1234);
  const int *ptr = &foo;
  q_should_not_eq("%d", "%d", (int) ptr, 1234);
  q_should_eq("%d", "%d", *ptr, 1234);
  return 0;
}

const char *bar_test(void) {
  q_should_not_eq("%s", "%s", bar, "Hello, world!");
  return 0;
}

q_start();
q_test(foo_test);
q_test(bar_test);
q_end();

