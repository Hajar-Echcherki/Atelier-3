#include <iostream>
using namespace std;
class complexe{ //creation du classse comple
    private:
    int r1;
    int r2;
    int i1;
    int i2;
    string operation;
    public:
    complexe(){ //constructeur par defaut
        cout << "Donnez le  premier nombre reel " << endl;
        cin >> r1; //faire entre le 1er  reel
        cout << "Donnez le premier nombre imaginaire"<<endl ;
        cin >> i1;//faire entre le 1er nombre imaginaire
        cout << "Donnez le dexieme nombre reel" << endl;
        cin >> r2;
        cout << " le dexieme nombre imaginaire"<< endl;
        cin >> i2;
        cout << "choisissez l'un des operations suivant : addition , soustraction , multiplication , division" << endl;
        cin >> operation;

    }
    void calcule(){
        if(operation == "addition"){ //utilisation du boucle de condition 
            cout << "le resultat est : " << i1+i2 << "i + " << r1+r2 << endl; //cet resultat va s'afficher .
        }
        else if (operation == "soustraction"){ 
            cout << "le resultat est : " << i1-i2 << "i + " << r1-r2 << endl;
        }
        else if(operation == "multiplication"){
            cout << "le resultat est : " << r1*i2+i1*r2 << "i + " << r1*r2-i1*i2 << endl;
        }
        else if(operation == "division"){
            cout << "le resultat est : " << float(r2*i1-r1*i2)/float(i2*i2+r2*r2) << "i + " << float(i1*i2-r1*r2)/float(i2*i2+r2*r2) << endl;
        }
        else{
            cout << "operation non valide"  << endl;
        }
    }
};

int main () {
    complexe o1; //création d'un objet
    o1.calcule(); //appel de la fonction void à partir de l'objet qui a toutes les opérations.
    return 0;
}