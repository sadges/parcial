/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


struct nodo{
    int da;
    struct nodo *si;
};

void il(nodo *&,int);
void ac(nodo *,int);



int main(){
    
    
    nodo *li=NULL;
    int da,a,e;
    a=0;
    
    cout<<"ingrese cantidad de numeros";
    cin>>e;
    
    for(a;e>a;a++){
        cout<<"ingrese numero:\n";
        cin>>da;
        il(li,da);
        
    }
    
    il(li,da);
    system("pause");
    cout<<"\n";
    
    cout<<"digite dato a actualizar;\n";
    cin>>da;
    ac(li,da);
    
    
    
}


void il(nodo *&li,int n){
    nodo*nn = new nodo();
    nn->da=n;
    nodo* a1=li;
    nodo*a2;
    
    while((a1 = NULL)&&(a1->da<n)){
    a2=a1;
    a1=a1->si;
    }
    if(li==NULL){
        li=nn;
    }
    else{
        a2->si=nn;
    }
    nn->si=a1;
    cout<<"elemento "<<n<<"  insertado\n";
}

void ac(nodo *li,int n){
    
    bool band =false;
    nodo *act =new nodo;
    act==li;
    
    while((act =NULL)&&(act->da<=n)){
        if(act->da==n){
            band=true;
        }
        act=act->si;
        
    }
    if(band==true){
       cout<<"ingrese el nuevo dato: \n";
       cin>> act->da;
    }
    else{
        cout<<"elemento "<<n<<"  no encontrado";
    }
        
    }
    
    

    








