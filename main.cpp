#include<iostream>
#include<time.h>
#include<Windows.h>

void instructions();
void drawBox();
void drawTriangle();
int randomColor(int sleepTime, int roundNumber);
void colorShow(int showcase);

std::string colors[]={"Azul","Verde","Rojo", "Morado","Amarillo","Aqua", "Blanco","Gris","Negro"};


int main(){
    
    srand(static_cast<unsigned int>(time(0)));
    
    int answers[7];
    instructions();
   for (int j = 5; j > 0; j--){
    
    

        system("Color 07");

        for (int i = 0; i < 6; i++){
            answers[i]=randomColor(j,i);
        }

        system("cls");
        system("Color 07");
        std::cout<<"Respuestas ronda "<<6-j<<":\n";
        system("pause");
        
        for (int i = 0; i < 6; i++){
            std::cout<<i+1<<".- ";
            std::cout<<colors[answers[i]];
            std::cout<<std::endl;
        }
    std::cout<<"Fin ronda "<<6-j<<"\n";
    system("pause");
   }

    std::cout<<"\nFin del juego\nGracias por jugar\n";
    
    return 0;
}

void instructions(){
    
    system("cls");
    std::cout<<"Bienvenidos al juego de palabras de colores\nLas instrucciones son simples:\n";
    std::cout<<"El juego cuenta de 5 rondas, cada una mas rapida que la anterior\n";
    system("pause");
    
    std::cout<<"Los colores que veran son:\n";
    
    for(int i=0; i<9; i++) {colorShow(i);}

    system("cls");
    drawTriangle();
    std::cout<<"Si ven un triangulo deberan anotar el color esctrito en la palabra\n";
    system("Color 02");
    std::cout<<"Rojo";
    std::cout<<"\nEn este caso deberian anotar rojo e ignorar el verde\n";
    system("pause");
    system("cls");

    drawBox();
    std::cout<<"Si ven un cuadrado deberan anotar el color del que esta pintado la palabra\n";
    system("Color 02");
    std::cout<<"Rojo";
    std::cout<<"\nEn este caso deberian anotar verde e ignorar el rojo\n";
    system("pause");
}
void drawBox(){
    std::cout<<" ____________\n";
    std::cout<<"|            |\n";
    std::cout<<"|            |\n";
    std::cout<<"|            |\n";
    std::cout<<"|            |\n";
    std::cout<<"|            |\n";
    std::cout<<"|____________|\n";

}
void drawTriangle(){

    std::cout<<"      /\\ \n";
    std::cout<<"     /__\\ \n";
    std::cout<<"    /____\\ \n";
    std::cout<<"   /______\\ \n";
    std::cout<<"  /________\\ \n";
    std::cout<<" /__________\\ \n";
    std::cout<<"/____________\\ \n";
 
}
int randomColor(int sleepTime,int roundNumber){
    system("cls");
    int figure=rand()%2;//Figure choice
    int textColor=rand()%9;//Color that will be shown 
    int wordColor=rand()%9;//Color that will be written

    switch (textColor){
    case 0: system("Color 01");//Blue
        break;
    case 1: system("Color 02");//Green
        break;
    case 2: system("Color 04");//Red
        break;
    case 3: system("Color 05");//Purple
        break;
    case 4: system("Color 06");//Yellow
        break;
    case 5: system("Color 03");//Aqua
        break;
    case 6: system("Color 07");//White
        break;
    case 7: system("Color 08");//Grey
        break;
    case 8: system("Color 70");//Black
        break;
    default: std::cout<<"Algo salio mal\n";
        break;
    }
    std::cout<<roundNumber+1<<".-\n";
   figure==0?drawBox() : drawTriangle();
    
    std::cout<<std::endl<<colors[wordColor]<<std::endl;
    Sleep(1500*sleepTime) ;
    return figure==0?  textColor : wordColor;
}
void colorShow(int showcase){

    system("cls");
    
    switch (showcase){
    case 0: system("Color 01");//Blue
        break;
    case 1: system("Color 02");//Green
        break;
    case 2: system("Color 04");//Red
        break;
    case 3: system("Color 05");//Purple
        break;
    case 4: system("Color 06");//Yellow
        break;
    case 5: system("Color 03");//Aqua
        break;
    case 6: system("Color 07");//White
        break;
    case 7: system("Color 08");//Grey
        break;
    case 8: system("Color 70");//Black
        break;
    default: std::cout<<"Algo salio mal\n";
        break;
    }
    std::cout<<colors[showcase]<<std::endl;
    system("pause");
}