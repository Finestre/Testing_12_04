#include <stdio.h>

int main(){
    int n = 0;

    scanf("%d", &n);
    if(n < 0) {
        printf("n/a");
        return 1;
    }
    int matrix_1[n][n];
        for(int h = 0; h < n; h++) {
            for (int w = 0; w < n; w++){
                scanf("%d ", &matrix_1[h][w]);
            }
        }

    // int result_matrix[n][n];


    return 0;
}


// int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
//   int answer_code = OK;
//   if (A == NULL || A->matrix == NULL || B == NULL || B->matrix == NULL ||
//       result == NULL) {
//     answer_code = INCORRECT_MATRIX;
//   } else if (A->columns != B->rows) {
//     answer_code = CALC_ERROR;
//   } else {
//     answer_code = s21_create_matrix(A->rows, B->columns, result);
//     if (answer_code == OK) {
//       for (int i = 0; i < result->rows; i++) {
//         for (int j = 0; j < result->columns; j++) {
//           for (int k = 0; k < A->columns; ++k) {
//             result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
//           }
//         }
//       }
//     }
//   }
//   return answer_code;
// }

// gcc -Wall -Werror -Wextra -std=c11 main.c