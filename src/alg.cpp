// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.0;
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

double calcItem(double x, uint16_t n) {
  double res1 = 1.0;
  for (uint16_t i = 0; i < n; i++) {
    res1 *= x;
  }
  uint64_t res2 = 1;
  for (int i = n; i >= 1; i--) {
    res2 *= i;
  }
  return res1 / res2;
}

double expn(double x, uint16_t count) {
  double res = 1.0;
  for (uint16_t i = 1; i <= count; i++) {
    double res1 = 1.0;
    for (uint16_t j = 0; j < i; j++) {
      res1 *= x;
    }
    uint64_t res2 = 1;
    for (int k = 1; k <= i; k++) {
      res2 *= k;
    }
    res = res + res1 / res2;
  }
  return res;
}

double sinn(double x, uint16_t count) {
  double res = x;
  int16_t znak = -1;
  for (uint16_t i = 3; i <= count; i += 2) {
    double res1 = 1.0;
    for (uint16_t j = 0; j < i; j++) {
      res1 *= x;
    }
    uint64_t res2 = 1;
    for (int k = 1; k <= i; k++) {
      res2 *= k;
    }
    res += znak * (res1 / res2);
    znak *= -1;
  }
  return res;
}

double cosn(double x, uint16_t count) {
  double res = 1;
  int16_t znak = -1;
  for (uint16_t i = 2; i <= count; i += 2) {
    double res1 = 1.0;
    for (uint16_t j = 0; j < i; j++) {
      res1 *= x;
    }
    uint64_t res2 = 1;
    for (int k = 1; k <= i; k++) {
      res2 *= k;
    }
    res += znak * (res1 / res2);
    znak *= -1;
  }
  return res;
}
