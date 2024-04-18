/******************************************************************************
 * Copyright (C) 2024 by Jyun-Fan Tsai
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation of array stats
 *
 * @author Jyun-Fan Tsai
 * @date 2024.4.17
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);

  print_statistics(test, SIZE);
  
  return 0;
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *data, const int length) {
  printf("Statistics:\n");
  printf("Mean: %d\n", find_mean(data, length));
  printf("Median: %d\n", find_median(data, length));
  printf("Maximum: %d\n", find_maximum(data, length));
  printf("Minimum: %d\n", find_minimum(data, length));
}

void print_array(unsigned char *data, const int length) {
  printf("Array: ");
  for (int i=0; i<length; i++)
    printf("%d ", data[i]);
  printf("\n");
}

unsigned char find_mean(unsigned char *data, unsigned int length) {
  int sum = data[0];
  for (int i=0; i<length; i++)
    sum += data[i];
  return sum / length;
}

unsigned char find_maximum(unsigned char *data, unsigned int length) {
  int max = data[0];
  for (int i=1; i<length; i++)
    if (data[i] > max)
      max = data[i];
  return max;

}

unsigned char find_minimum(unsigned char *data, unsigned int length) {
  int min = data[0];
  for (int i=1; i<length; i++)
    if (data[i] < min)
      min = data[i];
  return min;
}

unsigned char find_median(unsigned char *data, unsigned int length) {
  sort_array(data, length);
  if (length % 2 == 0)
    return (data[length/2] + data[length/2-1]) / 2;
  else
    return data[length/2];
}

int compare(const void *a, const void *b) {
  return *(unsigned char *)b - *(unsigned char *)a;
}

void sort_array(unsigned char *data, unsigned int length) {
  qsort(data, length, sizeof(unsigned char), compare);
}