#include <stdio.h>

int main() {
    int numFillups = 6;
    int startingOdometer, currentOdometer;
    float totalGallons = 0, totalMiles = 0, averageMPG;

    // Input starting odometer reading
    printf("Enter the starting odometer reading: ");
    scanf("%d", &startingOdometer);

    // Calculate average miles per gallon for each fillup
    for (int i = 1; i <= numFillups; i++) {
        int gallons;
        
        // Input current odometer reading and gallons at fillup
        printf("Enter the odometer reading at fillup %d: ", i);
        scanf("%d", &currentOdometer);
        
        printf("Enter the number of gallons at fillup %d: ", i);
        scanf("%d", &gallons);
        
        // Calculate miles driven and add to the total
        int milesDriven = currentOdometer - startingOdometer;
        totalMiles += milesDriven;
        
        // Add gallons to the total
        totalGallons += gallons;
        
        // Update starting odometer for the next fillup
        startingOdometer = currentOdometer;
    }

    // Calculate average miles per gallon
    averageMPG = totalMiles / totalGallons;

    // Output the average miles per gallon
    printf("Average miles per gallon: %.2f\n", averageMPG);

    return 0;
}
