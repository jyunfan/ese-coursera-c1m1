/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief function definition
 *
 * @author Jyun-Fan Tsai
 * @date 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief A function that prints the statistics of an array including minimum,
 * maximum, mean, and median.
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return no return value
 */
void print_statistics(const int *data, const int length);

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * <Add Extended Description Here>
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return no return value
 */
void print_array(unsigned char *data, const int length);

/**
 * @brief Given an array of data and a length, returns the median value.
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return median value
 */
void find_median(unsigned int *data, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the mean.
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return mean value
 */
void find_mean(unsigned int *data, unsigned int length);

/**
 * @brief Given an array of data and alength, returns the maximum.
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return maximum value
 */
void find_maximum(unsigned int *data, unsigned int length);

/**
 * @brief Given an array of data and a length, returns the minimum.
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return minimum value
 */
void find_minimum(unsigned int *data, unsigned int length);

/**
 * @brief Given an array of data and a length, sorts the array from largest to
 * smallest.  (The zeroth Element should be the largest value, and the last
 * element (n-1) should be the smallest value.
 *
 * @param data unsigned char array
 * @param length length of array data
 *
 * @return no value
 */
void sort_array(unsigned char *data, unsigned int length);


#endif /* __STATS_H__ */
