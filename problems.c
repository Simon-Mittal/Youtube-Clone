





// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int n,min=INT_MAX,max;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (int i=0; i<n; i++)
//     {
//         if (a[i]<min)
//         {
//             min=a[i];
//             max=INT_MIN;
//             for(int j=i; j<n; j++)
//             {
//                 if (a[j]>max)
//                     max=a[j];
//             }
//         }
//     }
//     if(max==INT_MIN)
//     printf("No");
//     else
//     {printf("Profit:%d\n",max-min);
//     printf("Buy at : %d\n",min);
//     printf("Sell at : %d\n",max);}
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int l,u,k=0;
//     scanf("%d%d",&l,&u);
//     int a[u-l+1];
//     int p[u-l+1];
//     for (int i=0; i<u-l+1; i++)
//     {
//         a[i]=l+i;
//         int temp=a[i],sum=0;
//         for (int j=1; j<=temp/2; j++)
//         {
//             if (temp%j==0)
//                 sum+=j;
//         }
//         if (sum==temp)
//         {
//             p[k]=a[i];
//             k++;
//         }
//     }
//     printf("All perfect nos. within given range:\n");
//     for (int i=0; i<k; i++)
//     printf("%d\t",p[i]);
//     return 0;
// }

// //armstrong no.
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int l,u,k=0;
//     scanf("%d%d",&l,&u);
//     int a[u-l+1];
//     int aa[u-l+1];
//     for (int i=0; i<u-l+1; i++)
//     {
//             a[i]=l+i;
//             int temp=a[i],c=0,sum=0;
//             while(temp!=0)
//             {
//                 temp/=10;
//                 c++;
//             }
//             temp=a[i];
//             while(temp!=0)
//             {
//                 int n=temp%10;
//                 sum+=pow(n,c);
//                 temp/=10;
//             }
//             if (a[i]==sum)
//             {
//                 aa[k]=a[i];
//                 k++;
//             }
//     }
//     printf("Armstrong no. in given range : \n");
//     for (int i=0; i<k; i++)
//     {
//         printf("%d\t",aa[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,n,k=0;
//     int p[10];
//     for (int i=0; i<10; i++)
//     p[i]=0;
//     scanf("%d%d",&a,&n);
//     int b[n-a+1];
//     int x[n-a+1];
//     printf("pallimndromes are :\n ");
//     for (int i=0; i<n-a+1; i++)
//     {
//         b[i]=a+i;
//         int temp=b[i],rev=0;
//         while(temp!=0)
//         {
//             rev=rev*10+temp%10;
//             temp/=10;
//         }
//         if (rev==b[i])
//         {
//             printf("%d\t",rev);
//             x[k]=b[i];
//             k++;
//         }
//     }
//     for(int i=0; i<k; i++)
//     {
//         int temp=x[i];
//         while(temp!=0)
//         {
//             int n=temp%10;
//             temp/=10;
//             for(int i=0; i<10; i++)
//             {
//                 if (i==n)
//                     p[i]++;
//             }
//         }
//     }
//     int max=0,y;
//     for(int i=0; i<10; i++)
//     {
//         if (p[i]>max)
//         {
//             max=p[i];
//             y=i;
//         }
//     }
//     printf("\nmax freq element=%d",y);
//     printf("\nfrequency is =%d",max);
//     return 0;   
// }

//longest contiguous decreasing array and starting index (galat)
// #include<stdio.h>
// int main()
// {
//     int n,c=0;
//     scanf("%d",&n);
//     int a[n], x;
//     for (int i=0; i<n; i++)
//             scanf("%d",&a[i]);
//     for (int i=0; i<n-1; i++)
//     {
//         if (a[i]>a[i+1])    
//         {
//         c++;
//         if (c==1)
//             x=i;
//         }             
//         else 
//         {
//             if (c>0)
//                 {
//                     c=0;
//                 }
//             else
//                 continue;
//         }
//     }
//     printf("Longest array size is %d and starting index is %d",c+1,x);
//     return 0;
// }

//max and min occuring char with frequency
// #include<stdio.h>
// #include<string.h>
// #include<limits.h>
// int main()
// {
//     char s[100];
//     int max=0,min=INT_MAX;
//     fgets(s,100,stdin);
//     char lf,hf;
//     s[strcspn(s,"\n")]='\0';
//     int x=strlen(s); 
//     for(int i=0; i<x; i++)
//     {
//         int c=0;
//         for (int j=0; j<x; j++)
//         {
//             if (s[i]==s[j])
//                 c++;
//         }
//         if ((c)>max)
//             {
//                 max=c;
//                 hf=s[i];
//             }
//         if ((c)<min)
//        {
//         min=c;
//         lf=s[i];
//        } 
//     }
//     printf("highest = %c %d\n",hf,max);
//     printf("lowest = %c %d",lf,min);
//     return 0;
// }

//first and last occuring index of a char
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100],a;
//     int i,j,c;
//     fgets(s,100,stdin);
//     scanf("%c",&a);
//     s[strcspn(s,"\n")]='\0';
//     int x=strlen(s);
//     for (i=0; i<x;i++)
//        {
//         if (a==s[i])
//             break;
//        }
//     for (j=x-1; j>=0;j++)
//        {
//         if (a==s[j])
//             break;
//        }
//     printf("%d %d",i,j);
//     return 0;
// }

//deletion of repeated chars
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100];
//     fgets(s,100,stdin);
//     s[strcspn(s,"\n")]='\0';
//     char t[100];
//     int k=1;
//     t[0]=s[0];
//     t[1]='\0';
//     for (int i=1; i<strlen(s); i++)
//     {
//     int c=0;
//      for (int j=0; j<strlen(t); j++)
//      {
//         if (s[i]==t[j])
//             c++;
//      }  
//      if (c==0)
//      {
//         t[k]=s[i];
//         k++;
//      }   
//     }
//     printf("%s",t);
//     return 0;
// }

//right rotate
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[100],t[100];
//     fgets(s,100,stdin);
//     s[strcspn(s,"\n")]='\0';
//     fgets(t,100,stdin);
//     t[strcspn(t,"\n")]='\0';
//     int x=strlen(t);
//     int c=0;
//     if (strlen(s)!=strlen(t))
//     printf("Unequal");
//     else{
//         if(strcmp(s,t)==0)
//             {
//                 printf("Equal");
//                 printf("\nRotations = 0");
//             }
//             else       
//         {
//                 while(x)
//             {
//                 int len=strlen(t);
//                 char a=t[len-1];
//                 for (int i=len-1; i>0; i--)
//                     t[i]=t[i-1];
//                 t[0]=a;
//                 c+=1;
//                 if (strcmp(s,t)==0)
//                 {
//                     printf("Equal");
//                     printf("\nRotations = %d",c);
//                     return 0;
//                 }
//                 x--;               
//             }
//            printf("Unequal");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//    int i,n,j;
//    scanf("%d",&n);
//     int a[n];
//     for (i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for (i=0; i<n-1; i++)
//     {
//         for (j=0; j<n-i-1; j++)
//         {
//             if (a[j]<a[j+1])
//             {
//                 int temo=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temo;
//             }
//         }
//     }
//     for (i=0; i<n; i++)
//     {
//         if (a[i]!=a[i+1])
//             {
//             printf("%d",a[i+1]);
//             break;
//             }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n,i,count=0;
//     scanf("%d",&n);
//     int a[n];
//     for (i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     if (a[n-1]>a[0])
//         count++;
//     for (i=0; i<n-1; i++)
//     {
//         if (a[i]>a[i+1])
//             count++;
//     }
//     if (count>1)
//         printf("unsorted");
//     else 
//         printf("sorted");
//     return 0;
// }