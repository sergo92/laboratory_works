
#include "sort.h"


void bubble_sort(struct figure_array *the_array)
{
	if(the_array == NULL)
		return;
	
	for(int i = 0; i<the_array->size; i++)
	{
		for(int j = 0; j<the_array->size-1; j++)
		{
			int sq1 = (the_array->a_square[j].vertex4.x - the_array->a_square[j].vertex1.x) * (the_array->a_square[j].vertex3.x - the_array->a_square[j].vertex2.x);
			int sq2 = (the_array->a_square[j+1].vertex4.x - the_array->a_square[j+1].vertex1.x) * (the_array->a_square[j+1].vertex3.x - the_array->a_square[j+1].vertex2.x);
			
			if(sq1 < sq2){
				struct square swap;
				swap = the_array->a_square[j];
				the_array->a_square[j] = the_array->a_square[j+1];
				the_array->a_square[j+1] = swap;
			}	
		}
	}
}	
