#include <iostream>

using namespace std;
    
    int main(){
    float comp, desc, desc1, alt, portas, port_a,porl,prof,mont;

    mont=3;
    desc = 6;
    desc1 = 4;
    port_a = 10;
    porl = 0.5;

    cout << "dijite o comprimento:" << endl;
    cin >> comp;
    cout << "compimento de parede a parede desconto de 6cm\n"
         << comp - desc << endl;

    cout << "dijite a altura:" << endl;
    cin >> alt;
    cout << "do piso ao teto desconto de 4cm\n"
         << alt - desc1 << endl;
cout << "dijite a quantidade de portas" <<endl;
    cin >> portas;
   
cout<<"dijite a profundidade do armário \n";
cin >> prof;

cout  << "profundidade com desconto da espessura da porta 1,5cm e 2,5cm distancia da parede\n"
<<"-"<< prof-desc1 <<endl<<endl;
       
    float comprimento ((comp-desc)/(portas)-porl);
    float altura (alt-desc1-port_a);
    float profundidade (prof-desc1);
    float montante (altura-mont); //aqui já com desconto,roda pé 10 é teto 4 base é chapel 3.
 
    cout <<"plano de corte:\n"<<endl;
cout<<portas<<"-portas-"<< comprimento << " x " << altura<<endl;


 int portasInt = static_cast<int>(portas); 

    // Determina a quantidade de montantes com base na quantidade de portas

      switch (portasInt){
        case 1:
            cout << "2-montante: " << profundidade << " x " << montante << endl;
            break;
        case 2:
            cout << "2-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 3:
            cout << "3-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 4:
            cout << "3-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 5:
            cout << "4-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 6:
            cout << "4-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 7:
            cout << "5-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 8:
            cout << "5-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 9:
            cout << "6-montantes: " << profundidade << " x " << montante << endl;
            break;
        case 10:
            cout << "6-montantes: " << profundidade << " x " << montante << endl;
            break;
        default:
            cout << "Número de portas fora do intervalo esperado." << endl;
            break;
    }
cout << "2-base é teto:" << profundidade << " x " << comp-desc << endl;


    return 0;
}










