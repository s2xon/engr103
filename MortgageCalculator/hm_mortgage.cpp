/*******************************************************************
** Program: assignment1.cpp
** Author: Saxon Payne
** Date: 10/04/2024
** Description: This program takes in inputs related to your home value,
*insurance rates, tax rates, etc. Then it computes an out put with your monthly
*payment and other outputs related to your remaining balance.
** Input: Home price (in dollars), Down payment (in dollars), Length of loan (in
*months), Monthly interest rate (in percentage), Property tax rate (in
*percentage), Insurance rate (in percentage)
** Output: Monthly mortgage payment, Total paid, Principle paid, Additional paid
*(i.e., Total paid – principle paid)
*******************************************************************/

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

double mortPrin(double home_price, double down_payment) {
  float actual = (home_price - down_payment);
  cout << "Principal Loan Amount: " << actual << endl;
  return actual;
}

double propTax(double tax_rate, double home_price) {
  float monRate = ((tax_rate / 100) * home_price) / 12;
  cout << "Monthly Property Tax: " << monRate << endl;
  return monRate;
}

double monInsur(double insur_rate, float home_price) {
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
  double n = lengthOfLoan;
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
