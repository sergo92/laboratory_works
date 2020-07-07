#include <stdio.h>
#include "square.h"

int main(void)
{
	struct point a_point[4];
	
	a_point[0].x = 0;
	a_point[0].y = 0;
	
	a_point[1].x = 0;
	a_point[1].y = 1;
	
	a_point[2].x = 1;
	a_point[2].y = 1;
	
	a_point[3].x = 1;
	a_point[3].y = 0;
	
	struct square a_square;
	
	a_square.vertex1.x = 0;
	a_square.vertex1.y = 0;
	
	a_square.vertex2.x = 0;
	a_square.vertex2.y = 2;
	
	a_square.vertex3.x = 2;
	a_square.vertex3.y = 2;
	
	a_square.vertex4.x = 2;
	a_square.vertex4.y = 0;
	
	const int number_of_figure = 10;
	
	struct square *aa_square[number_of_figure];
	
	for(int i = 0; i<number_of_figure-3; i+=1)
	{
		aa_square[i] = creare_square_array(a_point);
	}
	
	aa_square[number_of_figure-3] = creare_square_array(a_point);
	aa_square[number_of_figure-2] = create_square_points(&a_square.vertex1, &a_square.vertex2, &a_square.vertex3, &a_square.vertex4);
	aa_square[number_of_figure-1] = create_square_coordinates (0, 0, 0, 3, 3, 3, 3, 0);
	
	
	for(int i = 0; i<number_of_figure; i++)
	{
		if(aa_square[i] == NULL)
			printf("Figure #%i is not square\n", i+1);
		
		else	
			print_square (aa_square[i]);
	}
	
	for(int i = 0; i<number_of_figure; i++)
	{
		if(NULL != aa_square[i])
		{
			int square = square_of_figure (aa_square[i]);
			printf("Square of figure #%i: %i\n", i+1, square);
		}	
	}
	 
	for(int i = 0; i<number_of_figure; i++)
	{
		if(NULL != aa_square[i])
			delete_square (aa_square[i]);
	}
}
