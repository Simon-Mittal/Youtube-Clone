// #include <iostream>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t!=0)
//     {
//         t--;
//         int n,c,sum=0;
//         cin>>n>>c;
//         char s[n];
//         for (int i=0; i<n; i++)
//         cin>>s[i];
//         if (c<n)
//         {
//             int x=n-c;
//             while(x!=0)
//                 {
//                     sum+=c;
//                     x--;
//                 }
//             for (int i=1; i<=c; i++)
//                 sum+=i;
//         }
//         else 
//         {
//             for (int i=1; i<=n; i++)
//                 sum+=i;
//         }
//         cout<<sum<<endl;
//     }
//  return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// int i,l,r;
// cout<<"Enter boundary values of the range: ";
// cin>>l>>r;
// int pcount=0,prime;
// int freqdig[10]={0};
// for(i=l;i<=r;i++){
// int count=0;
// for(int j=2;j<=sqrt(i);j++){
// if(i%j==0){
// count++;
// break;
// }
// }
// if(count==0&&i!=1){
// prime=i;
// while(prime>0){
// int rem=prime%10;
// freqdig[rem]++;
// prime=prime/10;
// }
// pcount++;
// }
// }
// int max=freqdig[0],maxdig=0;
// for(i=1;i<10;i++){
// if(freqdig[i]>max){
// max=freqdig[i];
// maxdig=i;
// }
// else if(freqdig[i]==max){
// if(i>maxdig)
// maxdig=i;
// }
// }
// if(pcount==0)
// cout<<-1<<endl;
// else
// cout<<maxdig<<endl;
// return 0;
// }

//sum of sub-arrays of an array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j,k,maxs;
//     cin>>n;
//     int a[n];
//     for (i=0; i<n; i++)
//         cin>>a[i];
//     cin>>maxs;
//     for (i=0; i<n; i++)
//     {
//         for (j=i; j<n; j++)
//         {
//             int sum=0;
//             for (k=i; k<=j; k++)
//                 sum+=a[k];
//             if (maxs==sum)
//                 {
//                     cout<<"sum exists";
//                     return 0;
//                 }
//         }
//     }
//     cout<<"sum doesn't exist";
//     return 0; 
// }

//all sub-arrays of given array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,j,k;
//     cin>>n;
//     int a[n];
//     for (i=0; i<n; i++)
//         cin>>a[i];
//     for (i=0; i<n; i++)
//     {
//         for (j=i; j<n; j++)
//         {
//             for (k=i; k<=j; k++)
//                 cout<<a[k]<<" ";
//             cout<<"\n";
//         }
//     }
//     return 0;
// }