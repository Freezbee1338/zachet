#include <iostream>
#include <string>
using namespace std;

class CurrencyConverter {
public:
    double usdToEur(double usd) {
        return usd * 0.92; // Курс доллара к евро
    }

    double eurToUsd(double eur) {
        return eur * 1.08; // Курс евро к доллару
    }
};

int main() {
    CurrencyConverter converter;

    setlocale(LC_ALL, "ru");

    double amount;
    string currency;

    cout << "Введите сумму: ";
    cin >> amount;

    cout << "Введите валюту (USD,EUR): ";
    cin >> currency;

    if (currency == "USD") {
        cout << amount << " Доллар равен " << converter.usdToEur(amount) << " EUR" << endl;
    }
    else if (currency == "EUR") {
        cout << amount << " ЕВРО равен " << converter.eurToUsd(amount) << " USD" << endl;
    }
    else {
        cout << "Неверный ввод валюты" << endl;
    }

    return 0;
}