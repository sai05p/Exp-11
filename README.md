# Exp-11
# EXPERIMENT 11
# Aim 
To Study and Implement Classes and Objects
# Software 
Visual Studio Code
# Theory
The essential components of C++'s object-oriented programming are classes and objects. We'll study about C++ classes and objects in this article, including their functions and applications in C++ programs.

Classes:  By creating an instance of the class, one can access and utilize its own data members and member functions, which are user-defined data types. An object's blueprint is contained within a C++ class.
An  class is a form of user-defined data that consists of member functions and data members.
Member functions are functions that alter these variables collectively, and data members are variables. The characteristics and actions of the objects in a class are defined by the combination of member functions and data members.

Objects: A class is declared, but it doesn't allocate any memory or storage—it only defines the object. You must first construct objects in order to use the data and use the features defined in the class.

Syntax to Create an Object
```
ClassName ObjectName;
```
CODES:

1.
```
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
```

O/P:

![image](https://github.com/user-attachments/assets/88d49d6c-2f7c-4a20-87d2-9aa3a2c92a41)


2.
```
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
```

O/P:

![image](https://github.com/user-attachments/assets/86df370d-8e2b-4822-882b-fcef6e568d7b)


3.
```
#include<iostream>
using namespace std;
class cube{
    private:
     double height=3.0;
    double length=9.0;
    double width=4.0;
    public:
    double volume()
    {
        double v;
        v=height*length*width;
        return v;
    }
};
int main()
{
    cube c1;
    cout<<"Volume:"<<c1.volume()<<endl;
}
```

O/P:

![image](https://github.com/user-attachments/assets/5502a79b-d881-4cb5-a473-68a334e62114)

4.
```
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
void disp_vol(double vol){
    cout<<"Volume:"<<vol<<endl;

}
};
int main()
{
    cube cube1;
    double vol=cube1.volume();
    cube1.disp_vol(vol);
}
```

O/P:

![image](https://github.com/user-attachments/assets/6743ffdb-22b3-4b17-9908-8c54ef93183d)


5.
```
#include <iostream>
using namespace std;

class Volume 
{
    public:
        float length;
        float breadth;
        float height;
        
        void input() {
            cout << "Enter the value of length: ";
            cin >> length;
            cout << "Enter the value of breadth: ";
            cin >> breadth;
            cout << "Enter the value of height: ";
            cin >> height;
        }
                float vol() {
            return length * breadth * height;
        }
        
        void display() {
            double a = vol();
            cout << "The volume is " << a;
        }
};

int main() {
    Volume volume1;
    volume1.input();
    float a = volume1.vol();
    cout << a;
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/cad19e66-eb27-44b4-9ec2-6f7486bfa944)


# Conclusion
These C++ code examples show how the program improves step by step to calculate the volume of a cube or box.

The first version is straightforward: it uses settings that are visible to all users and can be changed to calculate the volume directly in the main() method. Although the calculation is done inside the classroom in the second version, the values are still visible. This makes it slightly better. The code is more safe in the third version since these values are hidden and only the class can utilize them. The code is more structured in the fourth version, which includes a method specifically for displaying the volume. The fifth version, which keeps everything safely inside the class, allows you to specify your own numbers for the dimensions, making it more practical and user-friendly.
