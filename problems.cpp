#include <iostream>
using namespace std;
class Example {
private:
    int x,y;
public:
    // Constructor with no parameters
    Example(){
        x=0; y=0;
        cout<<"Default constructor called"<<endl;
    }
    // Constructor with one parameter and a default parameter
    Example(int x){
        this->x=x;
        cout << "Parameterized constructor called"<<endl;
    }
    // Constructor with two parameters (explicitly defined)
    Example(int x,int y=6) {
        this->x=x;
        this->y=y;
        cout<<"Overloaded constructor called"<<endl;
    }
};
int main() {
    Example obj1;
    Example obj2(5);
    // Uncommenting the following line will cause ambiguity due to default parameters
    Example obj4(20,30); // Ambiguity: Which constructor to call?
    return 0;
}

// // #include<iostream>
// // using namespace std;
// // class add
// // {
// // private: int num1, num2,sum;
// // public: add(int=0,int=0); //Default argument constructor
// // add(){} //Default constructor
// // };
// // add::add(int n1, int n2)
// // {num1=n1;
// // num2=n2;
// // sum=num1+num2;
// // cout<<"num1+num2="<<sum<<endl;
// // }
// // int main()
// // {
// // add obj,obj2(5), obj3(10,20);
// // return 0;
// // }


// #include<iostream>
// using namespace std;
// class hello{
//   int x;
//   public:
//     hello(int a)
//     {
//       x=a;
//       cout<<"Pam pam\n";
//     }
//     hello (const hello & ob)
//     {
//         cout<<"Copy"<<endl;
//     }
//     hello(int a=0)
//     {
//       x=a;
//       cout<<"Default+pam\n";
//     }
//   };
// int main()
// {
//   hello ob1(2);
//   hello ob2=hello(4);
//   hello ob3(ob2);
//   hello ob4=ob1;
//   hello ob5;
//   ob5=ob1;
//   hello ob; //default+pam
// }

// #include<iostream>
// using namespace std;
// long int hms_to_secs(int h,int m,int s){
//   s+=h*3600+m*60;
//   return s;
// }
// int main()
// {
//   cout<<"MENU: Enter 1 to enter time and 2 to exit"<<endl;
//   char op;
//   do{
//     cout<<"Enter option: ";
//     cin>>op;
//     if(op=='1'){
//       string s;
//       cout<<"Enter time in format (hh:mm:ss): ";
//       cin>>s;
//       int h,m,sec;
//       h=(s[0]-48)*10+s[1]-48;
//       m=(s[3]-48)*10+s[4]-48;
//       sec=(s[6]-48)*10+s[7]-48;
//       cout<<hms_to_secs(h,m,sec)<<" seconds"<<endl;
//     }
//     // else if(op=='2')
//     // break;
//     else if(op!='2')
//     cout<<"Invalid option"<<endl;
//   }while(op!='2');
//   return 0;
// }

// #include<iostream>
// using namespace std;
// struct phone{
//   int ac,exc,num;
// };
// int main()
// {
//   phone p2;
//   phone p1={212,767,8900};
//   cout<<"Enter your area code, exchange, and number : ";
//   cin>>p2.ac>>p2.exc>>p2.num;
//   cout<<"My number is ("<<p1.ac<<")"<<p1.exc<<"-"<<p1.num<<endl;
//   cout<<"Your number is ("<<p2.ac<<")"<<p2.exc<<"-"<<p2.num<<endl;
//   return 0;
// }

// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// using namespace std;
// int flip()
// {
//   int x=rand()%2;
//   return x;
// }
// int main()
// {
//   srand(time(0));
//   int x=100,h=0,t=0;
//   while(x--)
//     {
//       int y=flip();
//       if(y==0)
//         t++;
//       else
//         h++;
//     }
//     cout<<"Count of head appearance : "<<h<<endl;
//     cout<<"Count of tail appearance : "<<t<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct date{
//   int day,month,year;
// };
// int main()
// {
//   string s;
//   cout<<"Enter date (dd/mm/yyyy) : ";
//   cin>>s;
//   date d;
//   d.day=(s[0]-48)*10+s[1]-48;
//   d.month=(s[3]-48)*10+s[4]-48;
//   d.year=(s[6]-48)*1000+(s[7]-48)*100+(s[8]-48)*10+s[9]-48;
//   cout<<"The date entered is : ";
//   if (d.day<10)
//     cout<<0;
//   cout<<d.day<<"/";
//   if (d.month<10)
//     cout<<0;
//   cout<<d.month<<"/";
//   if (d.year<1000)
//     {
//       cout<<0;
//       if (d.year<100)
//       {
//         cout<<0;
//         if (d.year<10)
//           cout<<0;
//       }
//     }
//   cout<<d.year<<endl;  
//   return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//   int n,min=INT_MAX,max=INT_MIN,minv;
//   cin>>n;
//   int a[n];
//   for (int i=0;i<n; i++)
//     {
//       cin>>a[i];
//     }
//   for (int i=0;i<n; i++)
//     {
//       if (a[i]<min && a[i]>0)
//         {
//           min=a[i];
//           minv=i;
//         }
//       if (a[i]>max)
//         max=a[i];
//     }
//   cout<<max<<min<<endl;
//   for (int i=1,j=minv; i<=max+1 && j<=n; i++,j++)
//   {
//       if (i!=a[j])
//           {
//             cout<<i;
//             break;
//           }
//   }
// return 0;
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