// Solution Linear System of equation using Gauss Seidel Method.
// Iterative Method.
// one of the concept of Numerical Methods

#include<iostream>
#include<cmath>
using namespace std;
void gauss(float a[3][4]){
   float x[3]={0};
    
    int i;
    int j=1;
    cout<<"How many iteration you want(preferably 7-10)??"<<endl;
    cin>>i;
    while(j<=i){
        x[0]=(a[0][3]-a[0][1]*x[1]-x[2]*a[0][2])/a[0][0];
        x[1]=(a[1][3]-a[1][0]*x[0]-x[2]*a[1][2])/a[1][1];
        x[2]=(a[2][3]-a[2][0]*x[0]-x[1]*a[2][1])/a[2][2];
        
        cout<<"Value of x1,x2,x3 after iteration"<<" "<<j<<":"<<endl;
        cout<<x[0]<<' '<<x[1]<<' '<<x[2]<<endl;
        
        j++;
    }
    cout<<"Final Solution of x1,x2 and x3 are :"<<endl;
    for(int k=0;k<3;k++){
        cout<<"x"<<k+1<<" = "<<round(x[k])<<endl;
    }
}

int main(){
    float a[3][4];
    cout<<"Please Input the coefficient of 3 linear equation with constant"<<endl;
    // a1*x1+a2*x2+a3*x3=a4
    for(int i=0;i<3;i++){
        cout<<"Coefficient of Equation "<<i+1<<endl;
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    gauss(a);


    return 0;
}