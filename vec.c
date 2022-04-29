#pragma once

#include "vec.h"

Vec_int_2d create_2d_vec(int row_count, int col_count) {
  Vec_int_2d return_vec = {
      .element_ptr = (int *)malloc((row_count * col_count) * sizeof(int)),
      .row_count = row_count,
      .col_count = col_count,
  };
  return return_vec;
}

int get_element_2d_vec(Vec_int_2d vec, int row_index, int col_index) {
  return vec.element_ptr[row_index * vec.row_count + col_index];
}

void set_element_2d_vec(Vec_int_2d vec, int row_index, int col_index,
                        int value) {
  vec.element_ptr[row_index * vec.row_count + col_index] = value;
}
