#include <stdio.h>
#include <pthread.h>

int mean;
int maximum;
int minimum;

void* calculateMean(void *thread_args) {
    int *nums = (int*)thread_args;
    mean = 3;
}

int main() {
    int nums [] = {90, 81, 78, 95, 79, 72, 85};
    pthread_t meanThread;

    pthread_create(&meanThread, NULL, calculateMean, nums);

    pthread_join(meanThread, NULL);

    printf("Mean: %d \n", mean);

    return 0;
}
