#include <stdio.h>

int main() {
  float a, b;

  printf("Masukkan angka pertama: ");
  scanf("%f", &a);
  printf("Masukkan angka kedua: ");
  scanf("%f", &b);
  printf("\n");

  float tambah = a + b;
  float kurang = a - b;
  float kali = a * b;
  float bagi = a / b;
  int sisa = (int)a % (int)b;

  printf(" %.2f + %.2f = %.2f\n", a, b, tambah);
  printf(" %.2f - %.2f = %.2f\n", a, b, kurang);
  printf(" %.2f * %.2f = %.2f\n", a, b, kali);
  printf(" %.2f / %.2f = %.2f\n", a, b, bagi);
  printf(" %d %% %d = %d\n", (int)a, (int)b, sisa);

  return 0;
}
