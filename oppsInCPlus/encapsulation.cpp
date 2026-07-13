#include<bits/stdc++.h>
using namespace std;

class Students {
private :
  int marks;

public :
 void setMarks(int mark){
    marks = mark;
 }
 int getMarks(){
    return marks;
 }

};

int main(){
  Students s;
   s.setMarks(500);
   cout<<s.getMarks();
return 0;
}