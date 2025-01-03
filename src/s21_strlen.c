#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
  const char *sptr = str;
  while (*sptr != '\0') {
    sptr++;
  }
  return sptr - str;
}