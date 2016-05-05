#include "fab.h"

int fab(int n) {
    if (n > 2) return fab(n-1)+fab(n-2);
    else return 0;
}
