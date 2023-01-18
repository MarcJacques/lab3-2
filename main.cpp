#include <iostream>
using namespace std;

int main() 
{
  double fahr_temp, cels_temp;
  const double CELSIUS_CONVERSION = 5.0/9.0;
  // cout << CELSIUS_CONVERSION;
  //input fahrenheit temp
  cout << "Degrees in Fahrenheit:" << endl;
  cin >> fahr_temp;
  
  //convert from fahrenheit to Celsius
  cels_temp = (CELSIUS_CONVERSION) * (fahr_temp - 32.0);
  
  //output both the fahrenheit and Celsius temperatures neatly formatted
  cout << "Degrees in Fahrenheit = " << fahr_temp << "\nDegrees in Celsius = " << cels_temp << endl;
  
  return 0;
}