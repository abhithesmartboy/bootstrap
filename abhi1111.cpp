#include <stdio.h>

int main() {
    int choice;
    int value;
    float km, m, cm;

    printf("Unit Converter: KM <-> M <-> CM\n");
    printf("1. Kilometer to Meter & Centimeter\n");
    printf("2. Meter to Kilometer & Centimeter\n");
    printf("3. Centimeter to Kilometer & Meter\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter distance in Kilometers: ");
            scanf("%d", &value);
            km = value;
            m = km * 1000;
            cm = km * 100000;
            printf("\nConversions:\n");
            printf("Kilometers : %.2f km\n", km);
            printf("Meters     : %.2f m\n", m);
            printf("Centimeters: %.2f cm\n", cm);
            break;

        case 2:
            printf("Enter distance in Meters: ");
            scanf("%d", &value);
            m = value;
            km = m / 1000.0;
            cm = m * 100.0;
            printf("\nConversions:\n");
            printf("Meters     : %.2f m\n", m);
            printf("Kilometers : %.2f km\n", km);
            printf("Centimeters: %.2f cm\n", cm);
            break;

        case 3:
            printf("Enter distance in Centimeters: ");
            scanf("%d", &value);
            cm = value;
            m = cm / 100.0;
            km = cm / 100000.0;
            printf("\nConversions:\n");
            printf("Centimeters: %.2f cm\n", cm);
            printf("Meters     : %.2f m\n", m);
            printf("Kilometers : %.2f km\n", km);
            break;

        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

    return 0;
}

