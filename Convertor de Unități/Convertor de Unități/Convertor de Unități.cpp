#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    int choice;
    double input, result;

    cout << "Alege o opțiune:\n";
    cout << "1. Celsius la Fahrenheit\n";
    cout << "2. Fahrenheit la Celsius\n";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Introdu temperatura în grade Celsius: ";
        cin >> input;
        result = celsiusToFahrenheit(input);
        cout << "Rezultat: " << result << " grade Fahrenheit\n";
        break;
    case 2:
        cout << "Introdu temperatura în grade Fahrenheit: ";
        cin >> input;
        result = fahrenheitToCelsius(input);
        cout << "Rezultat: " << result << " grade Celsius\n";
        break;
    default:
        cout << "Opțiune invalidă!\n";
        break;
    }

    return 0;
}
