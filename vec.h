#pragma once

#include <stdlib.h>

typedef struct vec_int_2d {
  int *element_ptr;
  int row_count;
  int col_count;
} Vec_int_2d;

Vec_int_2d create_2d_vec(int row_count, int col_count);
int get_element_2d_vec(Vec_int_2d vec, int row_index, int col_index);
void set_element_2d_vec(Vec_int_2d vec, int row_index, int col_index,
                        int value);
