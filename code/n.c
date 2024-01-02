#include <stdio.h>
#include <math.h>

int n(int n) {
  int wynik = 0;

  for (int x = 0; x < n; x++) {
    wynik++;
  }

  return wynik;
}

int logn(int n) {
  int wynik = 0;

  for (int x = 0; x < log10(n); x++) {
    wynik++;
  }

  return wynik;
}

int nlogn(int n) {
  int wynik = 0;

  for (int x = 0; x < n; x++) {
    for (int y = 0; y < log10(n); y++) {
      wynik++;
    }
  }

  return wynik;
}

int n2(int n) {
  int wynik = 0;

  for (int x = 0; x < pow(n, 2); x++) {
    wynik++;
  }

  return wynik;
}

int powN2(int n) {
  int wynik = 0;

  for (int x = 0; x < pow(2, n); x++) {
    wynik++;
  }

  return  wynik;
}

int facN(int n) {
  int wynik = 0;

  for (int x = 0; x < n; x++) {
    wynik++;
  }

  return wynik;
}

int c(int n) {
  return n + 2;
}

int s(int n) {
  int wynik = 0;

  for (int i = 0; i < n; i++) {
    wynik++;
  }

  for (int v = 0; v < pow(n, 2); v++) {
    wynik++;
  }

  return wynik;
}

int main() {
  printf("%d\n", s(1));
  printf("%d\n", s(2));
  printf("%d\n", s(3));
  printf("%d\n", s(4));
}


