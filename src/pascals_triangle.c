#include <stdlib.h>

int ** generate(int numRows, int * returnSize, int ** returnColumnSizes) {
  *returnSize = numRows;

  int **triangle = NULL;
  triangle = (int **) malloc (sizeof(int *) * numRows);
  for (int i = 0; i < numRows; i ++) {
    triangle[i] = (int *) malloc (sizeof(int) * (i + 1));
    triangle[i][0] = 1;
    triangle[i][i] = 1;
  }

  *returnColumnSizes = (int *) malloc (sizeof(int) * numRows);
  for (int i = 0; i < numRows; i ++)
    (*returnColumnSizes)[i] = i + 1;

  for (int i = 2; i < numRows; i ++) {
    for (int j = 1; j < i; j ++) {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
  }

  return triangle;
}
