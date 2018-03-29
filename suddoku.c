#include <stdio.h>

int sudoku[9][9];

void solvesudoku(int, int);

int checkrow(int row, int num)
{
    int column;
    for (column = 0; column < 9; column++)
        if (sudoku[row][column] == num)
            return 0;
    return 1;
}

int checkcolumn(int column, int num)
{
    int row;
    for (row = 0; row < 9; row++)
        if (sudoku[row][column] == num)
            return 0;
    return 1;
}

int checkgrid(int row, int column, int num)
{
    row = (row / 3) * 3;
    column = (column / 3) * 3;

    int r, c;
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            if (sudoku[row + r][column + c] == num)
                return 0;
    return 1;
}

void navigate(int row, int column)
{
    if (column < 8)
        solvesudoku(row, column + 1);
    else
        solvesudoku(row + 1, 0);
}

void display()
{
    int row, column;
    printf("\n\t\tTHE SOLVED SUDOKU\n\n");
    for (row = 0; row < 9; row++)
    {
        for (column = 0; column < 9; column++)
            printf(" %d ", sudoku[row][column]);
        printf("\n");
    }
}

void solvesudoku(int row, int column)
{
    if (row > 8)
        display();
    if (sudoku[row][column] != 0)
        navigate(row, column);
    else
    {
        int ctr;
        for (ctr = 1; ctr <= 9; ctr++)
        {
            if ((checkrow(row, ctr) == 1) && (checkcolumn(column, ctr) == 1) && (checkgrid(row, column, ctr) == 1))
            {
                sudoku[row][column] = ctr;
                navigate(row, column);
            }
        }
        sudoku[row][column] = 0;
    }
}

int main()
{
    int r, c;
    printf("Enter the sudoku with 0 for unknown entries:\n");
    for (r = 0; r < 9; r++)
        for (c = 0; c < 9; c++)
            scanf("%d", &sudoku[r][c]);
    solvesudoku(0, 0);
    return 0;
}