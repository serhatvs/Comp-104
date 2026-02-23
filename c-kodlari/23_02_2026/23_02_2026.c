#include <stdio.h>

int main() {
	int a, b, c;
	printf("Üçgenin üç kenarını giriniz: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a <= 0 || b <= 0 || c <= 0) {
		printf("Uyarı: Kenar uzunlukları sıfırdan büyük olmalıdır!\n");
		return 1;
	}

	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("Bu kenarlarla bir üçgen oluşturulabilir.\n");
	} else {
		printf("Bu kenarlarla üçgen oluşturulamaz.\n");
	}

	return 0;
}
