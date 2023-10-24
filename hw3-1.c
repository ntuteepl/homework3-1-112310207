#include <stdio.h>

main() {
  int prime(int n){

  if (n <= 1) {
  return 0;
  }

  for (int i = 2; i * i <= n; i++) {
  if (n % i == 0) {
  return 0;
  }
   }
    }

  int num;
  scanf("%d", &num);
  if (prime(num)) {
  printf("YES\n");
    }

  else {
  printf("NO\n");
    }

return 0;
  }
