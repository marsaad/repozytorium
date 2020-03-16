#include <iostream>

int main() {
    int pierwsza_liczba;
    int druga_liczba;
    int trzecia_liczba;
    std::cout << "Podaj pierwszą liczbę" << std::endl;
    std::cin >> pierwsza_liczba;
    std::cout << "Podaj drugą liczbę" << std::endl;
    std::cin >> druga_liczba;
    std::cout << "Podaj trzecia liczbę" << std::endl;
    std::cin >> trzecia_liczba;
    int wynik = pierwsza_liczba + druga_liczba + trzecia_liczba;
    std::cout << wynik << std::endl;
    return 0;
}
