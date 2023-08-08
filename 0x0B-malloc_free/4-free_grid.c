#include "main.h"
/**
 *  *  *  *  *  *  *free_grid - 2 dimn array
 *   *   *   *   *   *   *
 *    *    *    *    *    *    *@grid : 2 dimn array
 *     *     *     *     *     *     *@height : height
 *      *      *       *      *      *      *
 *       *       *        *       *      Return: 0 success . null fail
 */
void free_grid(int **grid, int height)
{
int i;

for (; i < height; i++)
	free(grid[i]);
free(grid);
}
