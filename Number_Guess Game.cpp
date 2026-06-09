#include<iostream>
using namespace std ;







//  here   the main body start 
int  main (){
    
    
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
   
   
     int size =  50;
     char user_id[size];
     char user_name[size];
     char user_city[size];
     cin.getline(user_name ,size);
     cin.getline(user_id ,size);
     cin.getline(user_city ,size);
   
     cout<<"  - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
   cout<<"     -           User Detail Box          "<<endl;
   cout<<"     -  User Name :"<<user_name<<endl;
   cout<<"     -  User Id : "<<user_id<<endl;
   cout<<"     -  City : "<<user_city<<endl;
   cout<<"     -                                        "<<endl;
   cout<<"     -                                       "<<endl;
   cout<<"     - * * * * * * * * * * * * *  * * * * * * *"<<endl<<endl;
   return 0 ;	
};

