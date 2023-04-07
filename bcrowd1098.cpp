#include<iostream>
using namespace std;

int main(){
   float I[3]={0,0,0};
   float J[3]={1,2,3};
   for(int i=0;i<3; i++){
     cout<<"I="<<I[i]<<" "<<"J="<<J[i]<<endl;
   }

   while(I[0]<2){
   for(int i=0; i<3; i++){
    I[i]+=.2;
    J[i]+=.2;

    cout<<"I="<<I[i]<<" "<<"J="<<J[i]<<endl;


   }

}
return 0;
}
