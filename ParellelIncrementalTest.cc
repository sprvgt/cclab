#include<cstdio>

#include"utils/Timer.h"
using namespace std;

int main() {
    int steps = 256 * 1024 * 1024;
    int* a = new int[2];

    Timer timer;

    timer.SetUp();
    for (int i = 0; i < steps; ++ i) {
        a[0] ++;
        a[0] ++;
    }
    timer.GetTimeCount();

    timer.SetUp();
    for (int i = 0; i < steps; ++ i) {
        a[0] ++;
        a[1] ++;
    }
    timer.GetTimeCount();

    timer.SetUp();
    for (int i = 0; i < steps; ++ i) {
        ++ a[0];
        ++ a[0];
    }
    timer.GetTimeCount();

    timer.SetUp();
    for (int i = 0; i < steps; ++ i) {
        ++ a[0];
        ++ a[1];
    }
    timer.GetTimeCount();

    return 0;
}
