/* PBL Finele.cpp : Idk .*/


#include "stdafx.h"

/*#include .....the preprocessor directive*/
/*stdafx.h is the header file for input and output function*/
/*Example printf(),scanf()*/

#include "stdlib.h"

/*stdlib.h is the header file for function memory allocation */
/*Example system("cls"), system("pause")*/
	

int _tmain(int argc, _TCHAR* argv[])       /*main function*/

{     /*The begining of the main function*/


char YN;      /*Repeat or Y/N option*/



int opt_m,opt_A,opt_B,opt_C,opt_D,opt_E;      /*Main menu and submenu option*/


    /*variable for sub menu power*/
    int A1;						 /*Power,Energy,Charge option*/
    float v1,i1,p1;				 /*v1 for voltage, i1 for current, p1 for power*/
    float v2,r2,p2;				 /*v2 for voltage, r2 for resistor, p2 for power*/
    float i3,r3,p3;				 /*i3 for current, r3 for resistor, p3 for power*/
    float w4,t4,e4;				 /*w4 for power, t4 for time, e4 for energy*/
    float e,v,q;				 /*e for energy, v for voltage, q for charge*/



	/*variable for sub menu series*/
    int B1;                       /*Series Resistantance option*/
    float VS,I,S,VD;             /*VS for voltage supply , I for current , S for resistor
								   VD for voltage divider*/


	/*variable for parallel sub menu*/
	int C3;                     /*Parallel Resistantance option*/
    float IT,VT,Is,Ir;          /*IT for total current , VT for total voltage , Is for supply current
								  Ir for current drop*/

	/*variable for combination circuit*/
    float ST,PT,RT;             /*Series Total,Parallel Total,Resistance Total*/

	float S1,S2,S3,S4,S5;       /*Series 1-5*/

    float P1,P2,P3,P4,P5;       /*Parallel 1-5*/

	int DP,DS;                  /*Choice for quantity resistor*/

	float R1,R2,R3,R4,RL,VTH,RTH,VL,IL,X_RTH;
	/*R1-R4,Res Load,Volt-Thv,Res-Thv,Crnt-Thv,Extand Res-Thv*/

	float IX1,IX2,IT1,IT2,IS,ISX;
	/*Amp-X1,Amp-X2,Amp-total-1,Amp-total-2,Amp-total-power,Amp-total-power-if*/

    float RT1,RT2,RX,RX1,RX2;/*ResistanceTotal 1&2,Resistor X ,1&2*/

	float VP,V1,V2;

    /* Voltage Superposition 1 and Voltage Input 1&2*/

	char CP;										    
	/*Current Path option*/


	/*variable for sub menu 4*/
	int E2;			
	/*Option for converter*/

	float micro,mili,nopre,kilo,mega;				    
	/*Var for converter*/





main: /* Label for goto Main Menu*/


do{


	system ("cls");
	/*Clear Screen*/


	  printf("\t\t\t ========================= \n");
      printf("\t\t\t Welcome to DC CIRCUIT 101 \n");
	  printf("\t\t\t ========================= \n\n");
	  printf("\t\t\t Version 7.4.5 Beta \n");          /*Main menu*/         /*refer figure Main*/
	  printf("\t1.POWER CHARGE ENERGY \n");
	  printf("\t2.SERIES CIRCUIT\n");
	  printf("\t3.PARALLEL CIRCUIT\n");
	  printf("\t4.COMBINATION CIRCUIT\n");
	  printf("\t5.FAQ @ TUTORIAL \n");
	  printf("\t6.END PROGRAM\n\n");


      printf("\tChoice: ");									    /*display choice*/        
	  scanf("%d",&opt_m);									    /*input choice main*/
	  /*scanf is input funtion 
	  %d sign decimal 
	  &opt_m is address operator */

/*option for main menu*/
switch(opt_m)

{															    /*the begining for option main menu*/
 
       case 1:                                                  /*If input main menu 1*/


		   {												    /*Open for power energy charge*/



main_A:                                  
			   system ("cls");                                  /*Clear screen*/

		printf("\t\t\t ============================= \n");    
        printf("\t\t\t POWER ENERGY CHARGE\n");
		printf("\t\t\t ============================= \n\n");     /*Power Energy Charge submenu*/
	    printf("\t1.POWER DISSIPATION\n");                       /*Refer to figure A*/
	    printf("\t2.ENERGY\n");								
	    printf("\t3.CHARGE\n");									
		printf("\t4.<<<Return Main Menu \n\n");     


		printf("\tChoice: ");                                    /*Display choice*/
		 scanf("%d",&opt_A);
		 
		 /*Input Choice*/
		 switch(opt_A)
		 
		 {                                                      /*Open for power energy charge option*/

		 case 1:												 /*If input 1*/

        while(1)										/*Forcing the programe to always true*/


	    {                                                    /*Open for power dissipation*/



			system("cls");                                      /*clear screen*/

		printf("\t\t\t===================\n");                  
	    printf("\t\t\tPower Dissipation\n");                    /*Formula power dissipation menu*/
		printf("\t\t\t===================\n\n");				/*Refer to figure A1*/
		printf("\t1. If V and I Given\n");
		printf("\t2. If V and R Given\n");
		printf("\t3. If I and R Given\n");
		printf("\t4. <<< Return to submenu\n\n");

		printf("\tChoice : ");									/*Display choice*/
		scanf("%d",&A1);                                        /*Input choice*/    

		switch(A1)                        /*switch of option A1*/

		{                                                 /*Open for power dissipation option*/

		case 1:	                                                /*If input 1*/

			system ("cls");                                     /*Clear screen*/

			printf("\t\t\t===================\n");                  
			printf("\t\t\tIf V and I Given\n");                    /*Display power dissipation */
			printf("\t\t\t===================\n\n");				/*Refer to figure A1.1*/

			printf("\tEnter V (Volt): ");                             /*Display Voltage*/

			scanf("%f",&v1);                                    /*Enter Voltage*/
			/*scanf is input funtion 
	         %f sign float 
	         &opt_m is address operator */

			printf("\tEnter I(Ampere) : ");                          /*Display Current*/

			scanf("%f",&i1);                                    /*Enter Current*/

			p1 = i1 * v1;                                       /*Math operation*/

			printf("\n\tPower = %.2f Watt",p1);                      /*Display answer*/

			break;                       /*Terminate the programe*/												/*Terminate the programe*/


		case 2:                                                 /*If input 2*/


			system ("cls");                                     /*Clear screen*/

			printf("\t\t\t===================\n");                  
			printf("\t\t\tIf V and R Given\n");                    /*Formula power dissipation*/
			printf("\t\t\t===================\n\n");				/*Refer to figure A1.2*/

			printf("\tEnter V (Volt) : ");                      /*Display Voltage*/

			scanf("%f",&v2);                                    /*Enter Voltage*/

			printf("\tEnter R (ohm) : ");                             /*Display Resistor*/

			scanf("%f",&r2);                                    /*Enter Resistor*/

			p2=(v2 * v2) / r2;                                  /*Math operation*/

			printf("\n\tPower = %.2f Watt",p2);                      /*Display answer*/

			break;                       /*Terminate the programe*/												/*Terminate the programe*/


		case 3:                                                   /*If input 3*/


			system ("cls");                                       /*Clear screen*/

			printf("\t\t\t===================\n");                  
			printf("\t\t\tIf I and R Given\n");                    /*Formula power dissipation */
			printf("\t\t\t===================\n\n");				/*Refer to figure A1.3*/

		 	printf("\tEnter I (Ampere): ");                               /*Display Current*/

			scanf("%f",&i3);                                      /*Enter Current*/

			printf("\tEnter R (ohm): ");                               /*Display Resistor*/

			scanf("%f",&r3);                                      /*Enter Resistor*/

			p3 = (i3 * i3) * r3;                                  /*Math operation*/

			printf("\n\tPower = %.2f Watt",p3);                        /*Display answer*/

			break;                       /*Terminate the programe*/												  /*Terminate the programe*/

		
		case 4:                                                   /*If input 4*/


			system ("cls");                                       /*clear screen*/

			goto main_A;                                          /*back to submenu*/

			
		break;                       /*Terminate the programe*/													  /*Terminate the programe*/

		}                                                         /*Close for power dissipation option*/

	      printf("\n\t\t\t Do you want to repeat? y/n \n");       /*display do you want to repeat*/

		  printf("\tChoice: ");

          scanf(" %c",&YN);                                       /*enter y/n*/

         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/

	     else

		 goto main_A;                                             /*back to submenu*/


         }                                                       /*Close for power dissipation*/

        break;                       /*Terminate the programe*/													 /*Terminate the programe*/

	     case 2:                                                 /*If input 2*/

			while(1)

	    {                                                       /*Open for Energy*/

			system("cls");                                       /*clean screen*/

			printf("\t\t\t===================\n");                  
			printf("\t\t\t\tEnergy\n");							  /*Formula Energy*/
			printf("\t\t\t===================\n\n");				/*Refer to figure A2*/

		 printf("\tEnter Power (Watt): ");                             /*Display Power*/

		scanf("%f",&w4);                                         /*Enter Power*/

		printf("\tEnter Time (Second): ");                               /*Display Time*/

		scanf("%f",&t4);                                         /*Enter Time*/

		e4 = w4 / t4;                                            /*Math operation*/

		printf("\n\tEnergy = %.2f Joule",e4);                          /*Display answer*/

	      printf("\n\t\t\t Do you want to repeat? y/n \n");      /*Display do you want to repeat*/

		  printf("\tChoice: ");

          scanf(" %c",&YN);                                      /*Enter y/n*/

         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/

	     else

		 goto main_A;                                            /*back to submenu*/

         }                                                       /*Close for energy*/

        break;                       /*Terminate the programe*/													 /*Terminate the programe*/

 
	     case 3:                                                 /*If input 3*/

         while(1)


	    {                                                      /*Open for charge*/



			system("cls");                                       /*clear screen*/

			printf("\t\t\t===================\n");                  
			printf("\t\t\t\tCharge\n");							 /*Formula Charge*/
			printf("\t\t\t===================\n\n");			 /*Refer to figure A3*/

		printf("\tEnter Energy (Joule) : ");                             /*Display Energy*/

		scanf("%f",&e);                                          /*Enter Energy*/

		printf("\tEnter Voltage (Volt):");                             /*Display Voltage*/

		scanf("%f",&v);                                          /*Enter Voltage*/

		q = e / v;                                               /*Math operation*/

		printf("\n\tCharge = %.2f Couloumb",q);                           /*Display answer*/

	      printf("\n\t\t\t Do you want to repeat? y/n \n");      /*Display do you want to repeat*/

		  printf("\tChoice: ");            

          scanf(" %c",&YN);
		  /*scanf is input funtion 
	         %c sign character
	         &YN is address operator */
		  /*Enter y/n*/

         if(YN=='Y'||YN=='y') 

		 continue;                       /*Repeat*/

	     else

		 goto main_A;                                            /*back to submenu*/

         }                                                       /*Close for charge*/

        break;                       /*Terminate the programe*/													 /*Terminate the programe*/



		 case 4:                                                 /*If input 4*/

		goto main;                                               /*back to main*/

		break;                       /*Terminate the programe*/													 /*Terminate the programe*/

		 default:                                          /*If selection not available*/

			system ("cls");                                      /*clear screen*/

  

        printf("\t\t\t =================== \n"); 
		printf("\t\t\t <INVALID SELECTION> \n");            /*Display invalid selection*/
		printf("\t\t\t =================== \n");
		system ("pause");                                    /*pause screen*/
			 goto main_A;                                    /*back to submenu*/

			 break;                       /*Terminate the programe*/											 /*Terminate the programe*/

	      }                                               /*Close for power energy charge option*/

       }                                                  /*Close for power energy charge*/
	   
	   break;                       /*Terminate the programe*/											  /*Terminate the programe*/

 
case 2:                   /*if input main menu 2*/

		   {             /*Begining of series sub menu*/

main_B:
			   system ("cls");                 /*clear screen*/

		printf("\t\t\t ============== \n");    /*Sub Menu for series circuit*/
		printf("\t\t\t SERIES CIRCUIT\n");     /*refer to figure B*/
		printf("\t\t\t ============== \n\n");
	    printf("\t1.TOTAL RESISTANCE\n");
	    printf("\t2.VOLTAGE DIVIDER\n");
	    printf("\t3.TOTAL CURRENT\n");
	    printf("\t4.<<<Return Main Menu  \n\n");
		printf("\tChoice: ");                /*option for series*/

		 scanf("%d",&opt_B);                 /*Enter option*/

		 switch(opt_B)           /*option sub menu opt_B*/
		 
		 {                   /*begining of series sub menu choice*/                

		 case 1:                            /*If option 1*/

         while(1)                           /*force the program to be always true*/

	    {                                   /*open for total resistance*/

			system("cls");                  /*Clear screen*/

SIR:
	   printf("\t\t\t=========================\n");           /*Show total resistance series */
	   printf("\t\t\tTOTAL RESISTANCE (SERIES)\n");            /*refer figure B1*/
	   printf("\t\t\t=========================\n\n");
       printf("\tEnter number of series resistor (2-5) : ");       /*Display Option*/

	   scanf("%d",&B1);                                    /*Enter Option*/

   switch(B1)                                            /*Option How many resistor*/

   {                                                     /*open for total resistor option*/

   case 2:                                                 /*If 2 resistor in series*/
	
		printf("\tEnter R1 (ohm):");
		
		scanf("%f",&S1);                   /*Display and enter resistor 1 & 2*/

	    printf("\tEnter R2 (ohm):");       /*refer figure B1.1*/
		 
		scanf("%f",&S2);

	    ST=S1+S2;                                          /*Math operation*/

		printf("\tTotal resistance is : %.3f ohm\n",ST);     /* Display answer*/

		break;                       /*Terminate the programe*/												/*Terminate the programe*/
	

   case 3:                                                 /*if 3 resistor*/
	
		printf("\tEnter R1 (ohm):");
		
		scanf("%f",&S1);                   /*Display enter resistor 1,2,3*/

	    printf("\tEnter R2 (ohm):");       /*refer figure B1.2*/
		
		scanf("%f",&S2);

		printf("\tEnter R3 (ohm):");scanf("%f",&S3);

	    ST=S1+S2+S3;                                       /* math operation*/

		printf("\tTotal resistance is : %.3f ohm\n",ST);     /*display answer*/

		break;                       /*Terminate the programe*/												/*Terminate the programe*/
	

   case 4:                                                /*if 4 resistor*/
	
		printf("\tEnter R1 (ohm):");
		
		scanf("%f",&S1);        /*Display and enter resistor 1,2,3,4*/

	    printf("\tEnter R2 (ohm):");   /*refer figure B1.3*/
		
		scanf("%f",&S2);

		printf("\tEnter R3 (ohm):");
		
		scanf("%f",&S3);

		printf("\tEnter R4 (ohm):");
		
		scanf("%f",&S4);

	    ST=S1+S2+S3+S4;                                       /*math operation*/

		printf("\tTotal resistance is : %.3f ohm\n",ST);     /*display answer*/

		break;                       /*Terminate the programe*/												  /*Terminate the programe*/
	

   case 5:                                            /*If 5 resistor*/
	
		printf("\tEnter R1 (ohm):");
		
		scanf("%f",&S1);			       /*Display and enter resistor 1,2,3,4,5*/

	    printf("\tEnter R2 (ohm):");       /*refer figure B1.4*/     
		
		scanf("%f",&S2);

		printf("\tEnter R3 (ohm):");
		
		scanf("%f",&S3);

		printf("\tEnter R4 (ohm):");
		
		scanf("%f",&S4);

		printf("\tEnter R5 (ohm):");
		
		scanf("%f",&S5);

	    ST=S1+S2+S3+S4+S5;                              /*math operation*/

		printf("\tTotal resistance is : %.3f ohm\n",ST);    /*Display answer*/

		break;                       /*Terminate the programe*/												/*Terminate the programe*/

   default: printf("\n\tINVALID SELECTION\n");    

	   /*if other than 2,3,4,5 display invalid selection*/

	   goto SIR;           /*go to series resistor */

   }                       /*close for total resistance option*/

	      printf("\n\t\t\t Do you want to repeat? y/n \n"); 

		  /*display do you want to repeat*/

		  printf("\tChoice: ");                         

          scanf(" %c",&YN);                             /* enter y/n*/

         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/

	     else

		 goto main_B;                                    /*back to series sub menu*/

      }                                 /*close for total resistance*/

        break;                       /*Terminate the programe*/											 /*Terminate the programe*/

	     case 2:                             /*if voltage divider*/

         while(1)                            /*force the program to be always true*/

	    {                                    /*the begining for voltage divider*/

			system("cls");                   /*clear screen*/

			 printf("\t\t\t================\n");      /*display voltage divider*/
			 printf("\t\t\t VOLTAGE DIVIDER\n");       /*refer figure B2*/
			 printf("\t\t\t================\n\n");


	    printf("\n\tEnter Voltage Supply (volt):");                               /*Enter VS*/

	    scanf("%f",&VS);                                                 /*input VS*/

	    printf("\n\tEnter Resistor Value (ohm):");                            /*Enter S*/

	    scanf("%f",&S);                                               /*input S*/

	    printf("\n\tEnter Total Resistance Value (ohm):");                 /*Enter ST*/

	    scanf("%f",&ST);                                                   /*Input ST*/

	    VD=((S/ST)*VS);                                           /*math process*/



	    printf("\tVoltage Divider is : %.3f volt \n",VD);      /*display answer*/

	      printf("\n\t\t\t Do you want to repeat? y/n \n");   /*display do you want to repeat*/

		  printf("\tChoice: ");                           /*Enter choice*/

          scanf(" %c",&YN);                              /* enter y/n*/

         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/

	     else

		 goto main_B;                                    /*back to series submenu*/

         }                                    /*close for voltage divider*/

        break;                       /*Terminate the programe*/										     /*Terminate the programe*/

	     case 3:                        /*if total current*/

         while(1)            /*force the program to be always true*/

	    {                            /* begining for total current*/

			system("cls");                         /* clear screen*/

		  printf("\t\t\t==============\n");        /*display total current*/
		  printf("\t\t\t TOTAL CURRENT\n");        /*refer figure B3*/
		  printf("\t\t\t==============\n\n");

		  printf("\n\tEnter voltage supply (volts) :");          /*display vs*/

	      scanf("%f",&VS);                                       /*Enter vs*/

	      printf("\n\tEnter total resistance(ohm) :");           /*display rt*/

	      scanf("%f",&ST);                                       /*enter rt*/

	      I=(VS/ST);                                            /*math operation*/

	printf("\n\tTotal current is : %.3f Ampere\n",I);           /* display answer in 3 decimal point*/
	      printf("\n\t\t\t Do you want to repeat? y/n \n");     /*display do you want to repeat*/
		  printf("\tChoice: ");

          scanf(" %c",&YN);                                     /*enter y/n*/

         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/

	     else

		 goto main_B;                    /*back to series sub menu*/

         }                                    /*close for total current*/

        break;                       /*Terminate the programe*/													/*Terminate the programe*/

		 case 4:                      /*if option 4*/

		goto main;                    /* back to series main menu*/

		break;                       /*Terminate the programe*/													/*Terminate the programe*/

		 default:                   /*if another option is not available*/

			 system ("cls");                          /*clear screen*/


        printf("\t\t\t =================== \n");      /*display invalid selection*/
		printf("\t\t\t <INVALID SELECTION> \n");
		printf("\t\t\t =================== \n");

		system ("pause");                           /*pause screen*/              

			 goto main_B;                              /*back to series sub menu*/ 

			 break;                       /*Terminate the programe*/
			 
	      }                              /*close for series sub menu choice*/

       }                                 /*close for series sub menu*/

	   break;                       /*Terminate the programe*/										   /*Terminate the programe*/
 
case 3:
		  
	{           /*beginning of the parallel circuit menu*/


main_C:
	/*label for return to sub menu C*/		  
		
		system ("cls");                      /*clear screan*/

		printf("\t\t\t ================ \n");       /*Parallel circuit menu*/
        printf("\t\t\t PARALLEL CIRCUIT \n");
		printf("\t\t\t ================ \n\n");     /*refer to figure C */
	    printf("\t1.CURRENT DROP\n");
	    printf("\t2.TOTAL RESISTANCE\n");
	    printf("\t3.TOTAL VOLTAGE\n");
	    printf("\t4.<<<Return Main Menu  \n\n");  

		printf("\tChoice: ");  
		 scanf("%d",&opt_C);                        /*Enter option*/
		 
		 switch(opt_C){                             /*Open for choose parallel*/                                 

		 case 1:                                    /*if current drop*/
	 
			 while(1)                               /*forcing the programe to always true*/

	    {                                           /*Open for current drop body*/

			system("cls");                          /*Clear screen*/
	
	printf("\t\t\t============\n");                 /*Current Drop menu*/
    printf("\t\t\tCURRENT DROP\n");                     
	printf("\t\t\t============\n");                 /*refer to figure c1 */
    
	printf("\n\tEnter Resistor 1 value\n");          

    
	printf("\tResistor 1 (ohm):"); scanf("%f",&P1);          /*Input for resistor 1*/

    printf("\n\tEnter Resistor 2 value\n");             
    
	printf("\tResistor 2 (ohm):"); scanf("%f",&P2);    

    printf("\n\tEnter Supply current value\n");         
    
	printf("\tSupply current (ampere):"); scanf("%f",&Is);     /*Input for supply current*/

    Ir = (P2/(P2+P1))*Is;                                      /*Mathematical operation*/
    
	printf("\n\t Current at R1 %.2f ampere\n",Ir);                            /*Display answer(current supply)*/
	      
	printf("\n\t\t\t Do you want to repeat? y/n \n");          /*Choice for repeat*/
		  
	printf("\tChoice: ");                              
          
	scanf(" %c",&YN);                                    /*input yes(y) or no(n)*/
         
	if(YN=='Y'||YN=='y')                                 /*if Y/y it will repeat the program*/
		 continue;                       /*Repeat*/
	     else                                            /*if other than Y/y it will go to submenu*/
		 goto main_C;                       
         }                                               /*Close for current drop*/
        break;                       /*Terminate the programe*/                                           /*terminate the programe*/

	     case 2:                                         /*if choose 2*/

			 
			while(1)                         /*Forcing the programe to always true*/
	    {                                    /*Open for the total resistance*/
			system("cls");                                             /*clear screen*/
		
		printf("\t\t\t===========================\n");                 /*total resistance menu*/
		printf("\t\t\tTOTAL RESISTANCE (PARALLEL)\n");
		printf("\t\t\t===========================\n");
		
		printf("\n\t Enter number of parallel resistor (2-5) : ");   
		
		
		
		scanf("%d",&C3);                                           /*Input number of resistor*/

		switch(C3){                          /*Open for choose resistor*/                                                        

		case 2:                                                    /*If the input is 2*/
			
			printf("\n\tResistor 1 (ohm):");                       /*Display resistor 1*/                    
			
			scanf("%f",&P1);                                       /*Input resistor 1*/
			
			printf("\n\tResistor 2 (ohm):");                         
			
			scanf("%f",&P2);                                                                       

			PT=1/(1/P1+1/P2);                                      /*Mathematical operation*/
			
			printf("\n\tTotal resistance is %.3f ohm\n",PT);         /*Display the total resistance*/
			
			break;                       /*Terminate the programe*/                                                 /*Terminate the programe*/
			                                                       /*Refer to figure C2.1*/
			    
		case 3:                                                    /*If the input is 3*/
			
			printf("\n\tResistor 1 (ohm):");                        
			
			scanf("%f",&P1);                                       
			
			printf("\n\tResistor 2 (ohm):");                         
			
			scanf("%f",&P2);                                       
			
			printf("\n\tResistor 3 (ohm):");                        
			
			scanf("%f",&P3);                                       

			PT=1/(1/P1+1/P2+1/P3);                                  /*Mathematical operation*/
			
			printf("\n\tTotal resistance is %.3f ohm\n",PT);          /*Display the total resistance*/
			
			break;                       /*Terminate the programe*/                                                  /*Terminate the programe*/
			                                                        /*Refer to figure C2.2*/

		case 4:                                                     /*If the input is 4*/
			
			printf("\n\tResistor 1 (ohm):");                        /*Display resistor 1*/
			
			scanf("%f",&P1);                                        /*Input resistor 1*/
			
			printf("\n\tResistor 2 (ohm):");                         
			
			scanf("%f",&P2);                                       
			
			printf("\n\tResistor 3 (ohm):");                         
			
			scanf("%f",&P3);                                       
			
			printf("\n\tResistor 4 (ohm):");                         
			
			scanf("%f",&P4);                                       

			PT=1/(1/P1+1/P2+1/P3+1/P4);                             /*Mathematical operation*/                        
			
			printf("\n\tTotal resistance is %.3f ohm\n",PT);          /*Display the total resistance*/
			
			break;                       /*Terminate the programe*/                                                  /*Terminate the programe*/
			                                                        /*Refer to figure C2.3*/

		case 5:                                                     /*If the input is 5*/
			
			printf("\n\tResistor 1 (ohm):");                        /*Display resistor 1*/
			
			scanf("%f",&P1);                                        /*Input resistor 1*/
			
			printf("\n\tResistor 2 (ohm):");                         
			
			scanf("%f",&P2);                                      
			
			printf("\n\tResistor 3 (ohm):");                         
			
			scanf("%f",&P3);                                       
			
			printf("\n\tResistor 4 (ohm):");                         
			
			scanf("%f",&P4);                                       
			
			printf("\n\tResistor 5 (ohm):");                         
			
			scanf("%f",&P5);                                     
			 
			PT=1/(1/P1+1/P2+1/P3+1/P4+1/P5);                        /*Mathematical operation*/ 
			
			printf("\n\tTotal resistance is %.3f ohm\n",PT);          /*Display the total resistance*/
			
			break;                       /*Terminate the programe*/                                                  /*Terminate the programe*/
			                                                        /*Refer to figure C2.4*/
	
		default: 	                                                /*If input beside (2-5)*/
			
			printf("\n\t Invalid Selection");                       /*Display invalid selection*/
		
		}                                                           /*Close for choose resistor*/

	      printf("\n\t\t\t Do you want to repeat? y/n \n");         /*Do you want to repeat*/
		  
		  printf("\tChoice: ");                                       
          
		  scanf(" %c",&YN);                                         /*Input Y or N*/
         
		 if(YN=='Y'||YN=='y')                                       /*If yes repeat*/
		 continue;                       /*Repeat*/
	     else                                                       /*If no go to sub menu*/
		 goto main_C;
         }                                                          /*Close for total resistance*/
        break;                       /*Terminate the programe*/                                                      /*Terminate the programe*/                          

	     case 3:                                                    /*If input 3*/  

		
			 while(1)                      /*Forcing the programe to always true*/
	    {                                                /*Open for total voltage*/
			system("cls");                                          /*Clear screen*/
	printf("\t\t\t=============\n");                                /*Total voltage menu*/
    printf("\t\t\tTOTAL VOLTAGE\n");                                /*Refer to figure C3 */ 
	printf("\t\t\t=============\n\n");
	
	printf("\n\tEnter total current");                              /*Display enter total current*/
	

	printf("\n\tTotal current (ampere):"); scanf("%f",&IT);         /*Input for total current*/

	printf("\n\tEnter total resistance");                           /*Display enter total resistance*/
	
	printf("\n\tTotal resistance (ohm):"); scanf("%f",&PT);         /*Input for total resistance*/

	VT=IT*PT;                                                       /*mathematical operation*/
	
	printf("\n\tTotal voltage is = %.3f volt\n",VT);                /*Display total voltage*/

	printf("\n\t\t\t Do you want to repeat? y/n \n");               /*Do you want to repeat*/
		  
	printf("\tChoice: ");
          
	scanf(" %c",&YN);                                         /*Input yes or no*/
         
	     if(YN=='Y'||YN=='y')                                       /*If yes repeat*/
		 continue;                       /*Repeat*/
	     else                                                       /*Else go to sub menu*/
		 goto main_C;
         }                                                          /*Close for total voltage*/
        break;                       /*Terminate the programe*/                                                      /*Terminate the programe*/                                         

		 case 4:                                                    /*If input 4*/
		goto main;                                                  /*Go to mainmenu*/
		break;                       /*Terminate the programe*/                                                      /*Terminate the programe*/

		 default:                                                   /*If input beside(1-4)*/
	    
	    system ("cls");                                             /*Clear screen*/
        

        
		printf("\t\t\t =================== \n");                    /*If invalid selection*/
		printf("\t\t\t <INVALID SELECTION> \n");           
		printf("\t\t\t =================== \n");
		
		system ("pause");                                            /*Pause screen*/
			 goto main_C;                                            /*Go to mainmenu*/
			 break;                       /*Terminate the programe*/                                                  /*Terminate the programe*/
	      }                                                        /*Close for choose parallel*/
       }                                                           /*Close for Parallel*/
	   
	   break;                       /*Terminate the programe*/                                                      /*Terminate the programe*/






 case 4:


		   {/* Begining of Submenu D */


main_D:
			   /*Label for Submenu D (goto) */              
			   /*Go to Submenu Combination*/

			   system ("cls"); /* Clear Screen */


		printf("\t\t\t =================== \n");                   /*Combination Submenu*/
        printf("\t\t\t COMBINATION CIRCUIT\n");                    /*refer figure D*/
		printf("\t\t\t =================== \n\n");
	    printf("\t1.Total Resistance Series Parallel\n");
	    printf("\t2.Thevenin Circuit Theorem\n");
	    printf("\t3.Superposition Theorem\n");
	    printf("\t4.<<<Return Main Menu  \n\n");


		printf("\tChoice: ");                                      /*Choice for submenu*/
		 scanf("%d",&opt_D);                            /*Input submenu combination*/
		 /*scanf is input funtion 
	  %d sign decimal 
	  &opt_d is address operator */


		 switch(opt_D)
		 

		 { 
			 /* Begining for Submenu Combination Option */



		 case 1:          /* if option = 1*/
			 
		while(1)            /*Forcing the programe to always true*/
	    {
			system("cls");                               /*Clear screen*/
	printf("\t\t\t =============================\n");
	printf("\t\t\t Calculate Resistor DC circuit \n");          /* Title Total Resistance */
	printf("\t\t\t =============================\n\n\n");       /*refer figure DP*/


par:/* Goto Parallel*/

	printf("\t How many Parallel resistor (0~5): ");
	scanf("%d",&DP);/*Enter qty of resistor-Parallel*/

	switch(DP)
	
	{
		/*Start Parallel Circuit*/

	case 0:

	PT=0;/*Parallel = 0 ,skip to calculate Series */
	goto sir;/*Go to series*/
	break;                       /*Terminate the programe*/



	case 2:

    printf("\n\t Resistor P1  (ohm):");/*Input value of P1,P2*/    /*refer figure DP1*/
	scanf("%f",&P1);
	printf("\t Resistor P2  (ohm):");
	scanf("%f",&P2);

	PT=1/(1/P1+1/P2);/*Calulate Total Parallel Resistance*/
	
	goto sir;/*Go to Calculate Series Resistance*/
	break;                       /*Terminate the programe*/



	case 3:

	printf("\n\t Resistor P1  (ohm): ");/*Input value of P1,P2,P3*/   /*refer figure DP2 */
	scanf("%f",&P1);
	printf("\t Resistor P2  (ohm): ");
	scanf("%f",&P2);
	printf("\t Resistor P3  (ohm): ");
	scanf("%f",&P3);

	PT=1/(1/P1+1/P2+1/P3);/*Calulate Total Parallel Resistance*/

	goto sir;/*Go to Calculate Series Resistance*/
	break;                       /*Terminate the programe*/



	case 4:
	printf("\n\t Resistor P1  (ohm): ");/*Input value of P1,P2,P3,P4*/   /*refer figure DP3*/
	scanf("%f",&P1);
	printf("\t Resistor P2  (ohm): ");
	scanf("%f",&P2);
	printf("\t Resistor P3  (ohm): ");
	scanf("%f",&P3 );
	printf("\t Resistor P4  (ohm): ");
	scanf("%f",&P4);

	PT=1/(1/P1+1/P2+1/P3+1/P4);/*Calulate Total Parallel Resistance*/

	goto sir;/*Go to Calculate Series Resistance*/
	break;                       /*Terminate the programe*/



	case 5:
	printf("\n\t Resistor P1  (ohm): ");/*Input value of P1,P2,P3,P4,P5*/   /*refer figure DP4*/
	scanf("%f",&P1);
	printf("\t Resistor P2  (ohm): ");
	scanf("%f",&P2);
	printf("\t Resistor P3  (ohm): ");
	scanf("%f",&P3);
	printf("\t Resistor P4  (ohm): ");
	scanf("%f",&P4);
	printf("\t Resistor P5  (ohm): ");
	scanf("%f",&P5);

	PT=1/(1/P1+1/P2+1/P3+1/P4+1/P5);/*Calulate Total Parallel Resistance*/ 
	
	goto sir;/*Go to Calculate Series Resistance*/
	break;                       /*Terminate the programe*/

	default:
		printf("\n\t\t\t < INVALID NUMBER OF RESISTOR >\n\n");
		goto par; /*if not in 0,2-5 ask again how many parallel resistor*/  
	
		/*End of Parallel Resistor*/
	}

sir:/*Series Label */
	printf("\n============================================\n");
	printf("\n\t How many Series resistor (0~5): ");
	scanf("%d",&DS);/*Enter qty of resistor-Series*/  /*refer figure DS */
	
    switch(DS)
	
	{
		/* Start for Series Resistor*/



	case 0:/*If 0 skip to total*/
		ST=0;
	goto res;/*Go to Calculate Total Both Resistance*/
	break;                       /*Terminate the programe*/



	case 1:

		printf("\n\t Resistor S1  (ohm):");/*Input value S1*/  /*refer figure DS1*/
		scanf("%f",&S1);
		ST=S1;

	goto res;/*Go to Calculate Total Both Resistance*/
	break;                       /*Terminate the programe*/



	case 2:

		printf("\n\t Resistor S1  (ohm):");/*Input value S1,S2*/  /*refer figure DS2*/
		scanf("%f",&S1);
		printf("\t Resistor S2  (ohm):");
		scanf("%f",&S2);

		ST=S1+S2;

	goto res;/*Go to Calculate Total Both Resistance*/
	break;                       /*Terminate the programe*/



	case 3:

		printf("\n\t Resistor S1  (ohm):");/*Input value S1,S2,S3*/  /*refer figure DS3*/
		scanf("%f",&S1);
		printf("\t Resistor S2  (ohm):");
		scanf("%f",&S2);
		printf("\t Resistor S3  (ohm):");
		scanf("%f",&S3);

		ST=S1+S2+S3;

	goto res;/*Go to Calculate Total Both Resistance*/
	break;                       /*Terminate the programe*/



	case 4:

		printf("\n\t Resistor S1  (ohm):");/*Input value S1,S2,S3,S4*/   /*refer figure DS4*/
		scanf("%f",&S1);
		printf("\t Resistor S2  (ohm):");
		scanf("%f",&S2);
		printf("\t Resistor S3  (ohm):");
		scanf("%f",&S3);
		printf("\t Resistor S4  (ohm):");
		scanf("%f",&S4);

		ST=S1+S2+S3+S4;

	goto res;/*Go to Calculate Total Both Resistance*/
	break;                       /*Terminate the programe*/
	 


    case 5:

		printf("\n\t Resistor S1 (ohm):");/*Input value S1,S2,S3,S4,S5*/   /*refer figure DS5*/
		scanf("%f",&S1);
		printf("\t Resistor S2  (ohm):");
		scanf("%f",&S2);
		printf("\t Resistor S3  (ohm):");
		scanf("%f",&S3);
		printf("\t Resistor S4  (ohm):");
		scanf("%f",&S4);
		printf("\t Resistor S5  (ohm):");
		scanf("%f",&S5);

		ST=S1+S2+S3+S4+S5;

	goto res;/*Go to Calculate Total Both Resistance*/
	break;                       /*Terminate the programe*/



	default:

		printf("\t\t\t < INVALID NUMBER OF RESISTOR >\n\n");
		/*if option not available ask again*/   /*refer figure */
		goto sir;


		/*End of Series */
	}


res: /* Label for Total Resistance */


	RT=PT+ST;/*Calculate Series+Pararalle and display the value*/   /*refer figure DSP*/

	printf("\n============================================\n");

	printf("\n\t Total Parallel : %.3f ohm\n",PT);
	printf("\n\t Total Series: %.3f ohm\n ",ST);
	printf("\n\t Total Series + Parallel : %.3f ohm\n\n",RT);

	      printf("\n\t\t\t Do you want to repeat? y/n \n");/*Ask for repeat*/
		  printf("\tChoice: ");
          scanf(" %c",&YN);


         if(YN=='Y'||YN=='y')
		 continue;								/*Repeat*/
	     else
		 goto main_D;/*Goto submenu D*/

		 /*End of Total Resistance*/

         } 
        break;                       /*Terminate the programe*/





	     case 2:
			
			 while(1)/*Forcing the programe to always true*/


	    { 
			
			/*Start For Thevenin Circuit*/

			system("cls");
		  printf("\t\t\t================\n");  /* Title for Thevenin Circuit */
		  printf("\t\t\t Thevenin Ciruit\n");     /*refer figure D2.1*/
		  printf("\t\t\t================\n\n");



	printf("\t ______[R1]___________[R4]______\n");/*Generating diagram*/
	printf("\t |              |               |\n");
	printf("\t |              |               |\n");
	printf("\t |              |               |\n");
	printf("\t|V|            |R| VTH         |R|\n");
	printf("\t|S|            |2|             |L|\n");
	printf("\t |              |               |\n");
	printf("\t |              |               |\n");
	printf("\t |_____[R3]_____|_______________|\n\n");


	printf("\t For input R1,R2,R3,R4 please calulate \n");/*Intruction*/
	printf("\t total resistance for ecah line. \n");
	printf("\t Example if R1 have two paralell resistor\n");	
	printf("\t calculate the total resistance first \n");
	printf("\t before entering the data on RT1\n\n");

	printf("\tVoltage Supply (V):");
	scanf(" %f",&VS);/*get VS*/

	printf("\tR1 (ohm):");
	scanf(" %f",&R1);/*Get Value of each resistor*/

	printf("\tR2 (ohm):");
	scanf(" %f",&R2);

	printf("\tR3 (ohm):");
	scanf(" %f",&R3);

	printf("\tR4 (ohm):");
	scanf(" %f",&R4);

	printf("\tRL (ohm):");
    scanf(" %f",&RL);/*Get Value resistor Load*/


	printf("\n============================================\n");

	printf("\n\tStep 1: Open resistor load \n");
	printf("\t ______[R1]________/    _[R4]____\n");/*Generating diagram*/   
	printf("\t |              |              |\n");   /*refer figure D2.2*/
	printf("\t |              |              |\n");
	printf("\t |              |              |\n");
	printf("\t|V|            |R|            |R|\n");
	printf("\t|S|            |2|            |L|\n");
	printf("\t |              |              |\n");
	printf("\t |              |              |\n");
	printf("\t |_____[R3]_____|__/    _______|\n\n\n");


	printf("\n============================================\n\n");


	printf("\tStep 2: Determine Voltage Thevenin (VTH) \n\n");/*Find V-th*/

	VTH=((R2)/(R1+R2+R3))*VS;/*VTH=(RTH/RT)*VS*/

	printf("\t\t\t Voltage Thevenin (VTH): %.3f V\n\n\n",VTH);


printf("\n============================================\n\n");

	printf("\t Step 3: Determine The Resistance Thevenin (RTH) \n");
	printf("\t by shorting the Voltage supply (VS) \n");

	printf("\t                  ____[R1+R3]____\n");
	printf("\t                  |              |\n");
	printf("\t                  |              |\n");          /*refer figure D2.3*/
	printf("\t[A]_____[R4]______|              |_____[B]\n");
	printf("\t                  |              |\n");
	printf("\t                  |              |\n");
	printf("\t                  |____[ R2 ]____|\n\n");

	X_RTH=(1/(R1+R3))+(1/R2);/*Dual step calculation is need bacause limited memory*/

	RTH=(1/X_RTH)+R4;/*It for RTH*/

	printf("\t\t\t Resistance Thevenin (RTH): %.3f ohm \n\n\n",RTH);


	printf("\n============================================\n\n");

	printf("\n\n\tStep 4:Draw the Thevenin Circuit\n");
    printf("\t to find Voltage Load(VL) & Current Load(IL) \n\n");

	printf("\t ______[RTH]_____\n");/*Diagram*/                /*refer figure D2.4*/
	printf("\t |              |\n");
	printf("\t|V|            |L|\n");
	printf("\t|T|            |R|\n");
	printf("\t|H|             |\n");
	printf("\t |______________|\n\n");

	VL=((RL)/(RL+RTH))*VTH;/*Find VL and IL Value*/

	IL=VL/RL;


	printf("\tVoltage Load(VL) = %.3f V\n",VL);
	printf("\tCurrent Load(IL) = %.3f A\n",IL);



	      printf("\n\n\t\t\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 /*Repeat*/

	     else
		 goto main_D;
		 /*Goto Submenu D */

		 /*End of Thevenin Circuit */

         } 

        break;                       /*Terminate the programe*/




	     case 3:

			while(1)
				/*Forcing the programe to always true*/


	    {
			/*Start Super Position*/


			system("cls"); /* Clear Screen */

    printf("\t\t\t======================\n");/*Just a Title for Superposition*/
	printf("\t\t\tSUPERPOSITION THEROREM \n");
	printf("\t\t\t======================\n\n");

	printf("\t\t\t Part One \n");                     /*refer figure D3.1*/

	printf("\tEnter Voltage Supply 1 (V) : ");
	scanf(" %f",&V1);/*Voltage Supply V1*/
	/*scanf is input funtion 
	  %f sign float
	  &V1 is address operator */

	printf("\n\tOkey...then short the VS2 \n and find the total resistance\n\n");
	printf("\tTotal Resistance (ohm) : ");
	scanf(" %f",&RT1);/*Total R without V2*/

	IT1=V1/RT1;/*Find IT without V2*/

	printf("\tTotal Ampere = %.3f A\n",IT1);

	printf("\n\t Next find the Resistance or X current flow value \n\n");/*Find Ix without V2*/

	printf("\tValue Rx (ohm) : ");
	scanf(" %f",&RX);/*Value of Rx*/

	printf("\tValue opesite Rx (ohm): ");
	scanf(" %f",&RX1);/*Value opesite Rx*/

	IX1=(RX1/(RX+RX1))*IT1;/*Formula for Current Rules*/

	printf("\n\t So the total value of I-Rx = %.3f A",IX1);/* Value of Ix without V2*/




	printf("\n\t============================================\n");




	printf("\t\t\t Part Two \n");                           /*refer figure D3.2*/

	printf("\n\n\tEnter Voltage Supply 2 (V): ");
	scanf(" %f",&V2);/*Voltage Supply V2*/

	printf("\n\n\t Okey...then short the VS1 \n and find the total resistance \n\n");

	printf("\tTotal Resistance (ohm) : ");
	scanf(" %f",&RT2);/*Total R without V1*/

	IT2=V2/RT2;/*Find IT without V1*/

	printf("\tTotal Ampere = %.3f  A \n",IT2);

	printf("\n\t Next find the Resistor X current flow value \n\n");/*Find Ix without V1*/
	printf("\tValue Rx : %.3f ohm\n",RX);

	printf("\tValue opesite Rx (ohm) : ");
	scanf(" %f",&RX2);/*Value opesite Rx*/

	IX2=(RX2/(RX+RX2))*IT2;/*Formula for Current Rules*/



	printf("\n\t So the total value of I-Rx = %.3f A",IX2);/* Value of Ix without V1*/


	 
	

	while(1)/*Forcing the programe to always true*/


	    {
	
CP:
			
    printf("\n\t============================================\n\n");

	printf("\n\t Last step: Check the current path at AX \n\n");/*Find I(superposition)*/  
	printf("\t    A            B\n");
	printf("\t_________    _________\n");                       /*Check Current Path*/
	printf("\t|   |   |    |   |   |\n");                        /*refer figure D3.3*/
	printf("\t+   R   +    +   R   -\n");
	printf("\t-   X   -    -   X   +\n");
	printf("\t|___|___|    |___|___|\n\n");

	printf("\tIf the current path like A (positive meet negative) enter 'A' \n");
	printf("\tIf the current path like B (positive meet positive) enter 'B' \n");

printf("\n\t\t\t Option:");/*Choose for determine the Ampere must being subract or add*/

    scanf(" %c",&CP); /*Input Current Path*/

	if(CP=='a' || CP=='A')

{	
	/*Start IF Adding current*/
	printf("\n\t============================================\n\n");
	printf("\tADDING-(positive meet negative) \n\n");/*if Add*/   /*refer figure 3.4*/
	printf("\t_________ \n");/*image*/
	printf("\t|   |   |\n");
	printf("\t+   R   +\n");
	printf("\t-   X   -\n");
	printf("\t|___|___|\n\n");

    IS=IX1+IX2; /*Formula Current and Voltage*/
	VP=IS*RX;

	printf("\tTotal Current for Rx = %.3f A\n",IS);/*Display value*/
	printf("\tTotal Voltage for Rx = %.3f V\n\n",VP);

	goto end_CP;

	/*End of Adding Current Path*/
}

	else if(CP=='b' || CP=='B') /*IF Current Path Subtract*/

{
	/* Start Subtract Current Path */
	printf("\n\t============================================\n\n");
	printf("\tSUBTRACT-(positive meet positive) \n\n");/*if Subtract*/   /*refer figure 3.5*/
	printf("\t_________ \n");
	printf("\t|   |   |\n");
	printf("\t+   R   -\n");
	printf("\t-   X   +\n");
	printf("\t|___|___|\n\n");

    IS=IX1-IX2; /*Checking if value of subtract became negative*/

	if(IS<0)/*If IS<0 so the subtract of var. must be change to make IS>0*/

	{
		/*Start IF Current total < 0 ,Change back to positive by invert formula*/

	ISX=IX2-IX1;/* Formula*/
	VP=ISX*RX;

	/*Display value*/

	printf("\tTotal Current for Rx = %.3f A\n",ISX);   
	printf("\tTotal Voltage for Rx = %.3f V\n\n",VP);

	goto end_CP;

	/*End IF Current total < 0 ,Change back to positive by invert formula*/

	}

	/* If IS>0 just continue the subtraction as usual*/

	VP=IS*RX; /*Formula*/

	/*Display Value*/
	printf("\tTotal Current for Rx = %.3f A\n",IS);   
	printf("\tTotal Voltage for Rx = %.3f V\n\n",VP);

	goto end_CP;

	/*End Subtract Current Path*/


}

end_CP:
	      printf("\n============================================\n\n");

	      printf("\n\n\t\t\t Do you want to change current path? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')

		 goto CP;                      
		 
		
	     else
		 break ;

		 /*End Current Path Chooser */

         }

		 printf("\n\t============================================\n\n");
		 printf("\n\n\t\t\t Do you want to repeat? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 
		 
	     else
		 goto main_D;/*Goto Submenu D */

		 /*End Superposition */

         } 

        break;                       /*Terminate the programe*/



		 case 4: 
		goto main;  /* Go to Main Menu */
		break;                       /*Terminate the programe*/



		 default:
			system ("cls"); /* Clear screen */

    

        printf("\t\t\t =================== \n"); /*Invalid selection*/
		printf("\t\t\t <INVALID SELECTION> \n");
		printf("\t\t\t =================== \n");

		system ("pause");/*Freeze Screen to make sure user paid attencion*/

			 goto main_D;/*Goto Submenu D */
			 break;                       /*Terminate the programe*/
	      }
      } break;                       /*Terminate the programe*/ /* End of Submenu D*/




	  case 5:


		   {
			   /*Start Submenu E*/

main_E:
/*Label Submenu E (goto)*/


			   system ("cls");/*Clear Screen */


		printf("\t\t\t ================ \n");
        printf("\t\t\t FAQ @ TUTORIAL \n");
		printf("\t\t\t ================ \n\n");

		/*refer figure E*/

	    printf("\t1.What prefix unit this program?\n\n");
	    printf("\t2.How can I convert SI prefix\n\n");
	    printf("\t3.Different between series and parallel \n");
		printf("\t  and how calculate the total resistance?\n\n");
		printf("\t4.What is Thevenin Circuit?\n\n");
	    printf("\t5.What is Superposition Circuit?\n\n");
  	    printf("\t6.What is Ohm Law ?\n\n");
		printf("\t7.What is current or voltage divider?\n\n");
		printf("\t8.<<<Return Main menu \n\n\n");

		printf("\tChoice: ");  
		 scanf("%d",&opt_E);
		 switch(opt_E){
			 



		  case 1:

        while(1)

			/*Forcing the programe to always true*/

	    {
			/*Start option 1*/

			system("cls");
			/*Clear Screen*/

			/*refer figure E1 */
			/*What is Prefix Unit*/

		  printf("\t\t\t===============================\n");
		  printf("\t\t\tWhat prefix unit this program ?\n");
		  printf("\t\t\t===============================\n\n");
		  printf("\tFor this programe we use unit without SI prefix. Eg :\n");
		  printf("\tWe use Voltage not Kilovolt or Milivolt, \n");
		  printf("\tohm not Kilohm or Miliohm\n");
		  printf("\tSo example if u use Kiloampere or Miliampere\n");
		  printf("\tyou need to change to Ampere only \n\n");


		  printf("\t\t\t  Table of Converter \n\n");
		  printf("\t\t\t _____________________\n");
		  printf("\t\t\t| UNIT |SYM| POWER OF |\n");
		  printf("\t\t\t|______|___|__________|\n");
		  printf("\t\t\t| Nano | n | 10^(-9)  |\n");
		  printf("\t\t\t|______|___|__________|\n");
		  printf("\t\t\t| Micro| \u00b5 | 10^(-6 ) |\n");   
		  printf("\t\t\t|______|___|__________|\n");        /*Table Prefix*/
		  printf("\t\t\t| Mili | m | 10^(-3 ) |\n");
		  printf("\t\t\t|______|___|__________|\n");
		  printf("\t\t\t| Kilo | k | 10^(+3 ) |\n");
		  printf("\t\t\t|______|___|__________|\n");
		  printf("\t\t\t| Mega | M | 10^(+6 ) |\n");
		  printf("\t\t\t|______|___|__________|\n");
		  printf("\t\t\t| Giga | G | 10^(+9 ) |\n");
		  printf("\t\t\t|______|___|__________|\n\n");
		  printf("\tPositive power of ten,move the decimal point to right \n");
		  printf("\tNegative power of ten,move the decimal point to right \n");


	      printf("\n\tDo you want to stay in this page? y/n \n");
		   printf("\tChoice: ");

          scanf(" %c",&YN); /*Input Y/N*/

         if(YN=='Y'||YN=='y')
		 continue;                       /*Repeat*/
		 
		 

	     else
		 goto main_E;/*Goto Submenu E*/

		 /*End option 1*/

         } 

        break;                       /*Terminate the programe*/




		 case 2:

        while(1)
			
			/*Forcing the programe to always true*/


	    {

			/*Start option 2*/


			system("cls");
			/*Clear Screen*/

			/*Refer Figure E2 */
			/*How to Convert*/


   printf("\t\t\t===========================\n");
   printf("\tHow can I convert SI prefix\n");
   printf("\t\t\t===========================\n\n");

   printf("\tYou can use this converter tool below:\n\n");

    printf("\tChoose to convert unit from :-\n");
	printf("\t1.Micro \n");
	printf("\t2.Mili \n");
	printf("\t3.No Prefix \n");
	printf("\t4.Kilo \n");
	printf("\t5.Mega \n");
	printf("\n\t\t\t Choise: ");

	scanf("%d",&E2); /*Input option*/

	system("cls"); /*Clear Screen*/



	if(E2==1)/*Micro*/

	{
		/*Start Micro*/
		/*Refer Figure E2.1*/

		printf("\tInput data  (Micro): ");
		scanf(" %f",&micro);


		/*Formula*/
		mili=micro*0.001;
		nopre=micro*0.001*0.001;
		kilo=micro*0.001*0.001*0.001;
		mega=micro*0.001*0.001*0.001*0.001;

		/*Display Value*/
	printf("\t%.4f mili\n",mili);
	printf("\t%.5f \n",nopre);
	printf("\t%.6f kilo\n",kilo);
	printf("\t%f mega \n",mega);
	
	}
	
	
	if(E2==2)/*Mili*/


	{
		/*Start Mili*/
		/*Refer Figure E2.2*/
	
        printf("\tInput data (Mili): ");
		scanf(" %f",&mili);
		/*Input data*/


		/*Formula*/
		micro=mili*1000;
		nopre=mili*0.001;
		kilo=mili*0.001*0.001;
		mega=mili*0.001*0.001*0.001;


		/*Display Value*/
	printf("\t%.4f micro\n",micro);
	printf("\t%.5f \n",nopre);
	printf("\t%.6f kilo\n",kilo);
	printf("\t%f mega \n",mega);
	
	/*End Mili*/

	}



	if(E2==3)/*No Prefix*/


	{

		/*Start NoPrefix*/
		/*Refer Figure E2.3*/

        printf("\tInput data (No-Prefix): ");
		scanf(" %f",&nopre);
		/*Input data*/


		/*Formula*/
		micro=nopre*1000*1000;
		mili=nopre*1000;
		kilo=nopre*0.001;
		mega=nopre*0.001*0.001;


		/*Display Value*/
	printf("\t%.4f micro\n",micro);
	printf("\t%.5f mili\n",mili);
	printf("\t%.6f kilo\n",kilo);
	printf("\t%f mega \n",mega);
	
	/*End NoPrefix*/

	}



	if(E2==4)/*Kilo*/

	{
		/*Start Kilo*/
		/*Refer Figure E2.4*/

      
	printf("\tInput data (Kilo): ");
	scanf(" %f",&kilo);
	/*Input data*/


	/*Formula*/
		micro=kilo*1000*1000*1000;
		mili=kilo*1000*1000;
		nopre=kilo*1000;
		mega=kilo*0.001;

		/*Display Value*/
	printf("\t%.4f micro\n",micro);
	printf("\t%.5f mili\n",mili);
	printf("\t%.6f \n",nopre);
	printf("\t%f mega \n",mega);

	/*End Kilo*/
	}



	if(E2==5)/*Mega*/

	{
		/*Start Mega*/
		/*Refer Figure E2.5*/
    

        printf("\tInput data (Mega) : ");
		scanf(" %f",&mega);
		/*Input data*/


		/*Formula*/
		micro=mega*1000*1000*1000*1000;
		mili=mega*1000*1000*1000;
		nopre=mega*1000*1000;
		kilo=mega*1000;


		/*Display value*/
	printf("\t%.4f micro\n",micro);
	printf("\t%.5f mili\n",mili);
	printf("\t%.6f \n",nopre);
	printf("\t%f kilo \n",kilo);
	

	/*End Mega*/

	}

	      printf("Do you want to repeat? y/n \n");
		   printf("\tChoice: ");

		   /*Input Y/N*/
          scanf(" %c",&YN);


         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
	     else
		 goto main_E;
		 /*Goto Submenu E*/


		 /*End Option 2*/
         } 
        break;                       /*Terminate the programe*/



		 case 3:

        while(1)/*Forcing the programe to always true*/

	    {

			/*Start option three*/

			
			system("cls");
			/*Clear Screen*/


			/*Display Aws */
			/*Refer figure E3 */

		  printf("\t\t\t===========================================\n");
		  printf("\t\t\tDifferent between series and parallel \n\t\t\t& how to calculate the total resistance?\n");
		  printf("\t\t\t===========================================\n\n");

		  printf("\t\t\t For DC circuit there are two type:\n\n");

		  printf("\t1. Series Circuit \n");

		  printf("\t\t\t For series ciruit you just add all resistance value,Eg:\n");
		  printf("\tR1=1000 ohm ,R2=500 ohm ,R3=250 ohm\n");
		  printf("\tSo, R1+R2+R3=1750 ohm\n\n");

		  printf("\t\t\t Voltage in series different between each resistor\n");	
		  printf("\t\t\t So, VT=V1+V2+V3+Vn\n\n");

		  printf("\t\t\t Current is always same for each resistor \n");
		  printf("\t\t\t So, It=I1=I2=I3=In\n\n");

		  printf("\n\t2. Parallel Circuit \n");
	
		  printf("\t\t\t For parallel ciruit you divide one by resistance value,\n\t\t\t add them all and one divide back by the first total,Eg: \n");
		  printf("\t\t\tR1=1000 ohm ,R2=500 ohm ,R3=250 ohm\n");
		  printf("\t\t\tSo, 1/R1 + 1/R2 + 1/R3 = 0.007 ohm\n");
		  printf("\t\t\t1/0.007 = 142.857 ohm\n\n");

		  printf("\t\t\t Voltage in parallel is always same\n");	
		  printf("\t\t\t So, VT=V1=V2=V3=Vn\n\n");

		  printf("\t\t\t Current is deferrent for each resistor \n");
		  printf("\t\t\t So, It=I1+I2+I3+In\n\n");


		  
		  /*(3) Step by step*/

		  printf("\t=========================================================\n");
		  printf("\t\t\t You also can use this program to calculate total resistance\n");
		  printf("\t\t\t We encaurage you to calculate first to total resistance\n\t\t\t for superpostion,power and thivinin circuit\n");
		  printf("\t\t\t To use this you can go :-\n");
		  printf("\t\t\t <A> (2)Series     ---> (1)Total Resistance \n");
		  printf("\t\t\t <B> (3)Parallel   ---> (2)Total Resistance \n");
		  printf("\t\t\t <C> (4)Combination---> (1)Total Combination Resistance \n");


	      printf("\n\n\tDo you want to stay in this page? y/n \n");
		  printf("\tChoice: ");
          scanf(" %c",&YN);
		  /*Input Y/N*/


         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 


	     else
		 goto main_E;
		 /*Goto submenu E*/


		 /*End Option Three*/
		 
         } 
		
        break;                       /*Terminate the programe*/





		 case 4:

        while(1)/*Forcing the programe to always true*/


	    {

			/*Start Option four*/


			system("cls");
			/*Clear screen*/


			/*What is Thevenin*/
			/*Refer figure E4*/

	      printf("\t\t\t==========================\n");
		  printf("\t\t\t What is Thevenin Circuit?\n");
		  printf("\t\t\t==========================\n\n");

          printf("\t Thevenin Theorem states that Any linear circuit containing  \n");
		  printf("\t several voltages and resistances can be replaced by just one single  \n");
		  printf("\t voltage in series with a single resistance connected across the load.  \n");
		  printf("\t In other words, it is possible to simplify any electrical circuit, no   \n");
		  printf("\t matter how complex, to an equivalent two-terminal circuit with just  \n");
		  printf("\t a single constant voltage source in series with a resistance \n");
		  printf("\t (or impedance) connected to a load   \n\n");

		  printf("\t Thevenin Theorem is especially useful in the circuit analysis of power or   \n");
		  printf("\t battery systems and other interconnected resistive circuits where it will    \n");
		  printf("\t have an effect on the adjoining part of the circuit.  \n\n");

		  printf("\t========================================================== \n");




		  /*Step by Step Thevenin*/
			
		   printf(" \t\t\t USING THIS SYSTEM \n");
	printf("\t ______[R1]___________[R4]______\n");/*Generating diagram*/
	printf("\t |              |               |\n");
	printf("\t |              |               |\n");
	printf("\t |              |               |\n");
	printf("\t|V|            |R| VTH         |R|\n");
	printf("\t|S|            |2|             |L|\n");
	printf("\t |              |               |\n");
	printf("\t |              |               |\n");
	printf("\t |_____[R3]_____|_______________|\n\n");
	
	
	printf("\t For this we need input Voltage Supply (V), \n");
	printf("\t Resistance Load (RL) and Resistance of each resistor \n");
	printf("\tIf the is more than one resistor of each line you \n\t need calculate the total resistance first \n\n  ");
	
	printf("\t____[R1A]____[R1B]____ if series so (R1A +R1B = R1)\n\n");
	
	printf("\t ______|______\n");
	printf("\t |           |\n");
	printf("\t|R|         |R|    if parallel |  1     2  |-1     \n");
	printf("\t|1|         |1|                | ___ + ___ |   =R1 \n");
	printf("\t|A|         |B|                | R1A   R1B |       \n");
	printf("\t |___________|\n\n");

	
	printf("\t \nStep 1: Open resistor load \n");
	printf("\t ______[R1]________/    _[R4]____\n");/*Generating diagram*/
	printf("\t |              |              |\n");
	printf("\t |              |              |\n");
	printf("\t |              |              |\n");
	printf("\t|V|            |R|            |R|\n");
	printf("\t|S|            |2|            |L|\n");
	printf("\t |              |              |\n");
	printf("\t |              |              |\n");
	printf("\t |_____[R3]_____|__/    _______|\n\n");

	printf("\tStep 2: Determine Voltage Thevenin (VTH) \n");/*Find V-th*/
	printf("\t and it will show Voltage Thevenin (VTH)\n\n");

	printf("\tStep 3: Determine The Resistance Thevenin (RTH) \n by shorting the Voltage supply (VS) \n\n");
	printf("\t                   ____[R1+R3]____\n");
	printf("\t                  |              |\n");
	printf("\t                  |              |\n");
	printf("\t[A]_____[R4]______|              |_____[B]\n");
	printf("\t                  |              |\n");
	printf("\t                  |              |\n");
	printf("\t                  |____[ R2 ]____|\n\n");

	
	printf("\t and it will show  Resistance Thevenin (RTH)\n\n");

	printf("\tStep 4:Draw the Thevenin Circuit \n to find Voltage Load(VL) & Current Load(IL) \n\n");
	printf("\t ______[RTH]_____\n");/*Diagram*/
	printf("\t |              |\n");
	printf("\t|V|            |L|\n");
	printf("\t|T|            |R|\n");
	printf("\t|H|             |\n");
	printf("\t |______________|\n");

	printf("\t and it will show  Voltage Load(VL) and Current Load(IL)\n\n");




	      printf("\n\n\tDo you want to stay in this page? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
/*Input Y/N*/


         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 


	     else
		 goto main_E;
		 /*Goto Submenu E*/


		 /*End of option 4*/

         } 


        break;                       /*Terminate the programe*/





		 case 5:

        while(1)/*Forcing the programe to always true*/


	    {
			/*Start option five*/


			system("cls");
			/*Clear Screen*/


			/*Display AWS*/
			/*Refer Figure E5*/

		printf("\t\t======================================\n\n");
		  printf("\t\t\t What is Superposition Circuit?\n\n");
		  printf("\t\t======================================\n\n");
		  printf("\t  The strategy used in the Superposition Theorem is  \n");
		  printf("\t  to eliminate all but one source of power within a  \n");
		  printf("\t  network at a time, using series/parallel analysis to\n");
		  printf("\t  determine voltage drops (and/or currents) within the \n");		
		  printf("\t  modified network for each power source separately. \n");
		  printf("\t  Then, once voltage drops and/or currents have been \n");
		  printf("\t  determined for each power source working separately,  \n");
		  printf("\t  the values are all “superimposed” on top of each other \n");
	      printf("\t  (added algebraically) to find the actual voltage \n");
		  printf("\t  drops/currents with all sources active. \n\n");
		
		  printf("\t========================================================== \n");


		  /*Display Step by Step*/
			

		   printf(" \t\t\t USING THIS SYSTEM \n");

		    printf(" \t First put in all input for circuit without Voltage Supply 2   \n");
			printf(" \t Second put in all input for circuit without Voltage Supply 1 \n");
			printf(" \t Then you must choose current path for the circuit \n\n");
			printf("\t    A            B\n");
	        printf("\t_________    _________\n");
	        printf("\t|   |   |    |   |   |\n");
	        printf("\t+   R   +    +   R   -\n");
	        printf("\t-   X   -    -   X   +\n");
	        printf("\t|___|___|    |___|___|\n\n");

	printf("If the current path like A (positive meet negative) enter 'A' \n");
	printf("If the current path like B (positive meet positive) enter 'B' \n");

			printf(" \t Then system will automatic calculate the  \n");
			printf(" \t 1.Total Current for Rx  \n");
			printf(" \t 2.Total Voltage for Rx  \n");



	      printf("Do you want to stay in this page? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
		  /*Input Y/N*/


         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 


	     else
		 goto main_E;
		 /*Goto Submenu E*/

		 /*End of option five*/

         } 

        break;                       /*Terminate the programe*/





		case 6:

        while(1)/*Forcing the programe to always true*/


	    {
			/*Start option six*/


			system("cls");
			/*Clear Screen*/


			/*What is ohm law*/
			/*Refer figure E6*/

    printf("\t\t\t================\n");
    printf("\t\t\tWhat is Ohms Law\n");
    printf("\t\t\t================\n\n");
	printf("\tOhm's law states that the current through a conductor between two \n");
	printf("\tpoints is directly proportional to the voltage across the two points. \n");
	printf("\tIntroducing the constant of proportionality, the resistance,one arrives\n");
	printf("\tat the usual mathematical equation that describes this relationship\n\n");


	printf("\t\tI = V / R\n\n");


	printf("\tI = current\tunit = amperes\n");
	printf("\tV = voltage\tunit =  volts\n");
	printf("\tI = resistance\tunit =  ohms\n\n\n");


	

	      printf("Do you want to stay in this page? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
		  /*Input Y/N*/


         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 

	     else

		 goto main_E;
		 /*Return to Submenu E*/


		 /*End of option six*/
         } 

        break;                       /*Terminate the programe*/




		case 7:

        while(1)/*Forcing the programe to always true*/


	    {
			/*Start option seven*/


			system("cls");
			/*Clear Screen*/


			/*What is Divider*/
			/*Refer figure E7*/

		   printf("\t\t\t======================================\n");
		  printf("\t\t\tWhat is Voltage or current divider ?\n");
		  printf("\t\t\t======================================\n\n");
		  printf("\t\t\t\t<Voltage divider>\n");
		  printf("\t\tIn a series circuit,voltage is divided from each resistor\n");
		  printf("\t\tV=V1+V2+Vn\n");
		  printf("\t\tFormula:\n");
		  printf("\t\tVR1=VS*(R1/RT)\n\n");
		  printf("\t\t\t\t<Current divider>\n");
		  printf("\t\tIn a parallel circuit,current is divided from each branch\n");
		  printf("\t\tI=I1+I2+I3\n");
		  printf("\t\tFormula:\n");
		  printf("\t\t Ir1 = (Rt/R1)*It\n\n\n");


		  /*Step by step*/
			

    printf("\t\t=========================================================\n");
    printf("\t\t\tGuide to use the parallel circuit programe\n");
    printf("\t\t=========================================================\n\n");
    printf("\t=> To help users to understand more about our programe,\n");
	printf("\t   we suggest them to input the data based on any parallel circuit question\n\n");
	printf("\t=> How to calculate supply current ?\n");
	printf("\t\tuse => Is = I1 + I2 + I3........\n");
	printf("\t\tor => Is = VS/Rt \n\n");
	printf("\t=> How to calculate supply voltage ?\n");
	printf("\t\tor => Vs = IsRt \n\n");
	printf("\t=> Symbol meaning \n\n");
	printf("\t\tIs = Supply current\n\t\tVS = Supply voltage\n\t\tRt = Total resistance\n\n");
	printf("\t=> What is resistor 1,resistor 2,resistor 3 and... mean ?\n");
	printf("\t\tIts mean the resistor that are connect in parallel in one circuit\n\n");




	      printf("Do you want to stay in this page? y/n \n");
		   printf("\tChoice: ");
          scanf(" %c",&YN);
		  /*Input Y/N*/


         if(YN=='Y'||YN=='y')

		 continue;                       /*Repeat*/
		 


	     else

		 goto main_E;
		 /*Return to submenu E*/

		 /*End of option seven */


         } 

        break;                       /*Terminate the programe*/





	     case 8: 
		goto main;  /*Return to Main Menu*/
		break;                       /*Terminate the programe*/
		 


		 default:
			 /*If other option*/

			 system ("cls");
			 /*Clear screen*/


       

		/*Display Invaid*/

        printf("\t\t\t =================== \n"); 
		printf("\t\t\t <INVALID SELECTION> \n");
		printf("\t\t\t =================== \n");

		system ("pause");
		/*Pause Screen until get input*/


			 goto main_E;
			 /*Return to Submenu E*/


			 break;                       /*Terminate the programe*/
	      }
		  
/*End of Submenu E*/
      } 
	  
	  break;                       /*Terminate the programe*/


	  /*Start End Program Credit*/

		case 6:

		system ("cls");
		/*Clear Screen*/

		/*Display Credit*/
		

	    printf("\t\t\t =================================================\n"); 
		printf("\t\t\t         <Thank you for using our program>       \n");
		printf("\t\t\t              Azhad,Afif,Arif,Daniel\n");
		printf("\t\t\t              GMI Mechatronic 1/2019. \n");
		printf("\t\t\t =================================================\n");  
	    break;                       /*Terminate the programe*/ 
 



       default: 
		   /*If input other than 1-6*/


		  system ("cls");
		  /*Clear Screen*/


        

		/*Display Invalid*/

        printf("\t\t\t =================== \n"); 
		printf("\t\t\t <INVALID SELECTION> \n");
		printf("\t\t\t =================== \n");


		system ("pause");
		/*Pause Screen until get input*/

		   break;                       /*Terminate the programe*/
       } 
   }
   while (opt_m != 6); 

   /*End Programe*/
   /*End of Main Menu*/
   /*At the end of the day the program will end*/
   /*All code can be found at :
   https://github.com/DanielAmani/DC-101-GMI-PBL1/blob/master/PBL%20Finele.cpp */
return 0;            


} 
