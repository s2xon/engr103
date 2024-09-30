#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

double mortPrin(float home_price, float down_payment) {
  float actual = (home_price - down_payment);
  return actual;
}

double propTax(float tax_rate, float home_price) {
  float monRate = (tax_rate * home_price) / 12;
  return monRate;
}

double monInsur(float insur_rate, float home_price) {
  float mon_insur = (insur_rate * home_price) / 12;
  return mon_insur;
}

int main() {
  double homePrice;
  double downPayment;
  double lengthOfLoan;
  double monthlyIntRate;
  double propertyTaxRate;
  double insuranceRate;

  std::cout << "Please provide Home Price: ";
  std::cin >> homePrice;

  std::cout << "Please provide your Down Payment: ";
  std::cin >> downPayment;

  std::cout << "Please provide your Loan Duration: ";
  std::cin >> lengthOfLoan;

  std::cout << "Please provide your Monthly interest Rate: ";
  std::cin >> monthlyIntRate;

  std::cout << "Please provide your Property Tax Rate: ";
  std::cin >> propertyTaxRate;

  std::cout << "Please provide your Insurance Rate: ";
  std::cin >> insuranceRate;

  double p = mortPrin(homePrice, downPayment);
  double i = monthlyIntRate;
  float n = lengthOfLoan;
  float t = propTax(propertyTaxRate, homePrice);
  float r = monInsur(insuranceRate, homePrice);

  cout << p << endl;
  cout << i << endl;
  cout << n << endl;
  cout << t << endl;
  cout << r << endl;

  double monthlyMortgage = (p * i * pow((1 + i), n)) / (pow((1 + i), n) - 1);

  std::cout << "Your estimated monthly payment: " << monthlyMortgage << endl;
  return 0;
}
