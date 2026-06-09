#include<iostream>
using namespace std ;
  /// here decalre function 
 void panel();   
 	
 void user_detail(char user_choice[], char user_id[], char user_name[], char user_city[], int size); 
 	  
 void normal(char user_choice[]  , int size);


 void slected(char user_choice[]  , int size);





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
    
    
    user_detail(user_choice ,user_id , user_name,user_city,size);
   
   cout<<"--------------------Game Started  Here --------------------"<<endl;
   
   
   
   //mode slected here 
   
   slected(user_choice  , size);
    

  
   
     



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
 void slected(char user_choice[]  , int size){
 	   if((user_choice[0]=='n' && user_choice[1]=='o' && user_choice[2]=='r'  && user_choice[3]=='m' && user_choice[4]=='a' && user_choice[5]== 'l' ) ||(user_choice[0]=='N' && user_choice[1]=='O' && user_choice[2]=='R'  && user_choice[3]=='M' && user_choice[4]=='A' && user_choice[5]== 'L' ) || (user_choice[0]=='1')){
  	      normal(user_choice  , size);
	  };
 	 
 };
 
 // for normal level game
 
 
  void normal( char user_choice[]  , int size ){
  	    cout<<"Normal mode on"<<endl;
  };
 
