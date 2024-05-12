#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main()
{
    int i , j , shap,c;
    char ans;
  do{
    cout<<"select options "<<endl;
    cout<<"for circul type 1"<<endl;
    cout<<" for ractangle type 2"<<endl;
    cout<<" for triangle type 3"<<endl;
    cout<<" for squre type 4"<<endl;
    cout<<" for exit type 5"<<endl;
    cin>>shap;
    switch(shap)
    {
      case 1:
      {
        const int r=5,tol=5;
       for(int x= -r;x<=r;x++)
       {
        for(int y= -r;y<=r;y++)
        {
            int eq= x*x + y*y -r*r;
            cout<<(abs(eq)<tol?"*":" ");
        }
        cout<<"\r\n";
       }
      }
      break;
      case 2:
      {
        for(i=1;i<=5;i++)
        {
           for(j=1;j<=7;j++)
           {
            cout<<" * ";
           }
           cout<<endl;
        }
      }
      break;
      case 3:
      {
        int n=5;
        for ( i = 1; i <= n; i++) {
        for ( j = 0; j < n - i; j++)
        {
            cout <<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout <<" * ";
        }
        cout << endl;
      }
      }
      break;
      case 4:
      {
        for(i=1;i<=5;i++)
        {
           for(j=1;j<=5;j++)
           {
            cout<<" * ";
           }
           cout<<endl;
        }
      }
      break;
    //   case 5:
    //   {
    //     return 0;
    //   }

      default :
      {
            cout<<"select wrong number";
            
        }
    }
    cout<<"do you want continue (y/n) :"<<endl;
    cin>>ans;

  }while ((ans=='y')||(ans=='Y'));
  cout<<"program finish";
}
  
 
