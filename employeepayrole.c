#include <stdio.h>

int main() {
    char employeeName[50];
    float hourlyWage;
    int hoursWorked;
    float totalPay;

    printf("Enter employee name: \n");
    fgets(employeeName, sizeof(employeeName), stdin);

    printf("Enter hourly wage: \n");
    scanf("%f", &hourlyWage);

    printf("Enter hours worked: \n");
    scanf("%d", &hoursWorked);

    totalPay = hourlyWage * hoursWorked;

    printf("Employee: %s", employeeName);
    printf("Total Pay: $%.2f\n", totalPay);

    return 0;
}