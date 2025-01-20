#include <stdio.h>
#include <math.h>

double stopnie_na_radiany(double stopnie) {
    return stopnie * (180.0 / M_Pi);
}

int dzielenie_calkowite(int dzielna, int dzielnik) {
    if (dzielnik == 0) {
        printf("Błąd: Dzielenie przez zero!\n");
        return 0; // Zwraca zero podczas bledu
    }
    return dzielna / dzielnik;
}

int main() 
{ 
    printf("Hello World");
    return 0;
}

