#include <iostream>

using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

    int area(){
        return length*breadth;
    }

    int perimiter(){
        return 2*(length+breadth);
    }
}; //this is mandatory to write ; aftre class close

/* Stack memory
int main(){
    Rectangle r;
    Rectangle *p;
    p=&r;
    r.length=10;
    p->length =10;
    p->breadth=5;
    cout<<p->area();
    return 0;
}
*/

int main(){
    Rectangle *q= new Rectangle; //in heap 
    q->length = 20;
    q->breadth = 10;
    cout<< q->area() <<endl;
    cout<< q->perimiter() <<endl;
    return 0;
}