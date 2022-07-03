#include<bits/stdc++.h>
using namespace std;
auto main()->int{
    int p,a,i,j,d=1;
    p=a=0;
    cin>>p>>a;
    for(i=0;i<p;i++){
        while(d<=a){
            for(j=0;j<d;j++)
            cout<<"*";
            cout<<"\n";
                d++;
        }
        cout<<"\n";
        d=0;
    }
    return 0;
}