#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*
 * Created by : Bojan Grkovic
 * A simple BMR Calculator in C
 * Purpose: To touch up on some C programming
 * and documenting.
 * Bare-bones CLI BMI calculator.
 * Plans to turn into webpage eventually.
 * For simplicity I have omitted the common "activity level" factor
 */

/* METRIC FORMULAS
 * FORMULA FOR WOMEN: 655.1 + (9.563 x kg) + (1.850 x cm) - (4.676 x age)
 * FORMULA FOR MEN: 66.5 + (13.75 x kg) + (5.003 x cm) - (6.75 x age)
 * IMPERIAL FORMULAS
 * FORMULA FOR WOMEN: 655.1 + (4.35 x lbs) + (4.7 x in) - (4.7 * age)
 * FORMULA FOR MEN: 66.47 + (6.24 x lbs) + (12.7 x in) - (6.775 x age)
 */
int main(){
	int gender;
	
	char buff[100];
	do{
		while((strncmp(buff,"metric",6) != 0) && (strncmp(buff,"imperial",8) != 0)){
			printf("Metric or imperial?(q to quit)"); // to add as much user satisfaction as possible
			fgets(buff,sizeof(buff),stdin);
			for(int i = 0; buff[i] != '\0'; i++){
				buff[i] = tolower((unsigned char)buff[i]); // set all capitals to lowercase, for easier use in comparisons 
			}
			if((strncmp(buff,"metric",6) != 0) && (strncmp(buff,"imperial",8) != 0)){ // check for invalid input
				printf("Invalid input!");
			}
		}
		if(strncmp(buff,"metric",6) == 0){ // can think of this as a binary tree, one side with metric, one side with imperial
			
		}	
	}while(strncmp(buff,"q", != 0);
}
