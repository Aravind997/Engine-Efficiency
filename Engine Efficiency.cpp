#include <iostream>

using namespace std;


class Engine
{
public:
virtual void display_efficiency()=0;
    
};


class InternalCombustineEngine:public Engine
{
public:void display_efficiency()
  {
    cout << "\n  20%" << endl;

  }
};
class PetrolEngine:public Engine
{
public:void display_efficiency()
  {
    cout << "\n 30%" << endl;
  }

};

class SteamEngine:public Engine
{
public:void display_efficiency()
  {
    cout << "\n 40%" << endl;
  }

};

class DieselEngine:public Engine
{
public:void display_efficiency()
  {
    cout << "\n 25%" << endl;
  }
};

main ()
{


  char selection;

  InternalCombustineEngine ice;

  DieselEngine die ;
  
  SteamEngine st;

  PetrolEngine pet;

  Engine *eng[3];
  
  eng[1] = &ice;

  eng[2] = &pet;

  eng[3] = &st;
  
  eng[4] = &die;
  
  cout << "\n  A - InternalCombustineEngine";

  cout << "\n  B - PetrolEngine";
  
 cout <<  "\n  C - SteamEngine";
 
  cout << "\n  D - DieselEngine";

  cout << "\n  E - Exit";

  cout << "\n Enter selection: ";

  cin >> selection;

  switch (selection)

    {

    case 'A':
      {
	eng[1]->display_efficiency ();
	break;
      };

    case 'B':
      {
	eng[2]->display_efficiency ();
	break;
      };
    case 'C':
      {
	eng[3]->display_efficiency ();
	break;
      }
     case'D':
       {
	eng[4]->display_efficiency ();
	break;
      }
      
    case 'E':
      {
	cout << "\n To exit the menu";
	break;
      }

    default:
      cout << "\n  Invalid selection";


    }

  cout << "\n";

}


