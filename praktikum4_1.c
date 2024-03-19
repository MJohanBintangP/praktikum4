#include <stdio.h>

void selectionSort(int arr[], int n, int *numSwaps) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
            (*numSwaps)++;
            printf("Pertukaran %d: ", *numSwaps);
            for (int k = 0; k < n; k++) {
                if (arr[k] >= 2 && arr[k] <= 10) {
                    printf("%d ", arr[k]);
                } else {
                    switch (arr[k]) {
                        case 11:
                            printf("J ");
                            break;
                        case 12:
                            printf("Q ");
                            break;
                        case 13:
                            printf("K ");
                            break;
                    }
                }
            }
            printf("\n");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int kartu[n];
    for (int i = 0; i < n; i++) {
        char c1, c2;
        scanf(" %c", &c1);
        if (c1 == '1') {
            scanf("%c", &c2);
            kartu[i] = 10;
        } else if (c1 >= '2' && c1 <= '9') {
            kartu[i] = c1 - '0';
        } else {
            switch (c1) {
                case 'J':
                    kartu[i] = 11;
                    break;
                case 'Q':
                    kartu[i] = 12;
                    break;
                case 'K':
                    kartu[i] = 13;
                    break;
            }
        }
    }

    printf("\n");

    int numSwaps = 0;
    selectionSort(kartu, n, &numSwaps);

    printf("%d\n", numSwaps);
    for (int i = 0; i < n; i++) {
        if (kartu[i] >= 2 && kartu[i] <= 10) {
        }
    }
    printf("\n");

    return 0;
}