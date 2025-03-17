#include <iostream>
#include <string>

using namespace std;

class Cave {
  public:


  Cave() {
    system("cls");
    // Fun message as you enter the cave the first... and maybe last time
    cout << "You enter the cave..." << endl;
    cout << "You have a bad feeling about this." << endl;
  }

  // This function simply shows the players current section map based on the
  // pointer passed to it.
  void showMap(int* positionPointer) {
    int position = *positionPointer;
    switch (position) {
      case 2:
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
        break;
      }
      case 4:
      case 5:
      case 6:
      case 3: {
        cout << R"(
                                    XXXXXXXXXXXXXXXXXXXXXXXXX                          
                                    X      Armor Room       X                          
                                    X          (4)          X                          
                                    X                       X                          
                                    XXXXXXXXXX      XXXXXXXXX                          
                                             X      X                                  
  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                      
  Down the Hallway                                                             Go Back 
      (99)                                                                     (88)   
                                                                                      
                                                                                      
  XXXXXXXXXXXXXXXXXX     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX      XXXXXXXXXXXXXXX
                  X     X                                       X      X              
                  X     X                                       X      X              
                  X     X                                       X      X              
        XXXXXXXXXXX     XXXXXXXXXXXXX              XXXXXXXXXXXXXX      XXXXXXXXXXX    
        X                           X              X                             X    
        X                           X              X                             X    
        X     Living Quarters       X              X            Kitchen          X    
        X           (6)             X              X              (5)            X    
        X                           X              X                             X    
        X                           X              X                             X    
        XXXXXXXXXXXXXXXXXXXXXXXXXXXXX              XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX)" << endl;
        break;
      }
      case 8:
      case 7: {
        cout << R"(
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                     
Down the Hallway                                                            Go Back  
     (99)                                                                    (88)    
                                                                                     
XXXXXXXXXX    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    XXXXXX
         X    X                                                           X    X     
         X    X                                                           X    X     
         X    XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX    X     
         X                                                                     X     
         X                                                                     X     
         X                           Feast Hall                                X     
         X                               (7)                                   X     
         X                                                                     X     
         X                                                                     X     
         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX     
        )";
        break;
      }
      case 9: {
        cout << R"(
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
X                                                                                    
X                                                                        Go Back     
X                                                                         (88)       
X                                                                                    
X                                                                                    
X                       Final Boss                          XXXXXXXXXXXXXXXXXXXXXXXXX
X                          (8)                              X                        
X                                                           X                        
X                                                           X                        
X                                                           X                        
X                                                           X                        
X                                                           X                        
X                                                           X                        
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                        
        )";
        break;
      }
      default: {
      
      }
    }
  }
};