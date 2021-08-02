#include <iostream>
#include <cstdlib>
using namespace std;
//vectores y funciones
//lectura del vector
void leer_vector(int num[], int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        cout<<"Ingrese el elemnto #" <<(i+1)<<" : ";
        cin>>num[i];
    }
}
//
void imprime_vectore(int vector[], int tamanio)
{
    cout<<endl<<endl<<"ELEMENTOS DEL VECTOR";
    for(int i=0; i<tamanio; i++)
    {
        cout<<endl<<"Elemento # " << (i+1) <<" : " <<vector[i];
    }
}
//Realizar la sumatoria del elemento del vector
double sumatoria_vector(int vector[], int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio; i++)
        suma+=vector[i];

    return suma;
}
//Realezar el promedio de los elemtos del vector
int promedio_vector (int vector[], int tamanio)
{
    double promedio=0;
    promedio = sumatoria_vector(vector, tamanio)/tamanio;
    return promedio;
}

//EJERCICIO 1) Funcion que devuelve el elemento maximo del vector
int  elemento_maximo (int vector [5])
{
    int max=vector[5];
    int a;
    for(a=1; a<5;a++)
    {
        if (vector[a]>max)
        {
            max=vector[a];
        }
    }
    cout<<"\nEl elemento maximo es: %a/4", max;
}

//2)Función que devuelve el elemento mínimo del vector

int minimo, vector ()
{
    int minimo = vector[50];
    for (int i = 1; i < 50; i++)
    {
        if (minimo > vector[i])
        {
            minimo = vector[i];
        }
    }
    Return minimo;
}
//3)Función que devuelve por referencia el elemento mínimo y máximo del vector
{
bool myfn(int i, int j) { return i < j; }
bool operator()(int i, int j) { return i < j; }

}
//4)Función que llene el vector con valores aleatorios

int llenar (int vect [],int tama)
{
    int ultimo=0;
    for(int i=0; i<tama;i++)
    {
        ultimo=ultimo+rand()%5+1;
        vector[i]=ultimo;
    }
}
int aleatorio(int vect[],int tama)
{
    int i, r, aux;
    for (i = 0; i < tama - 1; i++) {
        r = rand() % tama;
        aux = vect[i];
        vect[i] = vect[r];
        vect[r] = aux;
    }
}

int main()
{

    const int MAX=7;
    int num[MAX];

    //Llamada a la funcion para leer el vector
    leer_vector(num, MAX);
    imprime_vectore(num, MAX);

    int suma=sumatoria_vector(num,MAX);
    cout<<endl<<"LA SUMATORIA DEL VECTOR ES: "<<suma;

    cout<<endl<<"EL PROMEDIO ES: "<<promedio_vector(num, MAX);

    int vector [5];
    elemento_maximo(vector);
    cout<<"El valor mínimo del vector es: "<<minimo() <<endl;

    int vect[] = {5,6,3,9,4,2,8};

    cout << "\nELEMENTO MINIMO:" << (vect, vect+7,myobj);
    cout << "\nELEMENTO MAXIMO: " << (vect, vect+7,myobj);

    int vec[6];
    int tamanio=3;
    srand(time (NULL));
    llenar (vect, tamanio);
    cout<<"\nInserte  el orden: ";
    aleatorio(vect, tama);

    return 0;
}