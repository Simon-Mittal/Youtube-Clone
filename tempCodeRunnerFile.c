#include<stdio.h>
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
