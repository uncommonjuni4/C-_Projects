#include<iostream>

using namespace std ;

  class calbody ;
  
  class cal{
  	 private:
  	        int n1 , n2;
  	 	string choice;
  	 		friend class calbody;
  	 	
  	 	
  	 	
  	 public: 
  	 
  	 void  setData(){
  	 	 cout<<"PLz Select an option --------(select option  to enter the same name of option show Here ------)"<<endl;
  	 	 
  	 	 for(int i=1 ; i<=7; i++){
  	 	 	      if(i == 1){
  	 	 	      	   cout<<"1 : Add "<<endl;
					  }else if (i ==2 ){
					  	 cout<<"2 : Sub "<<endl;
					  }else if (i ==3 ){
					  	 cout<<"3 : Mul "<<endl;
					  }else if (i ==4 ){
					  	 cout<<"4 : Div "<<endl;
					  }else if (i ==5 ){
					  	 cout<<"5 : Mod "<<endl;
					  }else if( i == 6 ){
					  	cout<<"5 : Squ "<<endl;
					  }else if(i==7){
					  	cout<<"7 : Cub"<<endl;
					  }
			}
			cout<<"Now Enter ------------------"<<endl;
			cin>>choice;
			
	   }
	   
	    void display(){
	    	 cout<<" Enter  choice  "<<choice<<endl;
	    	 
		}
		
		void input(){
			cout<<"Enter 1st Number    = "<<endl;
			cin>>n1 ;
			cout<<"1st number = "<<n1<<endl<<endl;
			
			cout<<"Enter 2nd Number    "<<endl;
			cin>>n2 ;
			cout<<"2nd number = "<<n2<<endl<<endl;
		}
	   
	   
  };
  
   class  calbody{
   	 private :
   	 	int a ; 
   	 	
   	public: 
	   void add(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int sum = a +b ;
   		  	   cout<<"Sum  of Number "<<a<<"  and  Number  "<<b<<" is "<<sum<<endl;
			 }
			 
			  void div(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int div = a /b ;
   		  	   cout<<"Disino  of Number "<<a<<"  and  Number  "<<b<<" is "<<div<<endl;
			 }
   		
   		  
			 void sub(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int sub = a - b ;
   		  	   cout<<"Subration  of Number "<<a<<"  and  Number  "<<b<<" is "<<sub<<endl;
			 }
			   
			   
			 void mod(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int mod = a % b ;
   		  	   cout<<"Moduls   of Number "<<a<<"  and  Number  "<<b<<" is "<<mod<<endl;
			 }
			   
			   
			 void multi(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int mul = a * b ;
   		  	   cout<<"Multipication  of Number "<<a<<"  and  Number  "<<b<<" is "<<mul<<endl;
			 }
			 
			 void sq(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int sq1 = a *a ;
   		  	   int sq2 = b *b ;
   		  	   cout<<"Square  of Number "<<a<<" is "<<sq1<<endl;
   		  	   cout<<"Square  of Number "<<b<<" is "<<sq2<<endl;
			 }
			 
			 void cub(cal o1 ){
   		  	   int a = o1.n1;
   		  	   int b = o1.n2 ;
   		  	   
   		  	   int cub1 = a *a *a ;
   		  	   int cub2 = b *b  * b;
   		  	   cout<<"Cube   of Number "<<a<<" is "<<cub1<<endl;
   		  	   cout<<"Cube   of Number "<<b<<" is "<<cub2<<endl;
			 }
   	     void choiceC( cal  o1 ){
   	     	   if(o1.choice =="Add"){
   	     	   	cout<<"Your  Option Sueecessfully Scelcted  for Adtion"<<endl;
					   add(o1);	   
					
				   }else if( o1.choice == "Sub"){
				   	cout<<"Your  Option Sueecessfully Scelcted  for Subtaraction"<<endl;
				   	 sub(o1);
				   }else if(o1.choice =="Div"){
				   	cout<<"Your  Option Sueecessfully Scelcted  for Division"<<endl;
				   	  div(o1);
				   }else if(o1.choice == "Mod"){
				   	cout<<"Your  Option Sueecessfully Scelcted  for Modulus "<<endl;
				   	 mod(o1);
				   }else if(o1.choice == "Mul"){
				   	  	cout<<"Your  Option Sueecessfully Scelcted  for Multiplion "<<endl;
				   	  	multi(o1);
				   }else if(o1.choice == "Squ"){
				   	 	cout<<"Your  Option Sueecessfully Scelcted  for Sqauree of Numbers  "<<endl;
				   	 	sq(o1);
				   }else if(o1.choice == "Cub"){
				   	    	cout<<"Your  Option Sueecessfully Scelcted  for Cube of Numbers  "<<endl;
				   	    	cub(o1);
				   }
			cout<<"Thanks for Juni  Calculator "<<endl;
			}
   };


   







int main(){
	
	cal o1;
	
	
	o1.setData();
	o1.display();
	
	calbody body1  ;

	
	
	o1.input();
	
		
		
    body1.choiceC(o1);
	 
	
	
	return 0 ;

}
