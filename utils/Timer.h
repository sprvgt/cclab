#ifndef TIMER_H_
#define TIMER_H_

#include<ctime>

class Timer {
 public:
  void SetUp() {
    time_ = clock();
  }

  void GetTimeCount() {
    clock_t present = clock();
    printf("Elapsed time: %.3f second(s).\n",
            (float)(present - time_) / (float)CLOCKS_PER_SEC);
  }

 private:
  clock_t time_;
};

#endif
