




// #include <stdio.h>
// int main()
// {
// int *ptr;
// int x;
// ptr = &x;
// *ptr = 0;
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);
// *ptr += 5;// precedence is zydaa for *
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);
// *ptr++;//precendence is zyda for ++
// printf(" x = %d\n", x);
// printf(" *ptr = %d\n", *ptr);
// return 0;
// }



// #include<stdio.h>
// unsigned long int fun(unsigned long int n) 
// {
// unsigned long int i, j=0, sum = 0;
// for( i = n; i > 1; i = i/2)
// j++;
// for( ; j > 1; j = j/2)
// sum++;
// return sum;
// }
// int main()
// {
//     printf("%d",fun(2))
// }

//#include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[]="hello";
//     char s2[]={'h','e','l','l','o','\0'};
//     printf("Length of s1 : %lu \nLenght of s2 : %lu \n",strlen(s1),strlen(s2));
//     printf("Size of s1 : %lu \nSize of s2 : %lu \n",sizeof(s1)/sizeof(s1[0]),sizeof(s2)/sizeof(s2[0]));
//     return 0;
//}

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//   int x=0,i,j;
//   char ch;
//   //char** a = NULL; 
//   char**a=(char **)malloc((x+1)*sizeof(char*));
//   do
//   {
//     printf("Press 'A' : To inssert a student name\n");
//     printf("Press 'B' : To delete a name\n");
//     printf("Press 'C' : To print the names\n");
//     printf("Press 'N' : To terminate the program\n");
//     printf("Enter your choice : ");
//     scanf("%c",&ch);
//     fflush(stdin);
//     switch (ch)
//     {
//         case 'A':
//             x++;
//             a=(char**)realloc(a,x*sizeof(char*));
//             //a = (char**)realloc(a, (x + 1) * sizeof(char*)); 
//             a[x]=(char*)calloc(100,sizeof(char*));
//             printf("Enter the name of student : ");
//             fgets(a[x],100,stdin);
//             a[x][strcspn(a[x],"\n")]='\0';
//             //x++;
//             fflush(stdin);
//             break;
//         case 'B':
//             if (x==0)
//                 printf("No names found\n");
//             else
//             {
//                 printf("Enter the name of student to delete : ");
//                 char* s;
//                 fgets(s,100,stdin);
//                 s[strcspn(s,"\n")]='\0';
//                 for(i=0; i<x; i++)
//                 {
//                     if(strcmp(s,a[i])==0)
//                     {
//                         a[i]=NULL;
//                         free(a[i]);
//                         for (j=i; j<x-1; j++)
//                             a[j]=a[j+1];
//                         x--;
//                         a=(char**)realloc(a,x*sizeof(char*));
//                     }
//                 }
//             }
//             break;
//         case 'C':
//             for (i=0; i<x;i++)
//             {
//             printf("%s",a[i]);
//             printf("\n");
//             }
//             break;
//     }
//   }
//   while( ch!='N');
//   for (i=0; i<x; i++)
//     {
//         a[i]=NULL;
//         free(a[i]);
//     }
//   a=NULL;
//   free(a);
//   return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int strend(char s[],char t[])
// {
//     int i=0,j=0,k,l;
//     while(s[i]!='\0')
//     i++;
//     while(t[j]!='\0')
//     j++;
//     for (k=i-1,l=j-1; k>=i-j, l>=0; k--,l--)
//     {
//         if (s[k]!=t[l])
//             return 0;
//     }
//     return 1;
// }
// int main()
// {
// char s[100],t[100];
// printf("Enter the sentence : ");
// fgets(s,100,stdin);
// s[strcspn(s,"\n")]=0;
// printf("Enter the sentence to search for : ");
// fgets(t,100,stdin);
// t[strcspn(t,"\n")]=0;
// int ans=strend(s,t);
// printf("%d",ans);
// }

//ques6
// #include<stdio.h>
// void concat(char *s, char *t)
// {
//     int i=0,j=0,k;
//     while (s[i]!='\0')
//         i++;
//     while(t[j]!='\0')
//         j++;
//     char c[i+j];
//     for (k=0; k<i; k++)
//         c[k]=s[k];
//     for (k=0; k<j;k++)
//         c[i+k]=t[k];
//     c[i+j]='\0';
//     printf("Concatenated string : %s",c);
// }
// int main()
// {
//     char s[100],t[100];
//     printf("Enter the first sentence : ");
//     scanf("%[^\n]s",s);
//     fflush(stdin);
//     printf("Enter the second setence : ");
//     scanf("%[^\n]s",t);
//     concat(s,t);
//     return 0;
// }

//ques5
// #include<stdio.h>
// int main()
// {
//     char s[100];
//     printf("Enter your full name: ");
//     fgets(s,100,stdin);
//     int i=0,j=0;
//     while(s[j]!='\0' && s[j]!='\n')
//     {
//         if (s[j]!=' ')
//             i++;
//         j++;
//     }
//     printf("Length of name : %d",i);
//     return 0;
// }

// ques4
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     printf("Enter a no. : ");
//     scanf("%d",&n);
//     int temp=n;
//     if (n<1000 || n>9999)
//         printf("Enter a 4 digit no.");
//     else
//     {
//         int x=temp%10;
//         temp/=10;
//         int y=temp%10;
//         temp/=10;
//         int a=temp%10;
//         temp/=10;
//         int b=temp%10;
//         temp/=10;
//         if (x==y && a==b)
//         {
//             float p=sqrt(n);
//             float q=p*p;
//             if((float)n==q)
//                 printf("The no. is a perfect square");
//             else
//                 printf("The no. is not a perfect square");
//         }
//         else
//             printf("Enter the no. in the required pattern");
//     }
//     return 0;
// }

//ques1
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     srand(time(0));
//     int x,y;
//     printf("Enter the lower boundary : ");
//     scanf("%d",&x);
//     printf("Enter the upper boundary : ");
//     scanf("%d",&y);
//     int z=rand()%(y-x+1)+x;
//     printf("Random no. generated : %d",z);
//     return 0;
// }
// struct point{int x,y;};
// struct rect{struct point bl,tr;};
// #include<stdio.h>
// int main()
// {
//     struct rect r;
//     r.bl={1,1};
//     r.tr{2,2};
//     int area=rectarea(&r);
//     printf("area=%d",area);
//     return 0;
// }
// int rectarea(struct rect *r)
// {
// }

// struct dis{int x,y;}p1,p2;
// #include<stdio.h>
// #include<math.h>
// float find(struct dis *p1, struct dis *p2)
// {
//     return sqrt(pow(((*p2).x-(*p1).x),2)+pow(((*p2).y-(*p1).y),2));
// }
// int main()
// {
//     scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
//     float ans=find(&p1,&p2);
//     printf("ans=%f",ans);
//     return 0;
// }

// struct dist{int x,y;}p1,p2;
// #include<stdio.h>
// #include<math.h>
// float find(struct dist p1, struct dist p2)
// {
//     float a=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
//     return a;
// }
// int main()
// {
//     scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
//     float ans=find(p1,p2);
//     printf("distance=%f",ans);
//     return 0;
// }

// struct dis{int x,y;}p1,p2;
// #include<stdio.h>
// #include<math.h>
// int main(){
//     scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
//     printf("distance=%f",sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
//     return 0;
// }

// struct stud{char eno[10]; char name[30]; long int ph; float cgpa;};
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     struct stud s1={"241b211","whateva",2832373618, 9.66};
//     struct stud s2,s3;
//     strcpy(s2.eno,"241b567");
//     strcpy(s2.name,"parineeti");
//     s2.ph=5246237532;
//     s2.cgpa=45.99;
//    printf("%s %s %ld %f\n",s1.eno,s1.name,s1.ph,s1.cgpa);
//     printf("%s %s %ld %f",s2.eno,s2.name,s2.ph,s2.cgpa);
//     printf("\ndetails for s3:\n");
//     printf("eno=");
//     //sfgets(s3.eno,7,stdin);
//     scanf("%[^\n]s",s3.eno);
//     fflush(stdin);
//     printf("name=");
//     scanf("%[^\n]s",s3.name);
//     // fgets(s3.name,20,stdin);
//     fflush(stdin);
//     printf("ph=");
//     scanf("%ld",&s3.ph);
//     printf("cgpa=");
//     scanf("%f",&s3.cgpa);
//     printf("\n%s %s %ld %f",s3.eno,s3.name,s3.ph,s3.cgpa);
// }