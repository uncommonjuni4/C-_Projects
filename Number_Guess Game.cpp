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
   cout<<"     -                                        "<<endl;
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
 
 // for normal level gamevd
 
 
void easy(char user_choice[], int size, int level[], int &levelcout) {
    cout << "========================Easy mode=================================" << endl;
    cout << "---In easy mode you guess missing letter by putting one by one attempt---" << endl;
    
    int attempts_left = 3;
    bool win = false;
    
  
    char secret[] = {'j', 'u', 'n' ,'_'};      
    char guess_letter = 'i';     // The correct character to complete "juni"
    char userword[10];           // Fixed: Increased buffer size to prevent memory crashes
    
    // Fixed: Replaced confusing for-loop with a clean while-loop for tracking attempts
    while (attempts_left > 0) {
        cout << "\nComplete this word ----> " << secret << endl;
        cout << "Attempts left: " << attempts_left << ". Enter your guess letter: " << endl;
        
        // Fixed: Reading into a safe buffer size instead of the giant 'size' variable
        cin.getline(userword, 10);
        
        cout << "User entered character is: " << userword[0] << endl;
        
        // Fixed: Comparing user input against the hidden correct letter
        if (userword[0] == guess_letter) {
            cout << "? Win! ?" << endl;
            secret[3] = guess_letter; // Replaces '_' with 'i'
            cout << "The completed word is: " << secret << endl;
            win = true;
            levelcout++; // Progresses player level tracker
            break; 
        } 
        else {
            attempts_left--;
            cout << "? Wrong character entered! Try again." << endl;
            cout << "Attempts left: " << attempts_left << endl;
        }
    }
    
    // Fixed: Evaluates a lose condition cleanly outside the input loop
    if (!win) {
        cout << "\nYou have used all attempts--" << endl;
        cout << "Lose----" << endl;
    }
}
  	    
