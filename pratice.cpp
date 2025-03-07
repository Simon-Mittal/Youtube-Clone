#include<iostream>
using namespace std;
int main()
{
    int x,y,k=0;
    cout<<"Enter lower and upper range : ";
    cin>>x>>y;
    int a[y-x+1];
    int p[y-x+1];
    int num[10];
    for (int i=0; i<10; i++)
    {
        num[i]=0;
    }
    for (int i=0; i<y-x+1; i++)
        {
            a[i]=x+i;
            int temp=a[i],c=0;
            for (int j=2; j<=temp/2; j++)
            {
                if (temp%j==0)
                    c++;
            }
            if (c==0 && (x+i)!=1)
            {
                p[k]=a[i];
                k++;
            }
        }
    if (k==0)
    {
        printf("-1");
        return 0;
    }
    for (int i=0; i<k; i++)
        {
            while(p[i]!=0)
            {
                int n=p[i]%10;
                p[i]/=10;
                for (int j=0; j<10; j++)
                {
                    if (n==j)
                        num[j]++;
                }    
            }
        }
    int max=0,o;
    for (int i=0; i<10; i++)
    {
        if (num[i]>=max)
            {
                max=num[i];
                o=i;
            }
    }
    printf("max frequency is of %d of %d times",o,max);    
}





// #include<iostream>
// using namespace std;
// class stud{
//     int e;
//     char s[100];
//     public:
//     void setd(stud &);
//     void showd(stud & ob)
//     {
//         cout<<ob.e<<endl;
//         cout<<ob.s<<endl;
//     }
// };
// void stud::setd(stud & ob)
// {
//     cin>>ob.e;
//     cin>>ob.s;
// }
// int main()
// {
//     stud ob;
//     ob.setd(ob);
//     ob.showd(ob);
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// #include<climits>
// using namespace std;
// int main()
// {
//     int l, u,i ,j,max=INT_MIN,e;
//     cout<<"Enter lower limit : ";
//     cin>>l;
//     cout<<"Enter upper limit : ";
//     cin>>u;
//     int a[10],k=0;
//     for (i=0; i<10; i++)
//         a[i]=0;
//     for (i=l; i<=u; i++)
//     {
//         int c=0;
//         for (j=2; j<=sqrt(i); j++)
//         {
//             if (i%j==0)
//             {
//                 c++;
//                 break;
//             }
//         }
//         int num=i;
//         if (c==0 & i!=1)
//         {
//             k++;
//             while (num!=0)
//             {
//                 int temp=num%10;
//                 num/=10;
//                 a[temp]+=1;
//             }
//         }
//     }
//     for (i=0; i<10; i++)
//     {
//         if (a[i]>=max)
//             {
//                 max=a[i];
//                 e=i;
//             }
//     }
//     if (k!=0)
//         cout<<"Highest frequency element is "<<e;
//     else
//         cout<<"-1";
//     return 0;    
// }

// #include<iostream>
// using namespace std;
// struct complex{int real,imag;}c1,c2,res;
// void add(struct complex c1, struct complex c2, struct complex res)
// {
// cout<<"------Call By Value--------\n";
// cout<<"Real part : "<<c1.real+c2.real<<"\n";
// cout<<"Imaginary part : "<<c1.imag+c2.imag<<"i\n";
// }
// void add(struct complex &c1, struct complex &c2)
// {
// cout<<"--------Call By Reference-------\n";
// cout<<"Real part : "<<c1.real+c2.real<<"\n";
// cout<<"Imaginary part : "<<c1.imag+c2.imag<<"i\n";
// }
// int main()
// {
//  cout<<"Enter the real part and then imaginary part separated by a space of the number : ";
//  cin>>c1.real>>c1.imag;
//  cout<<"Enter the real part and then imaginary part separated by a space of the number : ";
//  cin>>c2.real>>c2.imag;
// add(c1,c2,res);
// add(c1,c2);
// }

// #include<iostream>
// using namespace std;
// struct area{int x,y;}bl,tr;
// double f(struct area *bl, struct area *tr)
// {
//     int l=abs((*bl).x-(*tr).x);
//     int b=abs(tr->y-bl->y);
//     return l*b;
// }
// double dist(struct area *bl, struct area *tr)
// {
//     return sqrt(pow((*tr).x-(*bl).x,2)+pow((*tr).y-(*bl).y,2));
// }
// int main()
// {
//     cout<<"Enter the bottom left coordinates separated by a space : ";
//     cin>>bl.x>>bl.y;
//     cout<<"Enter the top right coordinates separated by a space : ";
//     cin>>tr.x>>tr.y;
//     cout<<"Area of recatngle is "<<f(&bl,&tr);
//     cout<<"Distance between them is "<<dist(&bl,&tr);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int *arr[])
// {
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<'\n';
// }
// int main()
// {
// int *arr[8];
// print(arr);
// return 0;
// }

//tute3(ques3)
// char* p = input_line;
// int i = 0;
// while (i < max_length) {
//     if (*(p + i) == '?') 
//         quest_count++;
//     i++;
// }

//tute3(ques1)
// #include<iostream>
// using namespace std;
// void info(const char name[],const char dept[]="CSE")
// {
//     cout<<"Name of student is "<<name<<endl;
//     cout<<"Department of student is "<<dept<<endl;
// }
// int main()
// {
//     info("Sasural Simar ka");
//     info("Simar ka Sasural","Kitchen");
//     return 0;
// }

// tute3(ques2)
// #include<iostream>
// using namespace std;
// void f(double s)
// {
// cout<<"Area of square is "<<s*s<<endl;
// }
// void f(double l, double b)
// {
// cout<<"Area of reactangle is "<<l*b<<endl;
// }
// void f(double r, const char*s)
// {
// cout<<"Area of circle is "<<3.14*r*r<<endl;
// }
// void f(double b, double h, const char*s)
// {
// cout<<"Area of traingle is "<<0.5*b*h<<endl;
// }
// int main()
// {
//     f(5);
//     f(5,4);
//     f(8,"Circle");
//     f(2,2,"Triangle");
//     return 0;
// }