#include <iostream>
#include <vector> // On dit au compilateur non seulement d utilisateur votre propre code, mais aussi de compiler un fichier appelé vector
#include <cmath> //pour declarer un ensemble de fonctions pour calculer les opérations et transformations mathématiques courantes
using namespace std;
class vecteur3d{ //creation du class vecteur .
    private:
    vector <float> v;
    
    public:
    vecteur3d() { //un constructeur, avec des valeurs par défaut (0),
    }
    vecteur3d(float x , float y , float z){ 
        v.push_back(x); //est utilisée pour pousser des éléments dans un vecteur depuis l'arrière
        v.push_back(y);
        v.push_back(z);
    }
    void afficher(){ //une fonction daffichage des 3 composantes du vecteur, sous la forme : (x, y, z)
        cout << "x :" << v[0] << endl;
        cout << "y :" << v[1] << endl;
        cout << "z :" << v[2] << endl;
    }
    
void somme(vecteur3d v2){
    cout << "la somme des deux vecteur donnera le vecteur :" << " x : " << v[0]+v2.v[0] << ", y : " << v[1]+v2.v[1] << ", z : " << v[2]+v2.v[2]<< endl; //obtenir la somme de 2 vecteurs
}
void scalaire(vecteur3d v2){
    cout<< "le produit scalaire des deux vecteur donnera le resultat suivant : " << v[0]*v2.v[0] + v[1]*v2.v[1] + v[2]*v2.v[2] << endl; //obtenir le produit scalaire de 2 vecteurs.
}
void check(vecteur3d v2){ //une fonction coincide permettant de savoir si 2 vecteurs ont mêmes composantes.
    if(v[0] == v2.v[0] && v[1] == v2.v[1] && v[2] == v2.v[2]){
        cout << "les deux vecteurs ont les memes valeurs" << endl; 
    }
    else {
        cout << "les deux vecteurs n ont pas les memes valeurs" << endl;
    }
}
float norme(){ //une fonction qui renvoie la norme du vecteur
    return sqrt(abs(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]));
}
void normaxvalue(vecteur3d v2){ //une fonction nommée normax permettant dobtenir, parmi deux vecteurs, celui qui a la plus grande norme.
    if (norme() > v2.norme() ){
        cout << "le vecteur dont la norme est plus grande est  : x : " << v[0] << ", y : " << v[1] << ", z : " << v[2] << endl;
    }
    else{
        cout << "le vecteur dont la norme est plus grande est  : x : " << v2.v[0] << ", y : " << v2.v[1] << ", z : " << v2.v[2] << endl;
    }
}
void normaxpointeur(vecteur3d *v2){
    if (norme() > (*v2).norme() ){
        cout << "le vecteur dont la norme est plus grande est  : x : " << v[0] << ", y : " << v[1] << ", z : " << v[2] << endl;
    }
    else{
        cout << "le vecteur dont la norme est plus grande est  : x : " << (*v2).v[0] << ", y : " << (*v2).v[1] << ", z : " << (*v2).v[2] << endl;
    }
}
void normaxreference(vecteur3d &ref){
    if (norme() > ref.norme() ){
        cout << "le vecteur dont la norme est plus grande est  : x : " << v[0] << ", y : " << v[1] << ", z : " << v[2] << endl;
    }
    else{
        cout << "le vecteur dont la norme est plus grande est  : x : " << ref.v[0] << ", y : " << ref.v[1] << ", z : " << ref.v[2] << endl;
    }
}

        
};
int main () {
    vecteur3d v1(8,1,3); //appelation duconstructeur
    vecteur3d v2(4 ,6 ,4);
    v1.afficher();//afficher le constructeur v1
    v1.somme(v2);
    v1.scalaire(v2);
    v1.check(v2);
    cout << "la norme du vecteur est : " << v1.norme() << endl; //afficher la norme du vecteur
    v1.normaxvalue(v2);
    v1.normaxpointeur(&v2);
    v1.normaxreference(v2);

    return 0 ;
}