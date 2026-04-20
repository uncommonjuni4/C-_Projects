#include <iostream>
using namespace std;

int main() {
    int days  , tranAmount;
    int deposit  =0 ;     /// store deposit 
	int  width  = 0 ;       ////////stroe widtrwa
	int highD =0 ;          //// stroe high deposit 
	int highW = 0;          ////  store total wisdrw
	
	int netB = 0 ;       //// stroe net banlce 
    cout<<"Enter the Days :"<<endl<<endl<<endl;
    cin>>days;
    cout<<"Enter days  = "<<days<<endl<<endl<<endl;
    cout<<"After Slect total Days Enter your TransionAmout  :"<<endl<<endl;
  
     cout<<"Enter TransionAmount    = "<<tranAmount<<endl<<endl<<endl;
     
     cout<<"If you enter Your transion in Postive then show total deposit and Negative show your Total Widthraw____----"<<endl<<endl<<endl;
    for(int i = 0; i<=days; i++){
    	  cin>>tranAmount;
    	  netB= netB+tranAmount;
    	if(tranAmount>0 ){
    		deposit++;
    	    highD++;

    	
		}else if(tranAmount < 0){
			width++;
			 highW++;
		}
    	  
    
	  
	  
	}
	

	  


  


        
	
//	  final ouptuts 
     cout<<"Total Deposits   = "<<deposit<<endl<<endl;
     cout<<"Total Widthraws   = "<<width<<endl<<endl;
      
      
     	 if(tranAmount > 10000 ){
      	cout<<"High Deposit"<<endl;
             
       
	  }else if (tranAmount < -5000 ){
	  	cout<<"Large Withdrawal"<<endl;

       
        
	  }else{
	  	cout<<"Normal Transaction"<<endl;
	  }
	   
	   cout<<"Final balance After All Transaction    = "<<netB<<endl;
	   
      if(tranAmount > 50000){
	  	cout<<"Excellent Activity"<<endl;
	  }else if(tranAmount >= 10000 && tranAmount <= 50000){
	  	cout<<"Moderate Activity"<<endl;
	  }else{
	  	cout<<"Low Activity"<<endl;
	  }
//6.	Additional Rule (Nested If Required):
   
       if(width > deposit){
       	    if(highW > 3 ){
       	    		cout<<"Fraud Alert";
			   }else{
			   	cout<<"Warning: High Spending"<<endl;
			   }
	   }else{
	   	cout<<"good Wordking "<<endl;
	   }
    
	  
    return 0;
}
