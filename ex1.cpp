#include <iostream>
using namespace std ;
class Myclass { //creation du class
    public:
    Myclass(); //constructeur par defaut 
    ~Myclass(); // constructeur defini par l'utilisateur
};
Myclass::Myclass(){
    cout << "Hello" <<endl; //affcher hello


}
Myclass::~Myclass(){
    string text;
    cout << "ecrire un text" <<endl; //faire entrer le texte .
    cin >> text;
    cout << text << endl;
}
int main(){
    Myclass d1; //creation d'objet d1 pour appeler le constructeur
    return 0;
}