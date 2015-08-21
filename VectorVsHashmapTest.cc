#include<cstdio>
#include<cstdlib>
#include<vector>
#include<unordered_map>

#include "utils/Timer.h"
using namespace std;

const int LENGTH = 1000000;
const int TIMES = 100000;

int main() {
   vector<int> arr(LENGTH);
   unordered_map<int, int> hashmap;
   for (int i = 0; i < LENGTH; ++ i) {
       arr[i] = rand();
       hashmap[i] = rand();
   }
   Timer timer;
   timer.SetUp();
   for (int i = 0; i < 100000; ++ i) {
       int key = rand() % LENGTH;
       ++ arr[key];
   }
   timer.GetTimeCount();
   timer.SetUp();
   for (int i = 0; i < 100000; ++ i) {
       int key = rand() % LENGTH;
       ++ hashmap[key];
   }
   timer.GetTimeCount();
   return 0;
}

