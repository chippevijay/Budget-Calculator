#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add_income();
void add_expense();
void view_incomeandExpense();
void modify_information();
void net_income();
struct totalIncome{
	 double donations;
	 double grants;
	 double miscellaneous;
}tI1;
struct totalExpense{
	 double accounting;
	 double bankCharges;
	 double boardExpense;
	 double conferences;
	 double liabilityInsurance;
	 double miscellaneous;
	 double equipment;
	 double officeSupplies;
	 double payrollExpenses;
	 double postageAndShipping;
	 double printing;
	 double rent;
	 double travel;
	 double utilities;
	 double internet;
}tE1;
double sumIncome , sumExpense , netIncome;
FILE *vijay;

int main()
{
int opt;

printf("\t\t ##### WELCOME TO BUDGET CALCULATOR ##### ");
while(1){

printf("\n");
printf("\n-----------------------------------------------------------------------------");
printf("\npress 1 for adding Income");
printf("\npress 2 for adding Expense");
printf("\npress 3 for  Net Income");
printf("\npress 4 for viewing Income and Expense");
printf("\npress 5 for modifying");
printf("\npress 6 to exit ");
printf("\n-----------------------------------------------------------------------------");
scanf("%d",&opt);
switch(opt)
{
	case 1 :add_income();
	         break;
	case 2 :add_expense();
	         break;
	case 3 :net_income();
	         break;
	case 4 :view_incomeandExpense();
	          break;
    		           
	case 5 :modify_information();
	         break;         
	case 6 :printf("\n    ####-THANK YOU-#### ");
	        exit(0);
	        break;
	default :printf("\nEnter the correct option");        
			          
   	getch();		          
}
}
}


void add_income()
{
    
	printf("\nEnter income on donations");
	scanf("%lf",&tI1.donations);
	
	printf("\nEnter income on Grants");
	scanf("%lf",&tI1.grants);
	
	printf("\nEnter income on Miscellaneous");
	scanf("%lf",&tI1.miscellaneous);
	
	sumIncome = tI1.donations+tI1.grants+tI1.miscellaneous;
	printf("\n   Toatl income = %lf",sumIncome);  
	
	vijay = fopen("income_info.txt","a"); 
	fprintf(vijay,"\t\t@@INFORMATION OF INCOME@@ \n");
	fprintf(vijay,"Donations=%lf\n",tI1.donations);
	fprintf(vijay,"Grants=%lf\n",tI1.grants);
	fprintf(vijay,"Miscellaneous=%lf\n",tI1.donations);
	fclose(vijay);
	
	vijay = fopen("sum_income.txt","w");
	fprintf(vijay,"TotalIncome=%lf\n",sumIncome);
	fclose(vijay);
}

void add_expense()
{
	printf("\nEnter Expense on Accounting charges");
	scanf("%lf",&tE1.accounting);
	
	printf("\nEnter Expense on Bank Charges");
	scanf("%lf",&tE1.bankCharges);
	
	printf("\nEnter Expense on Board Expense");
	scanf("%lf",&tE1.boardExpense);
	
	printf("\nEnter Expense on conferences Expenses");
	scanf("%lf",&tE1.conferences);
	
	printf("\nEnter Expense on Liability Insurance");
	scanf("%lf",&tE1.liabilityInsurance);
	
	printf("\nEnter Expense on miscellaneous");
	scanf("%lf",&tE1.miscellaneous);
	
	printf("\nEnter Expense on Office Equipment charges");
	scanf("%lf",&tE1.equipment);
	
	printf("\nEnter Expense on  Office supplies charges");
	scanf("%lf",&tE1.officeSupplies);
	
	printf("\nEnter Expense on  payroll charges");
	scanf("%lf",&tE1.payrollExpenses);
	
	printf("\nEnter Expense on Postage And Shipping Charges");
	scanf("%lf",&tE1.postageAndShipping);
	
	printf("\nEnter Expense on printing Charges");
	scanf("%lf",&tE1.printing);
	
	printf("\nEnter Expense on Rent charges");
	scanf("%lf",&tE1.rent);
	
	printf("\nEnter Expense on Travel Charges");
	scanf("%lf",&tE1.travel);
	
	printf("\nEnter Expense on  Utilities Charges");
	scanf("%lf",&tE1.utilities);
	
	printf("\nEnter Expense on  Internet Charges");
	scanf("%lf",&tE1.internet);
	
	sumExpense = tE1.accounting+tE1.bankCharges+tE1.boardExpense+tE1.conferences+tE1.liabilityInsurance+tE1.miscellaneous+tE1.equipment+tE1.officeSupplies+tE1.payrollExpenses+tE1.postageAndShipping+tE1.printing+tE1.rent+tE1.travel+tE1.utilities+tE1.internet;
	printf("\nTotal Expense = %lf",sumExpense);
	
	
	vijay = fopen("Expense_info.txt","a");
	fprintf(vijay,"\t\t@@INFORMATION OF EXPENSE@@");
	fprintf(vijay,"Accounting charges=%lf\n",tE1.accounting);
    fprintf(vijay,"Bank charges=%lf\n",tE1.bankCharges);
    fprintf(vijay,"Board expense=%lf\n",tE1.boardExpense);
    fprintf(vijay,"conferences=%lf\n",tE1.conferences);
    fprintf(vijay,"Liability Insurance=%lf\n",tE1.liabilityInsurance);
    fprintf(vijay,"Miscellaneous=%lf\n",tE1.miscellaneous);
    fprintf(vijay,"office Equipment=%lf\n",tE1.equipment);
    fprintf(vijay,"Office supplies=%lf\n",tE1.officeSupplies);
    fprintf(vijay,"Payroll Expense =%lf\n",tE1.payrollExpenses);
    fprintf(vijay,"Postage and shipping=%lf\n",tE1.postageAndShipping);
    fprintf(vijay,"Printing Expense=%lf\n",tE1.printing);
    fprintf(vijay,"Rent charges=%lf\n",tE1.rent);
    fprintf(vijay,"Travel charges=%lf\n",tE1.travel);
    fprintf(vijay,"Utilities charges=%lf\n",tE1.utilities);
    fprintf(vijay,"internet charges=%lf\n",tE1.internet);
    fclose(vijay);
    
	vijay = fopen("sum_expense.txt","w");
    fprintf(vijay,"Total Expwnse=%lf\n",sumExpense);
	fclose(vijay);
    
}



void modify_information()
{
	printf("\n");
	int op;
	printf("\npress 1 for modifying incomes");
	printf("\npress 2 for modifying expenses");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			int v;
			printf("\npress 1 for modifying Donations");
			printf("\npress 2 for modifying Grants");
			printf("\npress 3 for modifying Miscellaneous");
			printf("\npress 4 for returning to main menu");
			scanf("%d",&v);
			switch(v)
			{
				case 1 : printf("\nEnter donations for modifying");
				         scanf("%lf",&tI1.donations);
				         break;
			    case 2 : printf("\nEnter grants for modifying");
			             scanf("%lf",&tI1.grants);
			             break;
			    case 3 : printf("\nEnter miscellaneous for modifying");
				         scanf("%lf",&tI1.miscellaneous);     
						 break;   
			         
			}
			sumIncome = tI1.donations+tI1.grants+tI1.miscellaneous;
	                printf("\nToatl income = %lf",sumIncome);
					break;
	                
	    case 2 :
	             int i;
			   printf("\npress 1 for modifying accounting charges");
			   printf("\npress 2 for modifying bank charges");
			   printf("\npress 3 for modifying Board expenses");
			   printf("\npress 4 for modifying conferences expenses");
			   printf("\npress 5 for modifying liability charges");
			   printf("\npress 6 for modifying miscellaneous");
			   printf("\npress 7 for modifying office equipment charges");
			   printf("\npress 8 for modifying office supplies");
			   printf("\npress 9 for modifying payroll Expenses");
			   printf("\npress 10 for modifying postage and shipping");
			   printf("\npress 11 for modifying printing");
			   printf("\npress 12 for modifying rent");
			   printf("\npress 13 for modifying travel");
			   printf("\npress 14 for modifying utilities");
			   printf("\npress 15 for modifying internet");
			   scanf("%d",&i);
			   switch(i)
			   {
			   	case 1 :printf("\nEnter Accounting charges for modifying");
	                    scanf("%lf",&tE1.accounting);
	                    break;
	            case 2 : printf("\nEnter Bank Charges for modifying");
	                     scanf("%lf",&tE1.bankCharges); 
						 break;    
				case 3 :printf("\nEnter Board Expense for modifying");
	                    scanf("%lf",&tE1.boardExpense);	
						break;
				case 4 :printf("\nEnter conferences Expenses for modifying");
	                    scanf("%lf",&tE1.conferences);
						break;
				case 5 :printf("\nEnter Liability Insurance for modifying");
	                     scanf("%lf",&tE1.liabilityInsurance);
						 break;
				case 6 :printf("\nEnter miscellaneous for modifying");
	                     scanf("%lf",&tE1.miscellaneous);		 			 
	                     break; 
				case 7 :printf("\nEnter Office Equipment for modifying");
	                     scanf("%lf",&tE1.equipment);		 			
	                     break;
	            case 8 :printf("\nEnter Office supplies for modifying");
	                    scanf("%lf",&tE1.officeSupplies);
						break; 
				case 9 :printf("\nEnter payroll Expenses for modifying");
	                    scanf("%lf",&tE1.payrollExpenses);
						break;
				case 10 :printf("\nEnter Postage And Shipping Charges for modifying");
	                     scanf("%lf",&tE1.postageAndShipping);
						 break;
				case 11 :printf("\nEnter printing Charges");
	                     scanf("%lf",&tE1.printing);
						 break;
				case 12	:printf("\nEnter Rent charges for modifying");
	                    scanf("%lf",&tE1.rent);
						 break;
				case 13 :printf("\nEnter Travel Charges for modifying");
	                    scanf("%lf",&tE1.travel);
						break;
				case 14 :printf("\nEnter Utilities Charges for modifying");
	                     scanf("%lf",&tE1.utilities);
						 break;
				case 15 :printf("\nEnter Internet Charges for modifying");
	                      scanf("%lf",&tE1.internet);
						  break;
				default :printf("\n Enter the correct option");		  		 			 	 				    
	 			}
    sumExpense = tE1.accounting+tE1.bankCharges+tE1.boardExpense+tE1.conferences+tE1.liabilityInsurance+tE1.miscellaneous+tE1.equipment+tE1.officeSupplies+tE1.payrollExpenses+tE1.postageAndShipping+tE1.printing+tE1.rent+tE1.travel+tE1.utilities+tE1.internet;
	printf("\n\tTotal Expense = %lf",sumExpense); 
	}
	
}


void view_incomeandExpense(){
	int j;
	printf("press 1 for viewing income\n");
	printf("press 2 for viewing expense\n");
	scanf("%d",&j);
	switch(j)
	{
		case 1:     char vinay;
                 	vijay = fopen("income_info.txt","r"); 
                	if(vijay==NULL){
	             	printf("Unable to open the file");
                      	}else{
	            	while(!feof(vijay)){
		        	vinay = fgetc(vijay);
		            	printf("%c",vinay);
		            }
		            fclose(vijay);
	                }
	 
	
		            char chinna;
	                 vijay = fopen("sum_income.txt","r"); 
	                if(vijay==NULL){
		            printf("Unable to open the file");
	                 }else{
		             printf("\n");
		             while(!feof(vijay)){
			          chinna = fgetc(vijay);
			         printf("%c",chinna);
		            }
		            fclose(vijay);
	                } 
	                break;
	    case 2 :    char nay;
	                vijay = fopen("expense_info.txt","r");
					if(vijay==NULL){
					printf("Unable to open the file");
					}else{
					while(!feof(vijay)){
					nay = fgetc(vijay);
					printf("%c",nay);
					}
					fclose(vijay);
					}
	
					char chiNna;
					vijay = fopen("sum_expense.txt","r"); 
					if(vijay==NULL){
					printf("Unable to open the file");
					}else{
					printf("\n");
					while(!feof(vijay)){
					chiNna = fgetc(vijay);
					printf("%c",chiNna);
					}
					fclose(vijay);
					}     
					break;    
	}
}




void net_income()
{
	netIncome = sumIncome - sumExpense;
	printf("\n\tNet Income = %lf",netIncome);
	
	vijay = fopen("view Income.txt","w"); 
    fprintf(vijay,"Net Income =%lf\n",netIncome);
	fclose(vijay);	
}




