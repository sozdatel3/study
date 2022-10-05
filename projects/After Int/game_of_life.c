#include <stdio.h>
#include <stdlib.h>

char *htmlize (int **, int, int);
void swap(int ** cells, int ** new_cells, int row, int colon, int * new_row, int* new_colon);
int chek_neigbros(int ** cells, int row, int colon);
int killer(int ** cells, int row, int colon);
int chek_border(int ** cells, int ** new_cells, int *rowptr, int * colonptr);
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

int chek_neigbros(int ** cells, int row, int colon) {
    int counter_neigbros;
    for (int i = 0; i < 3; i++) {
        for( int j = 0; j < 3; j++) {
            //if()
            if (cells[row - 1 + i][colon - 1 + j]) {
              counter_neigbros++;
            }
        }
    }
    return counter_neigbros;
}

int killer(int ** cells, int row, int colon) {
    if ((!(cells[row][colon])) && ( chek_neigbros(cells, row, colon) == 3)) return 1;
    if (((cells[row][colon])) && (( chek_neigbros(cells, row, colon) == 3) || (chek_neigbros(cells, row, colon) == 2))) return 1;
    return 0;
}

int chek_border(int ** cells, int ** new_cells, int *rowptr, int * colonptr) {  
// We always know, that new_cells bigger in row and coll by 1.
int counter_live_borded = 0;
for (int i = 0; i < *colonptr + 1; i++) {
    if (new_cells[0][i]) {
        counter_live_borded++;
        return counter_live_borded;
    }
}
for (int i = 0; i < *rowptr + 1; i++) {
    if (new_cells[i][*colonptr+1]) {
        counter_live_borded++;
        return counter_live_borded;
    }
}
return 0;
}

int main() {
    int row, colon;
    int* rowptr, *colonptr;

}