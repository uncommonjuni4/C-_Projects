#include<iostream>
using namespace std;


int user(int item0 , int item1, int item2 ,int item3){



  cout<<"Plz select an item which price you want to seee--------------(from item0 to item3)"<<endl;

   string choice ;
   cin>>choice;
 cout<<"Enter choice    ="<<choice<<endl;
   if(choice  == "item0"){
      cout<<"Your option for item0 slectected---"<<endl;
      
      return item0;
   }
   else if(choice  == "item1"){
      cout<<"Your option for item1 slectected---"<<endl;
      
      return item1;
   }
   else if(choice  == "item2"){
      cout<<"Your option for item2 slectected---"<<endl;
      
      return item2;
   }
   else if(choice  == "item3"){
      cout<<"Your option for item3 slectected---"<<endl;
      
      return item3;
   }else{
    cout<<"Plz enter correct choice "<<endl;

    return 0;
   };



};


  int  discout(int item0 , int item1, int item2 ,int item3){


       int discout = 5;


      int itemds[4] ={item0  , item1, item2 ,item3} ;
       for(int  i = 0 ; i<=4;i++){
            itemds[i] = itemds[i]- discout;
           cout<<":Value of item agter discout  "<<itemds[i]<<endl;
       }
       
        

  };




int main(){



    int item[4] = {22,23 , 34, 35};

      

    int valu;

    valu  =  user(item[0],item[1],item[2],item[3]);

      cout<<"value  =  "<<valu;


      int getDisValue = discout(item[0],item[1],item[2],item[3]);

    return 0;
}