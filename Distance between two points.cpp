#include<iostream>
using namespace  std ;
#include<math.h>

   class   Juni {
   	   int a  , b ;
   	   
   	   
   	   public: 
   	   
   	   
   	   friend  void findPoints(Juni &  , Juni  &);
   	     
   	     Juni(void);
   	    
   	 
   	
   };
   
   
   
    Juni::Juni(){
    	cout<<"Plz enter  X-axis Number-----"<<endl;
    	
    	cin>>a ;
    	
    	cout<<"Enter X-axis Number  = "<<a<<endl;
    	
    		cout<<"Plz enter  Y-axis Number-----"<<endl;
    	
    	cin>>b ;
    	
    	cout<<"Enter Y-axis Number  = "<<b<<endl;
	}


  void findPoints(Juni  &  o1 , Juni & o2){
  	     int x1 = o1.a ;
  	      int x2 = o2.a ;
  	     int y1 = o1.b ;
  	     int y2 = o2.b;
  	     
  	     int disca = ((x2-x1) * (x2 - x1)) +   ((y2-y1) * (y2 - y1)) ;
  	     
  	     float   dis   = sqrt(disca);
  	     
  	     
  	     cout<<"dist  = "<<dis;
  	     
  	     
  }

  







int main(){
	 
	 
	 Juni o1, o2;
	 
	 findPoints(o1 , o2);
	
	
	 return 0 ;
}




