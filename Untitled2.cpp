#include<iostream>
using namespace std ;







class stud{
	
	private:
		 string nam1;
		 
		    
		  int marks[2];
		
		
    public:
    	
    	  friend  void check(  stud s );
	
	  stud(string na , int mark[]){
	  	    nam1 = na;
	  	    
	  	    for(int i =0 ; i<=2 ; i++){
	  	    	   marks[i] = mark[i];
			  };
	  };
	  
	  void display(){
	  	    cout<<"Name of   student  ----------"<<nam1<<endl;
	  	    cout<<"Marks of Subject 1   ---------- "<<marks[0]<<endl;
	  	    cout<<"Marks of Subject 2   ---------- "<<marks[1]<<endl;
	        cout<<"Marks of Subject 3   ---------- "<<marks[2]<<endl;
	  };
};



  ////// hhere i make an freinded function   
   
   
     void check(stud s ){
     	  int sum   = 0 ;
     	  
     	  for(int i =  0 ; i<=2; i++){
     	  	  sum += s.marks[i];
		   }
		   
		   int avg =  sum / 3 ;
		   
		   if(avg > 45 ){
		   	 cout<<"Qualifies for Scholarship!"<<endl;
		   }else{
		   	 cout<<"Not Qualifies for Scholarship!"<<endl;
		   }
     	   
	 };




int main(){
	
	
	int mark1[3] = {40, 44, 56};
		int mark2[3] = {50, 66, 56};
	
 stud   setst[2] = {
 	 
 	 stud("Juni " , mark1),
 	 stud("Zain " , mark2),
 	
 };
 
   for(int i = 0 ; i<=3 ;i++){
   	cout<<"Resut card of student  "<<i+1<<endl;
   	   setst[i].display();
   	   check(setst[i]);
   }
	
	
	return 0 ;
};
