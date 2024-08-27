#include <iostream>
using namespace std;
class cube{
    public:
     double height=3.0;
    double length=9.0;
    double width=4.0;
    double volume(){
        double v;
        v=height*width*length;
        return v;
    }
};
int main(){
    cube c1;
    cout<<"Volume:"<<c1.volume()<<endl;
}