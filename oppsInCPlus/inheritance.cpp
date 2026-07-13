
#include<bits/stdc++.h>
using namespace std;

class Animal {
   public :
    void eat(){
        cout<<"Eating\n";
    }
};
class Dog : public Animal {
    public :
    void barks(){
        cout<<"Barking\n";
    }
};

int main(){
    Dog animal;
    animal.barks();
    animal.eat();
 return 0;
}