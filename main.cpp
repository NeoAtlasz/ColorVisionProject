#include <iostream>
using namespace std;

int main () {

    string color1, color2;
    int colorblindness = 0;
    char retry = 'Y';

    while (retry == 'Y' || retry == 'y') {
    
    cout << "Color blindness shows up in certain individuals, all with diverse color visibility. " << endl;
    cout << "There are different types and severities of color blindness, the most common being deuteranomaly," << endl;
    cout << "which is when an individual struggles with identifying green, yellow, and red, as they all will look the same.\n" << endl;
    
    cout << "Choose two colors from the following list to check which colorblindness is unable to destinguish between them!\n" << endl;
    cout << "Red\n";
    cout << "Yellow\n";
    cout << "Green\n";
    cout << "Blue\n";
    cout << "Purple\n";
    cout << "Pink\n" << endl;

    cin >> color1 >> color2;
    
 //These are for protanopia and deuteranopia
    if ((color1 == "Red" && color2 == "Green") || (color1 == "Green" && color2 == "Red")){
       
        colorblindness = 1;
    }
    else if ((color1 == "Blue" && color2 == "Purple") || (color1 == "Purple" && color2 == "Blue")){

        colorblindness = 1;

    }
//Trianopia
    if ((color1 == "Blue" && color2 == "Green") || (color1 == "Green" && color2 == "Blue")){
        colorblindness = 2;

    }
    else if ((color1 == "Yellow" && color2 == "Pink") || (color1 == "Pink" && color2 == "Yellow")){
        colorblindness = 2;

    }
    switch (colorblindness){
        case 1:
        cout << "Individuals with protanopia OR deuteranopia colorblindness would struggle to distinguish between these colors :(" <<endl;
        break;
        case 2:
        cout << "Individuals with trianopia colorblindness would struggle to distinguish between these colors" <<endl;
        break;
        default:
        cout << "Those colors are either distingushable or I'm not sure.."<<endl;
        break;

    }
    cout << "\nWould you like to retry? (Type Y or N): ";
    cin >> retry;
} 
}



    //switch (1) {
        //checking if protanopia
   // case 1: if (color1 == "red" && color2 == "yellow" || color1 == "yellow" && color2 == "red"){
       // colorblindness = "protanopia";
    //cout << "Red & green will appear alike to someone with protanopia" << endl;
    
        //checking if deuteranopia
  //  case 2: if (color1 == )
   // break;
    //default:
 //   cout << "" << endl;




    //checking for protanopia


  


   
   // while (cin >> color1 && cin >> color2) {
   //    if (color1 == "red" && color2 == "green"){
    //         cout << "Red & green will appear alike to someone with protanopia" << endl;
       
 
 //   while ((red == "red" && green == "green") || (blue == "blue" && purple == "purple")) {
   //     if (red == "red" && green == "green") {
    //    cout << red && green << "Red & green will appear alike to someone with protanopia" << endl;
   //     }  else if (blue == "blue" && purple == "purple") {
  //         cout << blue && purple << " Blue & Purple will appear alike to someone with protanopia" << endl; 
        
