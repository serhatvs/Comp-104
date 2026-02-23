#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, temp, sum = 0, largest = 0, digit;
	printf("Enter an integer: ");
	scanf("%d", &n);

	temp = abs(n); // Negatif sayılar için mutlak değer

	if (temp == 0) {
		sum = 0;
		largest = 0;
	} else {
		while (temp > 0) {
			digit = temp % 10;
			sum += digit;
			if (digit > largest)
				largest = digit;
			temp /= 10;
		}
	}

	printf("Sum of digits : %d\n", sum);
	printf("Largest digit : %d\n", largest);
	return 0;
}
