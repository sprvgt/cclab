#include<cstdio>
#include<ctime>

#include"utils/Timer.h"
using namespace std;

const int LENGTH = 64 * 1024 * 1024;

int main() {
    int* arr;
    arr = new int[LENGTH];
    
    Timer timer;
/*
    timer.SetUp();
    for (int i = 0; i < LENGTH; ++ i) {
        arr[i] *= 3;
    }
    timer.GetTimeCount();
*/
    for (int step = 1; step < 2048; step += step) { 
        printf("Step Length: %d\n", step);
        timer.SetUp();
        for (int i = 0; i < LENGTH; i += step) {
            arr[i] *= 3;
        }
        timer.GetTimeCount();
    }


    delete arr;

    return 0;
}
