#include <cstdio>

int main() {
    char startCol = 0;
    char endCol = 0;
    int startRow = 0;
    int endRow = 0;

    scanf_s("%c%d %c%d", &startCol, &startRow, &endCol, &endRow);

    int dc = endCol - startCol; 
    int dr = endRow - startRow;

    int king = 0;
    int queen = 0;
    int rook = 0;
    int bishop = 0;
    int knight = 0;
    int pawn = 0;

    if ((dc >= -1 && dc <= 1) && (dr >= -1 && dr <= 1) && !(dc == 0 && dr == 0))
    {
        king = 1;
    }

    if ((dc == 0 && dr != 0) || (dr == 0 && dc != 0) || (dc == dr) || (dc == -dr)) 
    {
        queen = 1;
    }

    if ((dc == 0 && dr != 0) || (dr == 0 && dc != 0)) 
    {
        rook = 1;
    }

    if ((dc == dr) || (dc == -dr)) 
    {
       bishop = 1;
    }

    if (((dc == 2 || dc == -2) && (dr == 1 || dr == -1)) || ((dc == 1 || dc == -1) && (dr == 2 || dr == -2))) 
    {
        knight = 1;
    }

    if (dc == 0) 
    {
        if (startRow == 2 && (dr == 1 || dr == 2)) {
            pawn = 1;
        }
        else if (startRow != 2 && dr == 1) {
            pawn = 1;
        }
    }

    int n = 1;
    if (king) { printf("King\n"); n = 0; }
    if (queen) { printf("Queen\n"); n = 0; }
    if (rook) { printf("Rook\n"); n = 0; }
    if (bishop) { printf("Bishop\n"); n = 0; }
    if (knight) { printf("Knight\n"); n = 0; }
    if (pawn) { printf("Pawn\n"); n = 0; }

    if (n) {
        printf("Nobody\n");
    }

    return 0;
}
