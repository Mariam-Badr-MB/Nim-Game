#include <limits>
#include <iostream>

using namespace std;
int main(){    
    int number,points;
    cout<<"********Welcome to this Game********"<< endl;     // Print the welcome message for the game
    cout<<"To win, you have to score 100 point"<<endl;   // Provide instructions to the players
    cout<<"The number is between (1:10)"<<endl;

    points = 0 ;
    cout<<"points = "<<points<<endl;

    while (points < 100)
    {           // Player 1's turn
        cout<<"player1: please, enter the number: ";
        cin>> number ;
                          
// Function to get valid input from the player
        while (true){  

         if (cin.fail())
           {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"invalid," <<endl;
            cout<<"player1: please, enter the number: ";
            cin>> number ;     
          }
         else
             {
            break;
          }

         }    // Check if the input is within the valid range
        while (number < 1 || number > 10 ){      

           cout<<"player1 please enter number between (1:10): ";
           cin >> number;
           while (true){  
             if (cin.fail())
               {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"invalid," <<endl;
                cout<<"player1: please, enter the number: ";
                cin>> number ;     
                 }
            else
                {
                break;
                  }
         }
           }
        points += number ;  
        while (points >= 100)  

          {
            if (points == 100){            // If Player 1 has won, print the message and end the game
                cout << "player 1 is winning " <<endl;
                cout << "     End Game "<<endl ;
                exit(EEXIST); 
            }
            else         
                 {
                points -= number;
                cout << "player1:you have score bigger than 100 point.please, enter the number:  ";
                cin >> number;
                while (true){  
                    if (cin.fail())
                        {
                           cin.clear();
                           cin.ignore(numeric_limits<streamsize>::max(),'\n');
                           cout<<"invalid," <<endl;
                           cout<<"player1: please, enter the number: ";
                           cin>> number ;     
                            }
                    else
                      {
                      break;
                        }

                     }
                points += number ;  
            }
        } 
      
        cout <<"Now point = "<< points <<endl;   
          // Player 2's turn      

        cout<<"player2: please, enter the number: ";
        cin >> number ;
        while (true){  

         if (cin.fail())
           {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"invalid," <<endl;
            cout<<"player2: please, enter the number: ";
            cin>> number ;     
          }
         else
             {
            break;
          }

         }

        while (number < 1 || number > 10 ){

           cout<<"player2 please enter number between (1:10): " ;
           cin >> number;
           while (true){ 
            if (cin.fail())
             {
              cin.clear();
              cin.ignore(numeric_limits<streamsize>::max(),'\n');
              cout<<"invalid," <<endl;
              cout<<"player2: please, enter the number: ";
             cin>> number ;     
            }
           else
             {
            break;
          }

         }
        }
        points += number ;               // Display current points
        while (points >= 100)  
          {
            if (points == 100){                  // If Player 2 has won, print the message and end the game
                cout << "player 2 is winning "<<endl;
                cout << "     End Game "<<endl ;
                exit(EEXIST);
            }
            else
                 {
                points -= number;
                cout << """player2:you have score bigger than 100 point.please, enter the number:  """;
                cin >>number;
                  while (number < 1 || number > 10 ){
                       cout<<"player2 please enter number between (1:10): " ;
                       cin >> number;
                       while (true){ 
                          if (cin.fail())
                          {
                             cin.clear();
                             cin.ignore(numeric_limits<streamsize>::max(),'\n');
                             cout<<"invalid," <<endl;
                             cout<<"player2: please, enter the number: ";
                             cin>> number ;     
                              }
                          else
                          {
                            break;
                             }               
                             }
                              }
                 while (true){  
                  if (cin.fail())
                    {
                     cin.clear();
                     cin.ignore(numeric_limits<streamsize>::max(),'\n');
                     cout<<"invalid," <<endl;
                    cout<<"player2: please, enter the number: ";
                    cin>> number ;     
                    }
                else
                  {
                break;
                  }
                   }
                points += number ;  
            }       
        }         
        
        cout <<"Now point = "<< points <<endl; 
    }
    
    
return 0;
}




