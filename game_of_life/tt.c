#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// int main(int ac, char **av)
// {
//     if (ac != 4)
//     {
//         write(2, "ERROR : BAD ARGUMENT\n", 21);
//         return 1;
//     }
//     int w = atoi(av[1]), h = atoi(av[2]), iter = atoi(av[3]);
//     int x = 0, y = 0, pen = 0, board[h][w], next[h][w];
//     char c;

//     for (int i = 0; i < h; i++)
//         for (int j = 0; j < w; j++)
//             board[i][j] = 0;
    
//     while (read(0, &c, 1))
//     {
//         if (c == 'w' && y > 0) y--;
//         else if (c == 's' && y < h) y++;
//         else if (c == 'a' && x > 0) x--;
//         else if (c == 'd' && x < w) x++;
//         else if (c == 'x') pen = !pen;
//         if (pen)
//             board[y][x] = 1;
//     }

//     for (int indx; indx < iter; indx++)
//     {
//         for (int i = 0; i < h; i++)
//         {
//             for (int j = 0; j < w; j++)
//             {
//                 int neb = 0;
//                 for (int s_i = -1; s_i < 1; s_i++)
//                     for (int s_j = -1; s_j < 1; s_j++)
//                         if ((s_i || s_j) && i + s_i > 0 && i + s_i < h && j + s_j > 0 && j + s_j < w)
//                             neb += board[i + s_i][j + s_j];
//                 next[i][j] = (board[i][j] && (neb == 2 || neb == 3)) || (!board[i][j] && neb == 3);    
//             }
//         }
//         for (int i = 0; i < h; i++)
//             for (int j = 0; j < w; j++)
//                 board[i][j] = next[i][j];
//     }
//     for (int i = 0; i < h; i++)
//     {
//         for (int j = 0; j < w; j++)
//                 putchar(board[i][j] ? '0' : ' ');
//         putchar('\n');
//     }
//     return 0;
// }

int main(int ac, char **av)
{
    if (ac != 4)
    {
        write(2, "ERROR\n", 6);
        return 1;
    }
    int w = atoi(av[1]), h = atoi(av[2]), iter = atoi(av[3]);
    int x = 0, y = 0, pen = 0, board[h][w], next[h][w];
    char c;

    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            board[i][j] = 0;
    
    // while (read(0, &c, 1) == 1)
    // {
    //     if (c == 'w' && y > 0) y--;
    //     else if (c == 's' && y < h - 1) y++;
    //     else if (c == 'a' && x > 0) x--;
    //     else if (c == 'd' && x < w - 1) x++;
    //     else if (c == 'x') pen = !pen;
    //     if (pen)
    //         board[y][x] = 1;
    // }


    // for (int index = 0; index < iter; index++)
    // {
    //     for(int i = 0; i < h; i++)
    //     {
    //         for (int j = 0; j < w; j++)
    //         {
    //             int neb = 0;
    //             for (int di = -1; di <= 1; di++)
    //                 for (int dj = -1; dj <= 1; dj++)
    //                     if ((di || dj) && i + di >= 0 && i + di < h && j + dj >= 0 && j + dj < w)
    //                         neb += board[i + di][j + dj];
    //             next[i][j] = (board[i][j] && (neb == 2 || neb == 3)) || (!board[i][j] && neb == 3);
    //         }
    //     }
    //     for (int i = 0; i < h; i++)
    //         for (int j = 0; j < w; j++)
    //             board[i][j] = next[i][j];
    // }

    while (read(0, &c, 1))
    {
        if (c == 'w' && y > 0) y--;
        else if (c == 's' && y < h - 1) y++;
        else if (c == 'a' && x > 0) x--;
        else if (c == 'd' && x < w - 1) x++;
        else if (c == 'x') pen = !pen;
        if (pen)
            board[y][x] = 1;
    }

    for (int index = 0; index < iter; index++)
    {
        for(int i = 0; i < h; i++)
        {
            for(int j = 0; j < w; j++)
            {
                int neb = 0;
                for(int ii = -1; ii <= 1; ii++)
                    for(int jj = -1; jj <= 1; jj++)
                        if ((ii || jj) && i + ii >= 0 && i + ii < h && j + jj >= 0 && j + jj < w)
                            neb += board[i + ii][j + jj];
                next[i][j] = (board[i][j] && (neb == 2 || neb == 3)) || (!board[i][j] && neb == 3);
            }
        }
        for (int i = 0; i < h; i++)
            for(int j = 0; j < w; j++)
                board[i][j] = next[i][j];
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            putchar(board[i][j] ? '0' : ' ');
        putchar('\n');
    }
    return 0;
}