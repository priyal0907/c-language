#include<stdio.h>

int main(){
	
	int a;
	
	printf("1.Prepaid\n");
	printf("2.Postpaid\n\n");
	
	printf("Enter selection : ");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("1.Rs 149 Airtel Recharge Pack\n");
			printf("2.Rs 398 Airtel Recharge Pack\n");
			printf("3.Rs. 75 Jio Recharge Pack\n");
			printf("4.Rs 153 Jio Recharge Pack\n\n\n\n");
			
			
			
	        printf("Enter selection : ");
	        scanf("%d",&a);
	        
	        switch(a){
	        	
	        	case 1:
	        			printf("The Rs 149 Airtel recharge has a period of 28 days for Airtel prepaid customers. This package includes unlimited phone calls (local/STD) to all operators, a total of 300 SMSs, 2GB of storage, and a trial version access to Airtel Xstream, Wynk Music, and Prime Video Mobile edition\n.");
	            case 2:
	            		printf("The Rs 398 Airtel recharge pack includes 2GB of daily internet, unlimited voice calls, 100 SMSes per day, a membership to Wynk Music as well as Airtel Xstream, and also free Hellotunes.\n");
	            case 3:
	            		printf("The best all-in-one package is the Rs 75 Jio Phone recharge pack. It tries to compete with the former Rs 49 scheme in several ways. For 28 days, it provides 0.1GB of high-speed internet a day and 500 mins of non-Jio voice calls. It further includes 50 SMS messages plus unlimited Jio-to-Jio and also landline voice calls.\n");
	            case 4:
	            		printf("For JioPhone subscribers, Reliance Jio has launched a Rs 153 prepaid package. The pack has a slew of intriguing features. To begin, it provides 1.5GB of data each day. The pack has a 28-day validity period and a total storage capacity of 42GB. In addition, the recharge package includes 100 SMS a day and unrestricted Jio-to-Jio voice calls. Consumers with non-Jio numbers, on the other hand, must purchase a top-up coupon that ranges from Rs 10 to Rs 1,000.\n\n\n\n");
	            		
	        break;
			
			}
		    break;	
			
			
		
		case 2:
			printf("1.Rs.401 per month 50GB data\n");
			printf("2.Rs.501 per month 90GB data\n");
			printf("3.Rs.901 per month unlimited \n");
			 
			break;
			
		default :
			printf("invalid offer");
			break;
			
	}
	
	
	
	
	
	
	return 0;
	
}
