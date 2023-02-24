// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i <= value/2; i++) {
    if ( (value % i) == 0 ) {
      return false;
    } else {
return true;
    }
}

uint64_t nPrime(uint64_t n) {
 uint64_t nNum = 1;
 uint64_t res = 2;
  while (nNum != n) {
    res++;
    if (checkPrime(res) == true)
      nNum++;
  }
        return res;
}

uint64_t nextPrime(uint64_t value) {
 bool cont = false;
        while (cont == false) {
                value++;
                cont = checkPrime(value);
        }
        return value;
}

uint64_t sumPrime(uint64_t hbound) {
 uint64_t res = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      res += i;
    }
  }
  return res - 1;
}
