#include <iostream>
using namespace std;

// Function to calculate commission for a single salesman
double calculateCommission(double sales) {
    double commission = 0;
    if (sales <= 500000) {
        commission = sales * 0.10;  // 10% for sales up to 500,000
    } else {
        commission = 500000 * 0.10 + (sales - 500000) * 0.15;  // 10% for the first 500,000, 15% for the rest
    }
    return commission;
}

int main() {
    int numSalesmen = 10;
    double totalSales[numSalesmen];
    double totalCommission = 0;

    // Input sales for each salesman
    for (int i = 0; i < numSalesmen; i++) {
        cout << "Enter sales for salesman " << i + 1 << ": ";
        cin >> totalSales[i];
    }

    // Calculate total commission
    for (int i = 0; i < numSalesmen; i++) {
        totalCommission += calculateCommission(totalSales[i]);
    }

    // Output the total commission paid by PT. MURAH HATI
    cout << "Total commission paid by PT. MURAH HATI: " << totalCommission << endl;

    return 0;
}
