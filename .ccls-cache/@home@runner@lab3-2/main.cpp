#include <iostream>
using namespace std;

int main() 
{
  double fahr_temp, cels_temp;
  const double CELSIUS_CONVERSION = (5/9);
  
  //input fahrenheit temp
  cout << "Enter temperature in fahrenheit" << endl;
  cin >> fahr_temp;
  
  //convert from fahrenheit to Celsius
  cels_temp = (CELSIUS_CONVERSION) * (fahr_temp - 32);
  
  //output both the fahrenheit and Celsius temperatures neatly formatted
  cout << "Fahrenheit = " << fahr_temp << "\nCelsius = " << cels_temp << endl;
  
  return 0;
}