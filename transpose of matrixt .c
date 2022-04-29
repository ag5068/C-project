// Program to Find the Transpose of a Matrix
#include "vec.c"
#include <stdio.h>
int main() {
  Vec_int_2d a, transpose;
  int r, c, user_input_iterator;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);
  a = create_2d_vec(r, c);
  transpose = create_2d_vec(c, r);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &user_input_iterator);
      set_element_2d_vec(a, i, j, user_input_iterator);
    }

  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      printf("%d  ", get_element_2d_vec(a, i, j));
      if (j == c - 1)
        printf("\n");
    }

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j) {
      set_element_2d_vec(transpose, j, i, (get_element_2d_vec(a, i, j)));
    }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j) {
      printf("%d  ", get_element_2d_vec(transpose, i, j));
      if (j == r - 1)
        printf("\n");
    }
  return 0;
}
