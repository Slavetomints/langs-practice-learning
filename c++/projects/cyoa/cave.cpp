#include <iostream>
#include <string>

using namespace std;

class Cave {
  public:


  Cave() {
    cout << "You enter the cave..." << endl;
    cout << "You have a bad feeling about this." << endl;
  }

  void showMap(int* positionPointer) {
    int position = *positionPointer;
    switch (position) {
    case 1: {
      cout << R"(
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    X 
                                                                                    X 
Down the Hallway                                                                    X 
    (99)                                                                            X 
                                                                                    X 
                                                                                    X 
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX         XXXXXXXXXXXXXXX    XXXXXXXXXXXXXXXXX 
                                       X         X             X    X                 
                                       X         X     XXXXXXXXX    XXXXXXXXXX        
                                       X         X     X                     X        
                                       X         X     X                     X        
                                       X         X     X     Weapon Room     X        
                                       X         X     X         (2)         X        
                                       X         X     X                     X        
                                       X         X     X                     X        
                                       X   EXIT  X     XXXXXXXXXXXXXXXXXXXXXXX        
                                       X   (0)   X                                    )" << endl;
    }

    default: {
    
    }
    }
  }
};