#include <stdio.h>
/* Pektub ;-; */

void create_calendar(int calendar[6][7], int day, int sday)
{
    int d = 1;
    int row = 0, col = sday - 1;

    while (d <= day)
    {
        calendar[row][col] = d;
        col++;
        if (col == 7)
        {
            col = 0;
            row++;
        }
        d++;
    }
}

int sum_luck_num(int calendar[6][7], int bday)
{
    int total = 0;
    int found_row = -1, found_col = -1;

    for (int row = 0; row < 6 && found_row == -1; row++)
    {
        for (int col = 0; col < 7; col++)
        {
            if (calendar[row][col] == bday)
            {
                found_row = row;
                found_col = col;
                break;
            }
        }
    }

    if (found_row == -1)
    {
        return (-1);
    }

    if (found_col > 0)
    {
        int left = calendar[found_row][found_col - 1];
        if (left != 0)
        {
            total += left;
        }
    }

    if (found_col < 6)
    {
        int right = calendar[found_row][found_col + 1];
        if (right != 0)
        {
            total += right;
        }
    }

    if (found_row > 0)
    {
        int above = calendar[found_row - 1][found_col];
        if (above != 0)
        {
            total += above;
        }
    }

    if (found_row < 5)
    {
        int below = calendar[found_row + 1][found_col];
        if (below != 0)
        {
            total += below;
        }
    }

    return (total);
}

int main()
{
    int day, sday, bday;
    int c[6][7];

    for (int i = 0; i < 6; i++)
    {       
        for (int j = 0; j < 7; j++)
        {   
            c[i][j] = 0;         
        }
    }
    scanf("%d", &day);
    scanf("%d", &sday);
    scanf("%d", &bday);

    create_calendar(c, day, sday);

    int lucky_number = sum_luck_num(c, bday);

    printf("%d\n", lucky_number);

    return (0);
}
