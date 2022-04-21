#include <stdio.h>

int main() {

  int n, i, primo = 0;
  printf("Digite um número: ");
  scanf("%d", &n);

  if (n == 0 || n == 1)
    primo = 1;

  for (i = 2; i <= n / 2; ++i) {

    if (n % i == 0) {
      primo = 1;
      break;
    }
  }


  if (primo == 0)
    printf("%d é primo.", n);
  else
    printf("%d não é primo.", n);

  return 0;
}