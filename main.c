#include <stdio.h>
#include<string.h>
#define SIZE=30
const char*Phish[SIZE]={"Amazon","SBI","Official","Bank","Security","Urgent","Alert","Important","Information","eBay","Password","credit","verify","confirm","account","bill","immediately","address","telephone","SSN","Charity","Check","Secure","Personal","Confidential","ATM","Warning","Fraud","Citibank","IRS","Flipkart"}
int point [SIZE]={"2","3","3","3","1","2","2","1","1","2","2","3","1","1","1","2","2","3","1","2","3","2","1","2","2","3","2","3","2","3","3","2"}
int totalPoints[SIZE];
int main()

{
   char filename[100] ;
   char message[5000];
   char*temp[100];
   int i;
   int counter=0;
   int words=0;
   char*tokenPtr;
   printf("Enter the name of the file of the read/scan:");
   scanf("%s",filename);
   if((cPtr=fopen(filename,"rb"))==NULL)
   {
       printf("File could not be located.\n");
   }
   else
    { fgets(message,5000,cPtr);
   tokenPtr=strtok(message,"   ");
   temp[0]=tokenPtr;

   }
    return 0;
}
