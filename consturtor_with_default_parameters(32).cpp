#include<iostream>

using namespace std ;



class complex{
      private :
        int n1 , n2 , n3 ;

    // friend class complexB;
        public:

         complex(int n1 , int n2 , int n3=2){
                int a = n1 ;
                int b = n2 ;
                int c = n3;

                cout<<"A  = "<<n1<<endl;
                cout<<"B  = "<<n2<<endl;
                cout<<"C  = "<<n3<<endl;

        };

};







////consturtor with default arguments 





int main(){
 

      complex o1(12 , 14);
      
    return 0 ;
}