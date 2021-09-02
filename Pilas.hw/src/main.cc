#include<iostream>

struct Nodo{
   int dato;
   Nodo *siguiente;
};

void agregarPila(Nodo *&, int); //prototipo de función
void sacarPila(Nodo *&, int &);

int main(){
  Nodo *pila=NULL;
  int dato;
  char rpt;
   do{
         printf("Digite un numero: ");
         scanf("%d", &dato);
         agregarPila(pila,dato);

         printf("\nDesea agregar otro elemento a pila (s/n): ");
         scanf("%s", &rpt);
   }while((rpt=='S'||rpt=='s'));

   printf("\nSacando todos los elementos de pila: ");
   while(pila!=NULL){
      sacarPila(pila,dato);
      if(pila!=NULL){
        printf(" %d ", dato);
       }
       else{
         printf(" %d .",dato);
       }
   }
return 0;
}

void agregarPila(Nodo *&pila,int n){
  Nodo *nuevo_nodo=new Nodo();
  nuevo_nodo->dato=n;
  nuevo_nodo->siguiente=pila;
  pila=nuevo_nodo;

  printf("El elemento %d ha sido agregado a pila correctamente", n);
}


void sacarPila(Nodo *&pila, int &n){
   Nodo *aux=pila;
   n=aux->dato;
   pila= aux->siguiente;
   delete aux;

}




