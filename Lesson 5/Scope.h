#include <cstdlib>
#include <time.h>

namespace numbers {
    const double GRAVITY = -9.81;
    const float PI = 3.14159265358979323846;
    const float E  = 2.71828182845904523536;

    int random() {
        srand(time(NULL));
        return rand() % 100 + 1;
    }
}
