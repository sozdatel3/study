#include <stdio.h>
#include <stdlib.h>

char *htmlize (int **, int, int);
void swap(int ** cells, int ** new_cells, int row, int colon, int * new_row, int* new_colon);
int chek_neigbros(int ** cells, int row, int colon, int * rowptr, int * colonptr);
int killer(int ** cells, int row, int colon, int * rowptr, int * colonptr);
int chek_border(int ** new_cells, int *rowptr, int * colonptr, int * up_board_live,
int * rigth_board_live, int * botton_board_live, int * left_board_live);
void copy_small_in_big (int ** cells, int ** bigger_cells , int * rowptr, int * colonptr);
int **get_generation (int **cells, int generations, int *rowptr, int *colptr)
{
  // Your code here
  // NOTE: Please make a deep copy of the GoL universe and modify that instead
  // of the original universe `cells` passed in because the test cases will
  // `free` the memory allocated by your solution *and* to the original grid
  // which will throw an error otherwise.  Также имейте в виду, что это рассматривается
  // наилучшая практика, чтобы сохранить вашу функцию чистой.
}

void swap(int ** cells, int ** new_cells, int row, int colon, int * new_row, int* new_colon) {
    
}

int chek_neigbros(int ** cells, int row, int colon, int * rowptr, int * colonptr) {
    int counter_neigbros = 0;
    int flag = 0;
    for (int i = row - 1; (i <= row + 1) && (i <= *rowptr - 1); i++) {
        for (int j = colon - 1; j <= colon + 1; j++) {
            if (i < 0) {
                i++;
            }
            if (j < 0) {
                j++;
            }
            if ((cells[i][j]) && ((i != row) || (j != colon))) {
                counter_neigbros++;
            }
            if ((j == colon) && (j + 1 > *colonptr)) {
                j+=2;
            }
        }
    }
    return counter_neigbros;
}
int killer(int ** cells, int row, int colon,int * rowptr, int * colonptr) {
    if ((!(cells[row][colon])) && ( chek_neigbros(cells, row, colon, rowptr, colonptr) == 3)) return 1;
    if (((cells[row][colon])) && (( chek_neigbros(cells, row, colon, rowptr, colonptr) == 3) || (chek_neigbros(cells, row, colon, rowptr, colonptr) == 2))) return 1;
    return 0;
}
void copy_small_in_big (int ** cells, int ** bigger_cells , int * rowptr, int * colonptr) {
    for (int i = 1; i < *rowptr + 2; i++) {
        for (int j = 1; j < *colonptr + 2; j++) {
            bigger_cells[i][j] = cells[i][j];
        }
    }
}

int chek_border(int ** new_cells, int *rowptr, int * colonptr, int * up_board_live,
int * rigth_board_live, int * botton_board_live, int * left_board_live) {  
// We always know, that new_cells bigger in row and coll by 2.
    int row_new = *rowptr + 2;
    int colon_new = *colonptr + 2;
    int* new_row_ptr = &row_new;
    int* new_colon_ptr = &colon_new;
    for (int j = 0; j < *new_colon_ptr; j++) {
        if (killer(new_cells, 0, j, new_row_ptr, new_colon_ptr)) {
            *up_board_live = 1;
            break;
        }
    }
    for (int i = 0; i < *new_row_ptr; i++) {
        if (killer(new_cells, i, (*new_row_ptr - 1), new_row_ptr, new_colon_ptr)) {
            *rigth_board_live = 1;
            break;
        }
    }
    for (int j = 0; j < *new_colon_ptr; j++) {
        if (killer(new_cells, (*new_row_ptr - 1), j, new_row_ptr, new_colon_ptr)) {
            *botton_board_live = 1;
            break;
        }
    }
    for (int i = 0; i < *new_row_ptr; i++) {
        if (killer(new_cells, i, 0, new_row_ptr, new_colon_ptr)) {
            *left_board_live = 1;
            break;
        }
    }
}

int ** allocate_new_cells(int row, int colon) {
    int ** new_cells = (int **) calloc(row, sizeof(int*));
    if (new_cells == NULL) {
        printf("Allocate memory eror");
        exit(1);
    }
    for (int i = 0; i < row; i++) {
        new_cells[i] = (int *) calloc(colon, sizeof(int));
    if (new_cells[i] == NULL) {
        printf("Allocate memory eror");
        exit(1);
    }
    }
    return new_cells;
}
int main() {
    int row, colon;
    int* rowptr, *colonptr;
    printf("Enter number of row and colon :\n");
    scanf("%d%d", &row, &colon);
    int ** cells = allocate_new_cells(row, colon);
    rowptr = &row;
    colonptr =&colon;
    /*cells = (int **) calloc(row, sizeof(int*));
    if (cells == NULL) {
        printf("Allocate memory eror");
        exit(1);
    }
    for (int i = 0; i < row; i++) {
        cells[i] = (int *) calloc(colon, sizeof(int));
    if (cells[i] == NULL) {
        printf("Allocate memory eror");
        exit(1);
    }
    }*/
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colon; j++) {
            scanf("%d", &cells[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colon; j++) {
            if (j == colon - 1) {
                printf("%d\n", cells[i][j]);
            } else {
                printf("%d ", cells[i][j]);
            }
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colon; j++) {
            printf("\n%d", killer(cells, i, j, rowptr, colonptr));
        }
    }   
}