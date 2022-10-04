#include <stdio.h>
#define N 3

int main() {
  int counter = 500;
  int cnt=0;
  const int n = N;
  for (int i = 1; i <= (n + 10); i++) {
    counter += 11;
    for (int j = i + 1; j <= (2*n+30); j++) {
      counter += 22;
      for (int k = j + 1; k <= n; k++) {
        counter += 33;
        cnt++;
      }
    }
  }
  printf("counter: %d\n", counter);

  int iValue = (N+10)*11;
  int jValue = ((((2*N)+30)*(((2*N)+30)-1)/2) - ((N+20)*(N+20-1)/2))*22;
  int kValue = (N)*(N-1)*(N-2)/3/2*33;
  int myAnswer = 500 + iValue + jValue + kValue;
  printf("myAnswer: %d\n", myAnswer);

  return 0;
}
