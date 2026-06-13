#include<iostream>
using namespace std ;

  /// here decalre function 
 void panel();   
 	
 void user_detail(char user_choice[], char user_id[], char user_name[], char user_city[], int size); 
 	  
 void slected(char user_choice[], char user_id[], char user_name[], char user_city[], int size, int level[], int &levelcout);
 
 void user_display(char user_choice[], char user_id[], char user_name[], char user_city[], int size ,int level[] ,int &levelcout); 
 
 void empty(char user_choice[], char user_id[], char user_name[], char user_city[]);
 
 void easy(char user_choice[]  , int size , int level[], int &levelcout);







//  here   the main body start 
int  main (){
    
  ///for game infarcae which help user to  hepl playing game 
  
    panel();
    
  /// for user dteail 
  int size =  50;
    char user_id[size];
    char user_name[size];
    char user_city[size];
  
    char  user_choice[10];
	
	/// for game control
	int  level[10]= {1,2,3,4,5,6,7,8,9};
	
	int  levelcout = 0; 
    
    user_detail(user_choice ,user_id , user_name,user_city,size);
   
   cout<<"--------------------Game Started  Here --------------------"<<endl;
   
   //mode slected here 
   
   slected( user_choice, user_id,  user_name,  user_city,  size, level, levelcout);
   
   user_display(user_choice ,user_id , user_name,user_city,size , level, levelcout);
   
   return 0 ;	
};



 //// simple user help  interface

 void panel(){
 	//   simple cout  for game User inter face 
   cout<<"     * * * * * * * * * * * * * *  * * * * *"<<endl;
   cout<<"     *                                    *"<<endl;
   cout<<"     *                                    *"<<endl;
   cout<<"     *             Welcome to             *"<<endl;
   cout<<"     *          World Search Game!        *"<<endl;
   cout<<"     *                                    *"<<endl;
   cout<<"     *                                    *"<<endl;
   cout<<"     *                                    *"<<endl;
   cout<<"     * * * * * * * * * * * * * *  * * * * *"<<endl<<endl;
   
   cout<<"   -------------- START MENU --------------"<<endl;
   cout<<"                 Select a mode "<<endl;
   cout<<"       (Enter the  Option  number to choice!) "<<endl;
   cout<<"                    1-Easy " <<endl;
   cout<<"                    2-Normal " <<endl;
   cout<<"                    3-Hard " <<endl;
   cout<<"       Game Rule : You Have 3 attempts to  "<<endl;
   cout<<"                      answer correctly.   "<<endl<<endl;
   cout<<"    In User detail First enter User Name"<<endl;
   cout<<"      next user id and then user city "<<endl;
    cout<<"   --------------  MENU End  ---------------"<<endl<<endl<<endl;
   cout<<"-----------------Let's  Enter User Detail ----------------"<<endl;
   
   
 	
 };
  //for user detail
   void user_detail(char user_choice[], char user_id[], char user_name[], char user_city[], int size){
  	       //     ---------------------------------? 
//     here  all code for slect userchoice ? + Userdetail

     cout<<"User Name - "<<endl;
    cin.getline(user_name ,size);
     cout<<"User ID - "<<endl;
    cin.getline(user_id ,size);
    cout<<"User city - "<<endl;
    cin.getline(user_city ,size);
     
     //user-choie
  
    cout<<"Plz  select game Level- "<<endl;
    cin.getline(user_choice, size);
     
  
  };
  
   void user_display(char user_choice[], char user_id[], char user_name[], char user_city[], int size, int level[], int &levelcout){
  	       //     -------------------------------  
   cout<<"  - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
   cout<<"     -           User Detail Box          "<<endl;
   cout<<"     -  User Name :"<<user_name<<endl;
   cout<<"     -  User Id : "<<user_id<<endl;
   cout<<"     -  City : "<<user_city<<endl;
   cout<<"     -  Level : "<<user_choice<<endl;
   cout<<"     -  Level No "<<levelcout<<endl;
   cout<<"     -                                       "<<endl;
   cout<<"     - * * * * * * * * * * * * *  * * * * * * *"<<endl<<endl;
   
   
  
  };
  
  
  
//  for mode slectional 
 void slected(char user_choice[] ,char user_id[] , char user_name[],char user_city[], int size, int level[], int &levelcout){
 	   if((user_choice[0]=='e' && user_choice[1]=='a' && user_choice[2]=='s'  && user_choice[3]=='y'  ) ||(user_choice[0]=='E' && user_choice[1]=='A' && user_choice[2]=='S'  && user_choice[3]=='Y'  ) || (user_choice[0]=='1')){
  	     easy(user_choice  , size  , level, levelcout);
	  }else if (user_choice[0] == '\0') {
        empty(user_choice, user_id, user_name, user_city);
    };
 	 
 };
 
// for emplt 
void empty(char user_choice[], char user_id[], char user_name[], char user_city[]) {
    cout << "[Alert]: No level option was provided!" << endl;
};
 
 // for easy  level game
void easy(char user_choice[], int size, int level[], int &levelcout) {
    char playagin;

    do {
        cout << "========================Easy mode=================================" << endl;
        
        int attempts = 3; // ?? ??? ?? ??? ??? ???? ??? ?????? 3 ??? ??
        bool levelPassed[3] ;
        char userword[10];

        
        char secret1[] = {'m', 'a', 'n', '_', 'o'};
        char guess1 = 'g';
        
//      for level 1 
        while (attempts > 0) {
            cout << "\nLevel 1: " << secret1 << " | Attempts: " << attempts << endl;
            cout << "Enter your guess: ";
            cin.getline(userword, 10);

            if (userword[0] == guess1) {
                cout << "Correct! Moving to Level 2..." << endl;
                levelPassed[0] = true;
                levelcout++;
                break; 
            } else {
                attempts--;
                cout << "Wrong! Attempts left: " << attempts << endl;
                 levelPassed[0] = false;
            }
        }

        // --- for level  2
        if (levelPassed[0]) {
            attempts = 3; // ???? 2 ?? ??? ?????? ?? ??? ????
            char secret2[] = {'l', 'a', 'h', '_', 'r', 'e'};
            char guess2 = 'o';

            while (attempts > 0) {
                cout << "\nLevel 2: " << secret2 << " | Attempts: " << attempts << endl;
                cout << "Enter your guess: ";
                cin.getline(userword, 10);

                if (userword[0] == guess2) {
                    cout << "Congratulations! You won the game!" << endl;
                    levelcout++;
                    levelPassed[0] = true;
                    break;
                } else {
                    attempts--;
                    cout << "Wrong! Attempts left: " << attempts << endl;
                }
            }
        }
        
        
//        for level3 
          if (levelPassed[1]) {
            attempts = 3; // ???? 2 ?? ??? ?????? ?? ??? ????
            char secret3[] = {'K', 'a', 'r', '_', 'c', 'h', 'i'};
            char guess3 = 'a';

            while (attempts > 0) {
                cout << "\nLevel 2: " << secret3 << " | Attempts: " << attempts << endl;
                cout << "Enter your guess: ";
                cin.getline(userword, 10);

                if (userword[0] == guess3) {
                    cout << "Congratulations! You won the game!" << endl;
                    levelcout++;
                    levelPassed[1] = true;
                    break;
                } else {
                    attempts--;
                    cout << "Wrong! Attempts left: " << attempts << endl;
                }
            }
        }
   
//    for game  out and play again rule ;

        if (attempts <= 0) {
            cout << "\nGame Over! You lost." << endl;
        }

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playagin;

    } while (playagin == 'y' || playagin == 'Y');
};
  	
