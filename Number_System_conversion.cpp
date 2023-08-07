#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class NumberConverter {
public:
    string decimalToBinary(int decimal) {
        string binary = "";

        while (decimal > 0) {
            int remainder = decimal % 2;
            binary = to_string(remainder) + binary;
            decimal /= 2;
        }

        return binary;
    }

    int binaryToDecimal(string binary) {
        int decimal = 0;
        int n = binary.length();

        for (int i = 0; i < n; ++i) {
            int digit = binary[i] - '0';
            decimal += digit * pow(2, n - 1 - i);
        }

        return decimal;
    }

    string decimalToOctal(int decimal) {
        string octal = "";

        while (decimal > 0) {
            int remainder = decimal % 8;
            octal = to_string(remainder) + octal;
            decimal /= 8;
        }

        return octal;
    }

    int octalToDecimal(string octal) {
        int decimal = 0;
        int n = octal.length();

        for (int i = 0; i < n; ++i) {
            int digit = octal[i] - '0';
            decimal += digit * pow(8, n - 1 - i);
        }

        return decimal;
    }
};

int main() {
    NumberConverter converter;

    // Binary to Decimal Conversion
    string binaryInput;
    cout << "Enter a binary number: ";
    cin >> binaryInput;

    int decimalResult = converter.binaryToDecimal(binaryInput);
    cout << "Decimal representation: " << decimalResult << endl;

    // Decimal to Binary Conversion
    int decimalInput;
    cout << "Enter a decimal number: ";
    cin >> decimalInput;

    string binaryResult = converter.decimalToBinary(decimalInput);
    cout << "Binary representation: " << binaryResult << endl;

    // Decimal to Octal Conversion
    int octalInput;
    cout << "Enter an octal number: ";
    cin >> octalInput;

    string octalResult = converter.decimalToOctal(octalInput);
    cout << "Octal representation: " << octalResult << endl;

    // Octal to Decimal Conversion
    string octalInputStr;
    cout << "Enter an octal number as string: ";
    cin >> octalInputStr;

    int decimalResultFromOctal = converter.octalToDecimal(octalInputStr);
    cout << "Decimal representation: " << decimalResultFromOctal << endl;

    return 0;
}
