//VPD calculator by Safat Rezanur Majumder
#include<iostream>
using namespace std;
int main()
{
    double h,h1,u,m,u1,v;
    cout<<"Enter Your HSC result: "<<endl;
    cin>>h;
    h1=(5-h)*3/(5-1);
    cout<<"Enter Your university CGPA: "<<endl;
    cin>>u;
    cout<<"Enter Your university minimum passing grade: "<<endl;
    cin>>m;
    u1=(4-u)*3/(4-m);
    v=1+(u1+h1)/2;

   if(v<=1.5)
   {
       cout<<"Your VPD is : "<< v <<"  Sehr Gut (Very Good)";
   }
   else if(v<=2.5 && v>1.5)
   {
        cout<<"Your VPD is : "<< v <<"  Gut (Good)";
   }
   else if(v<=3.5 && v>2.5)
   {
         cout<<"Your VPD is : "<< v <<"  Befriedigend (Satisfying)";
   }
   else if(v<=4.9 && v>3.6)
   {
         cout<<"Your VPD is : "<< v <<" Ausreichend (Sufficient) ";

   }
   else
   {
       cout<<"Nicht ausreichend (Insufficient)";

   }


}
