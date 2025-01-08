#include <iostream>

using namespace std;
// Declare Function
 float calcGPA(float math_point, float chem_point, float safety_point, float stat_point, float phy_point, float chemlab_point)
  {
    float result;
    const int hour4 = 4;
    const int hour3 = 3;
    const int hour1 = 1;
    //Calculate Result GPA
    result = ((math_point * hour4) + (chem_point * hour3) + (chemlab_point * hour1) + (safety_point * hour1) + (stat_point * hour3) + (phy_point * hour4)) / 16;
    
    return result;
 }
 //Check The Point in The Ragion or not
 bool isValidPoint(float point)
 {
     return point >= 0 && point <= 4;
 }
  
int main() {
    
    cout << "   ==== Calculate GPA for 1st Level ====\n";
    cout << "\nAppreciationm(A, A-, B, B+, C+, C, D, F) By Percent(Point):\n";
    cout << "A => 100 ~ 90\t\t(4 Points)\nA- => 90 ~ 85\t\t(3.67 Points)\nB+ => 85 ~ 80\t\t(3.33 Points)\nB => 80 ~ 75\t\t(3 Points)\n";
    cout << "C+ => 75 ~ 70\t\t(2.67 Points)\nC => 70 ~ 65\t\t(2.33 Points)\nD => 65 ~ 60\t\t(2 Points)\nF => less than 60\t(Zero Points)\n";
    cout << "\t==============================\n";
    char choice;
    do
    {
    //Take input from user
    float mathPoint, chemPoint, safetyPoint, statPoint, phyPoint, chemLabPoint;
     cout << "Type The Point U get it in\n\nMathematics: ";
     cin >> mathPoint;
     
     cout << "\nChemistry: ";
     cin >> chemPoint;
     
     cout << "\nSafety: ";
     cin >> safetyPoint;
    
     cout << "\nSTAT: ";
     cin >> statPoint;
    
     cout << "\nPhysics: ";
     cin >> phyPoint;
    
     cout << "\nChemistry Lab: ";
     cin >> chemLabPoint;
     
 // test input
     if (!isValidPoint(mathPoint) || !isValidPoint(chemPoint) || !isValidPoint(safetyPoint) || !isValidPoint(statPoint) || !isValidPoint(phyPoint)  || !isValidPoint(chemLabPoint))
     {
       cout << "\nAktb El-Points Sa7 ya Mo7tarem";
     }
     else {
// Call 📞  calc_gpa   
     cout << "====================\n";
        cout << "\nYour GPA = " << calcGPA(mathPoint, chemPoint, safetyPoint, statPoint, phyPoint, chemLabPoint) << endl;
     cout << "\n====================\n";
     }
     
     cout << "Do you want to calculate another GPA (y/n)? :";
     cin >> choice;
   } while(choice == 'Y' || choice == 'y');
   
   cout << "\nThank you for using the GPA calculator! Goodbye.";
    return 0;
}