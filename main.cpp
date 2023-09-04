/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main(){
    
    int a[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int c;
    bool band =false;
    
    
    
    while(!band){
        band=true;
        
        for(int x =0;x<30;x++){
            if(a[x]<a[x+1]){
                c=a[x];
                a[x]=a[x+1];
                a[x+1]=c;
                cout<<"\n";
                band =false;
                
            }
        }
    }
    for(int x=0;x<29;x++){
        cout<<a[x]<<"\n";
        
    }
    
}



