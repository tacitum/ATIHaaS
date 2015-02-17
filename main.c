/* */
/******************************************************************************
Date:
Program:
Filename:
Author:
Description:
******************************************************************************/
/*Preprocessor*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*declarations & globals if not included*/
void sprinkle_fairy_dust_over_that(void);
bool just_fix_it_on_production(void);

int main(int argc,char *argv[]){
  /*inspect arguments*/
  /*declare variables*/

  /*core program*/
	sprinkle_fairy_dust_over_that();

	if(just_fix_it_on_production()){
		printf("You'll go far!");
	}else{
		fprintf(stderr,"I'm sorry Dave.  I am afraid I can't do that.");
		exit(EXIT_FAILURE);
	}

  exit(EXIT_SUCCESS);
}

void sprinkle_fairy_dust_over_that(void){
	printf("%s\n","magic!");
}

bool just_fix_it_on_production(void){
    return false;
}
