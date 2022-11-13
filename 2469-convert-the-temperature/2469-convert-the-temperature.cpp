class Solution {
public:
    vector<double> convertTemperature(double Celsius) {
        double kelvin, fahrenheit;
        kelvin = Celsius + 273.15;
        fahrenheit = Celsius * 1.80 + 32.00;
        return {kelvin, fahrenheit};
    }
};