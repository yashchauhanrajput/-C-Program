/*30. Write a C program to do the following: 
a) Create a text file 'input.txt' 
b) Print the contents of file in reverse order */
#include<stdio.h>
int main()
{
      FILE *fp;
      char ch;
      int i,pos;
      fp=fopen("input.txt","w");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      //printf("Current postion is %d\n",pos);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}
