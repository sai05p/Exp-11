#include <iostream>
using namespace std;
class cube{
    public:
    double height=3.0;
    double length=9.0;
    double width=4.0;

};
int main(){
    cube c1;
    double volume=c1.height*c1.length*c1.width;
    cout<<"Volume:"<<volume<<endl;
    
}