#include<stdio.h>  
#include<string.h>  
int main()  
{  
       int key,i;  
      char data[200];  

      printf("\nEnter the alphabetical plain text in lowercase to be encrypted:\n");  
      gets(data);  //plain text.

        key=3;  //key.

      if(key>26)
      key=key % 26; //0<=key<26.

      for(i=0;i<strlen(data);i++)  
      {     
       if(data[i]==' ')   
        {  
          continue;
        }
       else  
        {   
          if(data[i]>= 'x')  
           {  
            data[i]=data[i]-26;  
            }  

           data[i]=data[i]+key;  
          }  
     }  
      printf("Your cipher text is: %s\n",data); //cipher text.
        
    for(i=0;i<strlen(data);i++)  
      {     
       if(data[i]==' ')   
        {  
          continue;
        }
       else  
        {   
          if(data[i]<= 'c')  
           {  
            data[i]=data[i]+26;  
            }  

           data[i]=data[i]-key;  
          }  
     }  
        printf("Your text is: %s\n",data);
         
      return 0;
  }  
