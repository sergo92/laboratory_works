#include <stdio.h>
#include <stdlib.h>
#include "square.h"

struct square *creare_square_array(struct point *arr_square)
{
	struct square *a_square = (struct square *)malloc(sizeof(struct square));
	
	if(NULL == a_square)
		return NULL;
	
	a_square->vertex1.x = arr_square[0].x;
	a_square->vertex1.y = arr_square[0].y;
	
	a_square->vertex2.x = arr_square[1].x;
	a_square->vertex2.y = arr_square[1].y;
	
	a_square->vertex3.x = arr_square[2].x;
	a_square->vertex3.y = arr_square[2].y;
	
	a_square->vertex4.x = arr_square[3].x;
	a_square->vertex4.y = arr_square[3].y;
	
	
	if((a_square->vertex4.x - a_square->vertex1.x == a_square->vertex2.y - a_square->vertex1.y) &&
	   (a_square->vertex2.y - a_square->vertex1.y == a_square->vertex3.x - a_square->vertex2.x) &&
	   (a_square->vertex3.x - a_square->vertex2.x == a_square->vertex3.y - a_square->vertex4.y))
		return a_square;	
	else
	{
		free(a_square);
		return NULL; 
	 }	
}


struct square *create_square_points(struct point *point1, struct point *point2, struct point *point3, struct point *point4)
{
	struct square *a_square = (struct square *)malloc(sizeof(struct square));
	
	if(NULL == a_square)
		return NULL;
	
	a_square->vertex1.x = point1->x;
	a_square->vertex1.y = point1->y;
	
	a_square->vertex2.x = point2->x;
	a_square->vertex2.y = point2->y;
	
	a_square->vertex3.x = point3->x;
	a_square->vertex3.y = point3->y;
	
	a_square->vertex4.x = point4->x;
	a_square->vertex4.y = point4->y;

	
	if((a_square->vertex4.x - a_square->vertex1.x == a_square->vertex2.y - a_square->vertex1.y) &&
	   (a_square->vertex2.y - a_square->vertex1.y == a_square->vertex3.x - a_square->vertex2.x) &&
	   (a_square->vertex3.x - a_square->vertex2.x == a_square->vertex3.y - a_square->vertex4.y))
		return a_square;	

	else
	{
		free(a_square);
		return NULL; 
	 }	

}


struct square *create_square_coordinates (int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	struct square *a_square = (struct square *)malloc(sizeof(struct square));
	
	if(NULL == a_square)
		return NULL;
	
	a_square->vertex1.x = x1;
	a_square->vertex1.y = y1;
	
	a_square->vertex2.x = x2;
	a_square->vertex2.y = y2;
	
	a_square->vertex3.x = x3;
	a_square->vertex3.y = y3;
	
	a_square->vertex4.x = x4;
	a_square->vertex4.y = y4;
	
	if((a_square->vertex4.x - a_square->vertex1.x == a_square->vertex2.y - a_square->vertex1.y) &&
	   (a_square->vertex2.y - a_square->vertex1.y == a_square->vertex3.x - a_square->vertex2.x) &&
	   (a_square->vertex3.x - a_square->vertex2.x == a_square->vertex3.y - a_square->vertex4.y))
		return a_square;	

	else
	{
		free(a_square);
		return NULL; 
	 }	
}


void print_square(struct square *a_square)
{
	printf("Point1: x = %i, y = %i\n", a_square->vertex1.x, a_square->vertex1.y);
	printf("Point2: x = %i, y = %i\n", a_square->vertex2.x, a_square->vertex2.y);
	printf("Point2: x = %i, y = %i\n", a_square->vertex3.x, a_square->vertex3.y);
	printf("Point4: x = %i, y = %i\n", a_square->vertex4.x, a_square->vertex4.y);
	printf("\n");	
}

void delete_square(struct square *a_square)
{
	free(a_square);	
}

int square_of_figure(struct square *a_square)
{
	return (a_square->vertex2.y - a_square->vertex1.y) * (a_square->vertex2.y - a_square->vertex1.y); 

}




































