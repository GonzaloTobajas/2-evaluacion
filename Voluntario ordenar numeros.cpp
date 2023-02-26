#include <stdlib.h> 
#include <iostream> 

using namespace std; 


    void ordenar_numeros(int cont[], int num){ 
        int cont1; 
         for(int i=0;i<num;i++) 
                for(int q=0;q<num-1;q++) 
                    if(cont[q]<cont[q+1]){
                        cont1=cont[q]; 
                        cont[q]=cont[q+1]; 
                        cont[q+1]=cont1;} 

                 for(int i=0;i<num;i++) 
                    cout<<cont[i]<<endl; 
                        
                        
						} 
        main(){ 

        int num,n; 
        cout<<"Escriba el numero de numeros a ordenar: "; 
        cin>>num; 
        int arr[10]; 
        for(int i=0;i<num;i++){ 
            cout<<"Escriba el numero "<<i+1<<": "; 
            cin>>n; 
            arr[i]=n; 
            } 
            cout<<endl<<"Numeros ordenados: "<<endl; 
            ordenar_numeros(arr,num); 
            system("pause"); 
        }