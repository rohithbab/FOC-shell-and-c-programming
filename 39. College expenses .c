#include <stdio.h>

int main() {
    float loanAmount = 3000;
    float monthlyPayment = 85;
    float interestRate = 0.01;
    float balance = loanAmount;
    int numMonths = 0;

    printf("Loan Information:\n");
    printf("Loan Amount: $%.2f\n", loanAmount);
    printf("Monthly Payment: $%.2f\n", monthlyPayment);
    printf("Interest Rate: %.2f%%\n\n", interestRate * 100);

    printf("Payment Schedule:\n");
    printf("Month\tPrincipal\tInterest\tBalance\n");

    while (balance > 0) {
        float interest = balance * interestRate;
        float principal = monthlyPayment - interest;
        balance -= principal;

        // Print payment details for the month
        printf("%d\t$%.2f\t$%.2f\t$%.2f\n", numMonths + 1, principal, interest, balance);

        numMonths++;
    }

    int numYears = numMonths / 12;
    int remainingMonths = numMonths % 12;
    float totalInterest = loanAmount - balance;

    printf("\nLoan Repayment Summary:\n");
    printf("Number of Years: %d\n", numYears);
    printf("Number of Months: %d\n", remainingMonths);
    printf("Total Interest Paid: $%.2f\n", totalInterest);

    return 0;
}
