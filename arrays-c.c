#include <stdio.h>
#define N 3
#define M 4

int puntoSilla(int mat[N][M], int posFila, int posColumna);
void escribeMat(int mat[N][M]);

int main()
{
    int mat[N][M] = {
        3, 4, 5, 3,
        2, 3, 2, 2,
        1, 2, 0, 1  };
    int posFila=2, posColumna=1;

    printf("\n");

    escribeMat(mat);

    // comparo todas las posiciones del array para ver si son punto de silla
    for (posFila = 0; posFila < N; posFila++)
        for (posColumna = 0; posColumna < M; posColumna++)
            if(puntoSilla(mat, posFila, posColumna)==1)
                printf("Tiene punto de silla en la posicion %d-%d\n", posFila, posColumna);
            else
                printf("No hay punto de silla en la posicion %d-%d\n", posFila, posColumna);

    return 0;
}


int puntoSilla(int mat[N][M], int posFila, int posColumna)
{
    int i, j, noenc=1;

    for(i=0; i<N && noenc; i++)
    {
        for(j=0; j<M && noenc; j++)
        {
            if(mat[posFila][posColumna]>mat[posFila][j] || mat[posFila][posColumna]<mat[i][posColumna]) {
                noenc=0;
            }
        }
    }

    return noenc;
}

void escribeMat(int mat[N][M])
{
    int i, j;

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}
