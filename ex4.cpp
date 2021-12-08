#include <iostream>
using namespace std;

class mere{
    public :
    void display(){ 
        cout << " hello , I'm her mother" << endl;
    }
};
class fille : public mere{ //une classe fille héritée.
    public:
    void display(){
        cout << "I'm her daughter  " << endl;
    }
};

int main () {
    fille b1; //création d'objet (b1) à l'aide du classe fille
    b1.display();// appelation du ofnction display 
    return 0 ;
}