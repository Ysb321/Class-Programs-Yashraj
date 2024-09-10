#include <iostream>
#include <string.h>
using namespace std;

class Fan
{
  float speed;
  int plates;
  char name[20];

  public:

  void setData(float speed, int plates, char *name)
  {
    this -> speed = speed;
    this -> plates = plates;
    strcpy(this -> name, name);
  }

  void display()
  {
    cout << "Brand of Fan is "<< name <<endl;
    cout << "The Speed of Fan is " << speed << "rpm" <<endl;
    cout<< "Plates present in Fan are "<< plates <<endl;
    
  }

  void setName(char *name){ // Setter for replacing new name
    strcpy(this -> name, name);
  }

  Fan() //Constructor
  {
   strcpy(this -> name,"Bajaj");
   speed = 22.66;
   plates = 3;
  }
};

int main(){
    float speed;
    int plates;
    char name[20];

    cout << "Enter a Speed of fan: "<< endl;
    cin >> speed;
    cout << "Enter a Brand Name of Fan: "<< endl;
    cin >> name;
    cout << "Enter a Plates present in Fan: "<< endl;
    cin >> plates;

    Fan f;
    f.setName(name); //It will put only Value of name
    f.display();
}