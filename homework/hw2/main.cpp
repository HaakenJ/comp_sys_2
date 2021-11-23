#include <iostream>
#include <pthread.h>


using namespace std;

int mean = 0;
int maximum = 0;
int minimum = 0;

void* getMean(int *nums) {
    mean = 3;
}

void getMax(int *nums) {
    maximum = 1;
}

void getMin(int *nums) {
    minimum = 0;
}

int main() {
    int nums [] = {90, 81, 78, 95, 79, 72, 85};
    pthread_t* meanThread;
    pthread_t* maxThread;
    pthread_t* minThread;

    pthread_create(&meanThread, NULL, getMean, (void *)nums);
    pthread_create(maxThread, NULL, getMax, nums);
    pthread_create(minThread, null, getMin, nums);

    pthread_join(meanThread, null);
    pthread_join(maxThread, null);
    pthread_join(minThread, null);

    cout << ("Mean:    " + mean);
    cout << ("Maximum: " + maximum);
    cout << ("Minumum: " + minimum);

    return 0;
}
