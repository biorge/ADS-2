// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


long double pown(long double value, uint16_t n) {
  long double res = 1.0;
  for (uint16_t i = 0; i < n; i++) {
    res *= value;
  }
  return res;
}

uint64_t fact(uint16_t n) {
  uint64_t res = 1;
  for (int i = n; i >= 1; i--) {
    res *= i;
  }
  return res;
}

long double calcItem(long double x, uint16_t n) {
  long double res1 = 1.0;
  for (uint16_t i = 0; i < n; i++) {
    res1 *= x;
  }
  long double res2 = 1;
  for (int i = n; i >= 1; i--) {
    res2 *= i;
  }
  return res1 / res2;
}

long double expn(long double x, uint16_t count) {
  long double res = 1.0;
  for (uint16_t i = 1; i <= count; i++) {
    long double res1 = 1.0;
    for (uint16_t j = 0; j < i; j++) {
      res1 *= x;
    }
    long double res2 = 1;
    for (int k = 1; k <= i; k++) {
      res2 *= k;
    }
    res = res + res1 / res2;
  }
  return res;
}

long double sinn(long double x, uint16_t count) {
  long double res = x;
  long double znak = -1;
  for (uint16_t i = 3; i <= count; i += 2) {
    res += znak * (pown(x, i) / fact(i));
    znak *= -1;
  }
  return res;
}

long double cosn(long double x, uint16_t count) {
  long double res = 1;
  long double znak = -1;
  for (uint16_t i = 2; i <= count; i += 2) {
    res += znak * (pown(x, i) / fact(i));
    znak *= -1;
  }
  return res;
}
