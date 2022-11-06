#include <iostream>
// #include "./include/Shape.h"
#include "./include/Square.h"
#include "./include/Circle.h"

using namespace std;

Shape* figura[3];

void cargarFigura()
{   
    for (int i = 0; i < 3; i++)
    {
        char si;
        cout << "Desea cargar un circulo?" << endl;
        cout<<"Digite 'S', si desea crear un cuadrado digite 'N': "<< endl;
        cin >> si;
        if (si == 's' ||  si== 'S')
        {
            float radio;
            cout << "ingrese la medida del radio"<< endl; 
            cin >> radio;
            figura[i] = new Circle(radio);
        }
        else
        {
            float lado;
            cout << "ingrese la medida del lado"<< endl; 
            cin >> lado;
            figura[i] = new Square(lado);
        }
    }
    
}

void mostrarDatos()
{
    for (int i = 0; i <3; i++)
    {
        cout  << endl;
        cout << "-----MOSTRANDO DATOS-----" << endl;
        cout  << "El área de la figura: " <<  i+1 << " es: " << figura[i]->getArea() << endl;
        cout  << "El perímetro de la figura: " << i+1 << " es: " << figura[i]->getPerimeter() << endl;
    }
}

void pause()
{
    //system("PAUSE") multiplataforma!:
    cin.ignore();
    cin.get();
}

void menu()
{
    int opcion;
      
    do
    {
        cout << "---MENU---" << endl;
        cout << "1. Cargar una figura " << endl;
        cout << "2. Ver áreas y perímetros " << endl;
        cout << "3. Salir " << endl;
       
        cin >>opcion;

        switch (opcion)
        {
            case 1:
                cargarFigura();
                mostrarDatos();
            break;

            case 2:
                mostrarDatos();
            break;

            case 3: 
                exit(EXIT_SUCCESS);//SALIR CORRECTAMENTE
            break;

            default: 
                cout<< "Opción inexistente." << endl;
            break;
        } 

    } while (opcion<0 && opcion>3);
}

int main(int argc, char const *argv[])
{
    menu();
    pause();
    return 0;
}