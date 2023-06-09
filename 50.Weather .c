#include <stdio.h>

#define NUM_DAYS 14

int main() {
    int windSpeeds[NUM_DAYS];
    int highestSpeed = 0;
    int lowestSpeed = 0;
    int sum = 0;

    printf("Enter the fastest wind speed for each day:\n");

    for (int i = 0; i < NUM_DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &windSpeeds[i]);

        if (i == 0) {
            highestSpeed = lowestSpeed = windSpeeds[i];
        } else {
            if (windSpeeds[i] > highestSpeed) {
                highestSpeed = windSpeeds[i];
            }
            if (windSpeeds[i] < lowestSpeed) {
                lowestSpeed = windSpeeds[i];
            }
        }

        sum += windSpeeds[i];
    }

    double averageSpeed = (double)sum / NUM_DAYS;
    int diffFromAverage[NUM_DAYS];

    printf("\nAverage wind speed over two weeks: %.2f\n", averageSpeed);
    printf("Day with highest wind speed: ");
    for (int i = 0; i < NUM_DAYS; i++) {
        if (windSpeeds[i] == highestSpeed) {
            printf("%d ", i + 1);
        }
        diffFromAverage[i] = highestSpeed - windSpeeds[i];
    }
    printf("\nDay with lowest wind speed: ");
    for (int i = 0; i < NUM_DAYS; i++) {
        if (windSpeeds[i] == lowestSpeed) {
            printf("%d ", i + 1);
        }
    }
    printf("\n\nDifference between the highest wind speed and each day's average:\n");
    for (int i = 0; i < NUM_DAYS; i++) {
        printf("Day %d: %d\n", i + 1, diffFromAverage[i]);
    }

    return 0;
}
