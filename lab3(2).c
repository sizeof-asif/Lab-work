#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    int units;
    float amount, surcharge = 0, totalAmount;

    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate amount without surcharge
    if (units <= 199)
        amount = units * 1.20;
    else if (units>=200 && units<=400)
        amount = units * 1.50;
        else if (units>=400 && units<=600)
        amount = units * 1.80;
    else
        amount = units * 2.00;

    // Check for surcharge
    if (amount > 400)
        surcharge = amount * 0.15;

    // Calculate total amount
    totalAmount = amount + surcharge;

    // Minimum bill should be Rs. 100
    if (totalAmount < 100)
        totalAmount = 100;

    // Display the bill
    printf("\nCustomer IDNO: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Unit Consumed: %d\n", units);
    printf("Amount Charges @Rs. 2.00 per unit: %.2f\n", amount);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Net Amount Paid By the Customer: %.2f\n", totalAmount);

    return 0;
}
