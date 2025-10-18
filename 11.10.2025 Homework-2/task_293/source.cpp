#include <cstdio>

int main() {
    char x1 = 0;
    char x2 = 0;
    int y1 = 0;
    int y2 = 0;
    int c = 0;

    scanf(" %c%d %c%d", &x1, &y1, &x2, &y2);

    int dx = x2 - x1;
    if (dx < 0) dx = -dx;
    int dy = y2 - y1;
    if (dy < 0) dy = -dy;

    if ((x1 == x2 && y2 == y1 + 1) || (x1 == x2 && y1 == 2 && y2 == 4)) {
        printf("Pawn ");
        c = 1;
    }

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1)) {
        printf("Knight ");
        c = 1;
    }

    if ((dx <= 1) && (dy <= 1)) {
        printf("King ");
        c = 1;
    }
    
    if ((x1 == x2 && y1 != y2) || (y1 == y2 && x1 != x2)) {
        printf("Rook ");
        c = 1;
    }

    if (dx == dy) {
        printf("Bishop ");
        c = 1;
    }

    if ((x1 == x2 && y1 != y2) || (y1 == y2 && x1 != x2) || (dx == dy)) {
        printf("Queen ");
        c = 1;
    }

    if (c == 0) {
        printf("Nobody");
    }

    printf("\n");
    return 0;
}
