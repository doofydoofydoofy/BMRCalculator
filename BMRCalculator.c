#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*
 * Created by : Bojan Grkovic
 * A simple BMR Calculator in C
 * Purpose: To touch up on some C programming and documenting programs.
 * Bare-bones CLI BMR calculator.
 * Plans to turn into webpage eventually.
 * For simplicity I have omitted the common "activity level" factor
 */

/* METRIC FORMULAS
 * FORMULA FOR WOMEN: 655.1 + (9.563 x kg) + (1.850 x cm) - (4.676 x age)
 * FORMULA FOR MEN: 66.5 + (13.75 x kg) + (5.003 x cm) - (6.75 x age)
 * IMPERIAL FORMULAS
 * FORMULA FOR WOMEN: 655.1 + (4.35 x lbs) + (4.7 x in) - (4.7 * age)
 * FORMULA FOR MEN: 66.5 + (6.24 x lbs) + (12.7 x in) - (6.775 x age)
 */
int main(){
	int gender;
	float height;
	float weight;
	int age;
	float BMR;
	
	char buff[100];
	do{
		while((strncmp(buff,"metric",6) != 0) && (strncmp(buff,"imperial",8) != 0)){
			printf("TYPE 'q' TO EXIT THE PROGRAM! \n Are you male or female(M/F):\n");
			fgets(buff,sizeof(buff),stdin);
			if((strncmp(buff,"F",1) == 0) || (strncmp(buff,"f",1) == 0)){
				gender = 1;
			}else if((strncmp(buff,"M",1) == 0) || (strncmp(buff,"m",1) == 0)){
				gender = 0;
			}else if(strncmp(buff,"q",1) == 0){
				exit(0);
			}else{
				printf("INVALID INPUT!\n");
				continue;
			}

			printf("Metric or imperial?: \n"); // to add as much user satisfaction as possible
			fgets(buff,sizeof(buff),stdin);
			for(int i = 0; buff[i] != '\0'; i++){
				buff[i] = tolower((unsigned char)buff[i]); // set all capitals to lowercase, for easier use in comparisons 
			}
			if((strncmp(buff,"metric",6) != 0) && (strncmp(buff,"imperial",8) != 0)){ // check for invalid input
				printf("Invalid input!\n");
			}
		}
		 //FORMULA FOR WOMEN: 655.1 + (9.563 x kg) + (1.850 x cm) - (4.676 x age)
		// * FORMULA FOR MEN: 66.5 + (13.75 x kg) + (5.003 x cm) - (6.75 x age)

	 	if(strncmp(buff,"metric",6) == 0){ // can think of this as a binary tree, one side with metric, one side with imperial	
			printf("Weight:\n");
			fgets(buff,sizeof(buff),stdin);
			sscanf(buff,"%f",&weight);
			printf("Height(cm):\n");
			fgets(buff,sizeof(buff),stdin);
			sscanf(buff,"%f",&height);
			printf("Age:\n");
			fgets(buff,sizeof(buff),stdin);
			sscanf(buff,"%d",&age);
			if(gender){
				BMR = 655.1 + (9.563 * weight) + (1.850 * height) - (4.676 * age);
			}else{
				BMR = 6.5 + (13.75 * weight) + (5.003 * height) - (6.75 * age);
			}
			printf("Your BMR is %f!\n", BMR);			

	
		}	
	}while(strncmp(buff,"q",1) != 0);
}
