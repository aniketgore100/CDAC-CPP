#include <bits/stdc++.h>
using namespace std;

class feet;
class inch{
    private:
    float inches;
    public:
    void setinches(int i){
        inches = i;
     }
     friend void display(feet f, inch i);

};
class feet{
    private:
    float fit;
    public:
    void setfeet(float f){
        fit = f;
     }
     friend void display(feet f, inch i);

};

void display(feet f, inch i){

    cout<< ( f.fit * 12 * 2.5 ) + (i.inches * 2.5) <<endl;

}


int main(){
    inch i;
    feet f;
    f.setfeet(6);
    i.setinches(3);
    display(f,i);
}