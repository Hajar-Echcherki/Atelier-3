#include <iostream>
using namespace std ;
class Test {
    public:
    static int count ; //static :est partagé par tous les objets de la classe
    void call () {
        cout << "calling" << endl;
        count++; //pour qu'on puisse compter .
    }
};
int Test::count = 0; 
int main (){
    Test t1; // on appele Test a partire de cette fonction main ;
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    cout << "le nombre de foçis que call a ete appele est : " << t1.count << " fois" << endl;
    return 0;
}