#include <stdio.h>

void koboImaginaryChess(int i, int j, int size, int *chessboard) {
  chessboard[i * size + j] = 1;

  int dx[] = {2, 1, -1, -2, 2, 1, -1, -2};
  int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

  for (int k = 0; k < 8; k++) {
    int new_i = i + dx[k];
    int new_j = j + dy[k];

    if (0 <= new_i && new_i < size && 0 <= new_j && new_j < size) {
      chessboard[new_i * size + new_j] = 1;
    }
  }
}

int main() {
  int size = 8;
  int chessboard[size * size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      chessboard[i * size + j] = 0;
    }
  }

  int i, j;
  scanf("%d %d", &i, &j);

  koboImaginaryChess(i, j, size, chessboard);

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d", chessboard[i * size + j]);
    }
    printf("\n");
  }

  return 0;
}