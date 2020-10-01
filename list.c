/* list.c --- 
 * 
 * 
 * Author: John J. Lass, Robert Carangelo, Tyler Neath
 * Created: Thu Oct  1 18:06:18 2020 (-0400)
 * Version: 
 * 
 * Description: Functions to manipulate list of cars
 * 
 */
#include "list.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int32_t lput(car_t *cp) {

	car_t *pp=NULL;
 
	if(cp->next==NULL) {

		return 0;

	}else if((pp=(car_t*)malloc(sizeof(car_t *)))){

		pp->next=cp;

	}else{

		return 1;

	}
	
	return 0;

}
	
	
car_t *lget();  {

	car_t last_car;

	
