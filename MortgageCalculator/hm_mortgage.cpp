#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

double mortPrin(float home_price, float down_payment) {
  float actual = (home_price - down_payment);
  cout << "Principal Loan Amount: " << actual << endl;
  return actual;
}

double propTax(float tax_rate, float home_price) {
  float monRate = ((tax_rate / 100) * home_price) / 12;
  cout << "Monthly Property Tax: " << monRate << endl;
  return monRate;
}

double monInsur(float insur_rate, float home_price) {
  float mon_insur = ((insur_rate / 100) * home_price) / 12;
  cout << "Monthly Insurance: " << mon_insur << endl;
  return mon_insur;
}

int main() {
  double homePrice;
  double downPayment;
  int lengthOfLoan;       // in months
  double monthlyIntRate;  // entered as decimal
  double propertyTaxRate; // entered as decimal
  double insuranceRate;   // entered as decimal

  std::cout << "Please provide Home Price: ";
  std::cin >> homePrice;

  std::cout << "Please provide your Down Payment: ";
  std::cin >> downPayment;

  std::cout << "Please provide your Loan Duration (in months): ";
  std::cin >> lengthOfLoan;

  std::cout << "Please provide your Monthly Interest Rate (as decimal): ";
  std::cin >> monthlyIntRate;

  std::cout << "Please provide your Property Tax Rate (as decimal): ";
  std::cin >> propertyTaxRate;

  std::cout << "Please provide your Insurance Rate (as decimal): ";
  std::cin >> insuranceRate;

  double p = mortPrin(homePrice, downPayment);
  double i = (monthlyIntRate / 100);
  int n = lengthOfLoan;
  double t = propTax(propertyTaxRate, homePrice);
  double r = monInsur(insuranceRate, homePrice);

  // Mortgage Calculation using the formula

  double top = (p * i * (pow((1 + i), n)));
  double bottom = pow((1 + i), n) - 1;
  double monthlyMortgage = (top / bottom) + t + r;

  std::cout << "Your estimated monthly payment: $" << monthlyMortgage << endl;
  cout << "Your total paid is: $" << monthlyMortgage * n << endl;
  cout << "Your addiontal payment is: $" << (monthlyMortgage * n) - p << endl;
  return 0;
}
