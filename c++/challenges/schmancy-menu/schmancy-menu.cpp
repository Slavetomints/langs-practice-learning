#include <iostream>
#include <iomanip>

using namespace std;

string downcase(string);
int weekMenu();
int saturdayMenu();
int sundayMenu();

struct menuSelection
{
  string name;
  double price;
};

int main() {
  string day;

  cout << R"(

    ,---,.                                           
  ,'  .' |                                           
,---.'   |                  ,---,                    
|   |   .'              ,-+-. /  |                   
:   :  :    ,--.--.    ,--.'|'   |   ,---.      .--, 
:   |  |-, /       \  |   |  ,"' |  /     \   /_ ./| 
|   :  ;/|.--.  .-. | |   | /  | | /    / ', ' , ' : 
|   |   .' \__\/: . . |   | |  | |.    ' //___/ \: | 
'   :  '   ," .--.; | |   | |  |/ '   ; :__.  \  ' | 
|   |  |  /  /  ,.  | |   | |--'  '   | '.'|\  ;   : 
|   :  \ ;  :   .'   \|   |/      |   :    : \  \  ; 
|   | ,' |  ,     .-./'---'        \   \  /   :  \  \
`----'    `--`---'                  `----'     \  ' ;
          ____                                  `--` 
        ,'  , `.                                     
     ,-+-,.' _ |                                     
  ,-+-. ;   , ||              ,---,          ,--,    
 ,--.'|'   |  ;|          ,-+-. /  |       ,'_ /|    
|   |  ,', |  ':  ,---.  ,--.'|'   |  .--. |  | :    
|   | /  | |  || /     \|   |  ,"' |,'_ /| :  . |    
'   | :  | :  |,/    /  |   | /  | ||  ' | |  . .    
;   . |  ; |--'.    ' / |   | |  | ||  | ' |  | |    
|   : |  | ,   '   ;   /|   | |  |/ :  | : ;  ; |    
|   : '  |/    '   |  / |   | |--'  '  :  `--'   \   
;   | |`-'     |   :    |   |/      :  ,      .-./   
|   ;/          \   \  /'---'        `--`----'       
'---'            `----'                              

)" << endl;
  cout << "What day is it?" << endl;
  cin >> day;
  day = downcase(day);
  if ( day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday") {
    weekMenu();
  } else if (day == "saturday") {
    saturdayMenu();
  } else if (day == "sunday") {
    sundayMenu();
  }
  return 0;
}

int weekMenu() {
  double subtotal;
  double tax;
  double total;
  int foodChoice;
  int drinkChoice;
  menuSelection menuSelection[2];

  cout << "\n\nYour choices of food are:" << endl;
  cout << "[1] - $150   -   Ghidra Goulash" << endl;
  cout << "[2] - $250   -   Lobster" << endl;
  cout << "[3] - $23452 -   Blinding Stew\n" << endl;
  cin >> foodChoice;
  switch (foodChoice) {
  case 1:
    menuSelection[0].name = "Ghidra Goulash";
    menuSelection[0].price = 150;
    break;
  case 2:
    menuSelection[0].name = "Lobster";
    menuSelection[0].price = 250;
    break;
  case 3:
    menuSelection[0].name = "Blinding Stew";
    menuSelection[0].price = 23452;
    break;
  default:
    cout << "Invalid selection" << endl;
    break;
  }

  cout << "\n\nYour choices of drink are:" << endl;
  cout << "[1] - $185   -   Nitrogen Water" << endl;
  cout << "[2] - $645   -   Liquefied Crab" << endl;
  cout << "[3] - $3584  -   Slurpee\n" << endl;
  cin >> drinkChoice;
  switch (drinkChoice) {
  case 1:
    menuSelection[1].name = "Nitrogen Water";
    menuSelection[1].price = 185;
    break;
  case 2:
    menuSelection[1].name = "Liquefied Crab";
    menuSelection[1].price = 645;
    break;
  case 3:
    menuSelection[1].name = "Slurpee";
    menuSelection[1].price = 3584;
    break;
  default:
    cout << "Invalid selection" << endl;
    break;
  }

  subtotal = menuSelection[0].price + menuSelection[1].price;
  tax = subtotal * 0.15;
  total = subtotal + tax;

  cout << "---------------------------RECEIPT--------------------------" << endl;
  cout << menuSelection[0].name << setw(64 - to_string(menuSelection[0].price).length() - menuSelection[0].name.length()) << setfill('.') << "$" << fixed << setprecision(2) << menuSelection[0].price << endl;
  cout << menuSelection[1].name << setw(64 - to_string(menuSelection[1].price).length() - menuSelection[1].name.length()) << setfill('.') << "$" << fixed << setprecision(2) << menuSelection[1].price << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "SUBTOTAL" << setw(56 - to_string(subtotal).length()) << setfill('.') << "$" << fixed << setprecision(2) << subtotal << endl;
  cout << "TAX (15%)" << setw(55 - to_string(tax).length()) << setfill('.') << "$" << fixed << setprecision(2) << tax << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "TOTAL" << setw(59 - to_string(total).length()) << setfill('.') << "$" << fixed << setprecision(2) << total << endl;
  return 0;
}

int saturdayMenu() {
  double subtotal;
  double tax;
  double total;
  int foodChoice;
  int drinkChoice;
  menuSelection menuSelection[2];

  cout << "\n\nYour choices of food are:" << endl;
  cout << "[1] - $68    -   Fresh Tuna Fins" << endl;
  cout << "[2] - $6387  -   Essence of Humanity" << endl;
  cout << "[3] - $1498  -   Deafening Stew\n" << endl;
  cin >> foodChoice;
  switch (foodChoice) {
  case 1:
    menuSelection[0].name = "Fresh Tuna Fins";
    menuSelection[0].price = 68;
    break;
  case 2:
    menuSelection[0].name = "Essence of Humanity";
    menuSelection[0].price = 6387;
    break;
  case 3:
    menuSelection[0].name = "Deafening Stew";
    menuSelection[0].price = 1498;
    break;
  default:
    cout << "Invalid selection" << endl;
    break;
  }

  cout << "\n\nYour choices of drink are:" << endl;
  cout << "[1] - $1978  -   Fruit Punch with Trace Amounts of Fruit" << endl;
  cout << "[2] - $6     -   Vanilla extract" << endl;
  cout << "[3] - $7893  -   The Interns Tears\n" << endl;
  cin >> drinkChoice;
  switch (drinkChoice) {
  case 1:
    menuSelection[1].name = "Fruit Punch with Trace Amounts of Fruit";
    menuSelection[1].price = 1978;
    break;
  case 2:
    menuSelection[1].name = "Vanilla Extract";
    menuSelection[1].price = 6;
    break;
  case 3:
    menuSelection[1].name = "The Interns Tears";
    menuSelection[1].price = 7893;
    break;
  default:
    cout << "Invalid selection" << endl;
    break;
  }

  subtotal = menuSelection[0].price + menuSelection[1].price;
  tax = subtotal * 0.15;
  total = subtotal + tax;

  cout << "---------------------------RECEIPT--------------------------" << endl;
  cout << menuSelection[0].name << setw(64 - to_string(menuSelection[0].price).length() - menuSelection[0].name.length()) << setfill('.') << "$" << fixed << setprecision(2) << menuSelection[0].price << endl;
  cout << menuSelection[1].name << setw(64 - to_string(menuSelection[1].price).length() - menuSelection[1].name.length()) << setfill('.') << "$" << fixed << setprecision(2) << menuSelection[1].price << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "SUBTOTAL" << setw(56 - to_string(subtotal).length()) << setfill('.') << "$" << fixed << setprecision(2) << subtotal << endl;
  cout << "TAX (15%)" << setw(55 - to_string(tax).length()) << setfill('.') << "$" << fixed << setprecision(2) << tax << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "TOTAL" << setw(59 - to_string(total).length()) << setfill('.') << "$" << fixed << setprecision(2) << total << endl;
  return 0;
}

int sundayMenu() {
  double subtotal;
  double tax;
  double total;
  int foodChoice;
  int drinkChoice;
  menuSelection menuSelection[2];

  cout << "\n\nYour choices of food are:" << endl;
  cout << "[1] - $685   -   Spicy Sea Unicorn Tails" << endl;
  cout << "[2] - $9856  -   The Essence of Infinite Regret" << endl;
  cout << "[3] - $798   -   Muting Stew\n" << endl;
  cin >> foodChoice;
  switch (foodChoice) {
  case 1:
    menuSelection[0].name = "Spicy Sea Unicorn Tails";
    menuSelection[0].price = 685;
    break;
  case 2:
    menuSelection[0].name = "The Essence of Infinite Regret";
    menuSelection[0].price = 9856;
    break;
  case 3:
    menuSelection[0].name = "Muting Stew";
    menuSelection[0].price = 798;
    break;
  default:
    cout << "Invalid selection" << endl;
    break;
  }
  

  cout << "\n\nYour choices of drink are:" << endl;
  cout << "[1] - $456     -   Black Coffee" << endl;
  cout << "[2] - $376     -   Starbies" << endl;
  cout << "[3] - $7893455 -   My Tears\n" << endl;
  cin >> drinkChoice;
  switch (drinkChoice) {
  case 1:
    menuSelection[1].name = "Black Coffee";
    menuSelection[1].price = 456;
    break;
  case 2:
    menuSelection[1].name = "Starbies";
    menuSelection[1].price = 376;
    break;
  case 3:
    menuSelection[1].name = "My Tears";
    menuSelection[1].price = 7893455;
    break;
  default:
    cout << "Invalid selection" << endl;
    break;
  }

  subtotal = menuSelection[0].price + menuSelection[1].price;
  tax = subtotal * 0.15;
  total = subtotal + tax;

  cout << "---------------------------RECEIPT--------------------------" << endl;
  cout << menuSelection[0].name << setw(64 - to_string(menuSelection[0].price).length() - menuSelection[0].name.length()) << setfill('.') << "$" << fixed << setprecision(2) << menuSelection[0].price << endl;
  cout << menuSelection[1].name << setw(64 - to_string(menuSelection[1].price).length() - menuSelection[1].name.length()) << setfill('.') << "$" << fixed << setprecision(2) << menuSelection[1].price << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "SUBTOTAL" << setw(56 - to_string(subtotal).length()) << setfill('.') << "$" << fixed << setprecision(2) << subtotal << endl;
  cout << "TAX (15%)" << setw(55 - to_string(tax).length()) << setfill('.') << "$" << fixed << setprecision(2) << tax << endl;
  cout << "------------------------------------------------------------" << endl;
  cout << "TOTAL" << setw(59 - to_string(total).length()) << setfill('.') << "$" << fixed << setprecision(2) << total << endl;
  return 0;
}

string downcase(string string) {
  for (char& c : string) {
    if ( c >= 'A' && c <= 'Z') {
      c += 32;
    }
  }
  return string;
}