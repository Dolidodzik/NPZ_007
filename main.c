#include <stdio.h>

double mnozenie(double a, double b) {
    return a * b;
}

double dzielenie(double a, double b) {
    if (b == 0) {
        printf("Blad: dzielenie przez zero!\n");
        return 0;
    }
    return a / b;
}


int main() 
{
	printf("hello world");
	return 0; 
}

