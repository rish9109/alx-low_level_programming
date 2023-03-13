#include "main.h"		
#include <stdlib.h>		
/**		
 * alloc_grid - nested loop to make grid		
 * @width: width input		
 * @height: height input		
 * Return: pointer to 2 dim. array		
 */		
int **alloc_grid(int width, int height)		
{		
	int **abc;		
	int x, y;				
	if (width <= 0 || height <= 0)		
		return (NULL);				
	abc = malloc(sizeof(int *) * height);				
	if (abc == NULL)		
		return (NULL);		
	for (x = 0; x < height; x++)	
	{	
		abc[x] = malloc(sizeof(int) * width);		
		if (abc[x] == NULL)	
		{
			for (; x >= 0; x--)
				free(abc[x]);
			free(abc);
			return (NULL);
		}
	}	
	for (x = 0; x < height; x++)	
	{	
		for (y = 0; y < width; y++)	
			abc[x][y] = 0;	
	}	
	return (abc);	
}

