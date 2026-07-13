#include<bits/stdc++.h>

using namespace std;
class base {
public :
    virtual void show(int a){
       cout<<"asdfghjkl\n";
    }
};
class print : public base{
 public :
  void show(int a){
    cout<<a<<endl;
  }
  void show(string a){
    cout<<a<<endl;
  }


};
int main(){
    print  p;
    base* b;
    p.show(1);
    p.show("ji");
    b = &p;
    b->show(2);
}

