#include <stdio.h>
#include <stdlib.h>
/**
 *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *
 *    *    *    *    *   *@argc : numbers of arguments
 *     *     *     *     *   *@argv : variables of arguments
 *      *      *      *      *    *    *    * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
	int x, y = 0, z = atoi(argv[1]);
	int chng[] = {25, 10, 5, 2, 1};

	for (x = 0; x < 5; x++)
	{
		if (z >= chng[x])
		{
			y += z / chng[x];
			z = z % chng[x];
			if (z % chng[x] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", y);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
