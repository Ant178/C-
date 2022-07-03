#include<bits/stdc++.h>
using namespace std;

int main(){
    float x,y,z,r;
    x=y=z=r=0;
    cin>>x>>y>>z;
    r= ((((2*x)+y)/z)*((pow(y,3))-z))/(((x+(2*y)+(3*z))/((z-(2*y)-(3*x))))+pow(x,2)+pow(z,2));
    cout<<r;
    return 0;
}