#include <stdio.h>

int main() {
  int counter = 500;
  const int n = 50;
  for (int i = 1; i <= (n + 10); i++) {
    counter += 11;
    for (int j = i + 1; j <= (2*n+30); j++) {
      counter += 22;
      for (int k = j + 1; k <= n; k++) {
        counter += 33;
      }
    }
  }
  printf("counter: %d\n", counter);

  int myAnswer = 500 + (50+10)*11 + ((130*129/2) - (70*69/2))*22
               + ((130*129/2) - (70*69/2)) * (((130*129/2) - (70*69/2))-1)/2 *33;
  printf("myAnswer: %d\n", myAnswer);
  return 0;
}
