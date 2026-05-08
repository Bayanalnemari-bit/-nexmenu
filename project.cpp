#include<iostream> 
#include<string>
using namespace std;
    
   //This cpp program is written by Bayan , Ghadi ,lama 
     
  
  int main() { 
        
        // the menu and prices
       const int NumItems=4;
       string   MenuItems  [ NumItems ]  =  {"Burger " , "Fries " ,"Soda ","Pizza "} ;
       double Prices [ NumItems]  =   { 5.00   ,  2.50     , 1.50 ,  8.00 }; //prices 
       const double taxrate = 0.15;
    
       
	    int quantities [NumItems] = {0 ,0 ,0 ,0};
     	int quantity;
    	int choice;
	    double subtotal = 0.0 ; 
    	double total , tax;
    	   
	
	 
	 cout<<"--- Welcome to Fast Food Ordering System ---\n" <<endl;
	 
	 do{ 
	  cout<< "--- Menu ---"<<endl;
	 for ( int i=0; i<NumItems; i++) { 
	 cout<<  i + 1 <<". " <<  MenuItems [ i ] <<"- $" <<Prices[i] <<endl;
	 } 
     
	 	  
        cout<<"0. Finish Order"<<endl; 
      
      cout<<"Enter the item number to order (0 to finish): ";
      cin>>choice;
          
          
          
        //choice 
       if (choice < 0  ||   choice > NumItems)  
	   {  cout<<"Invalid choice please enter a valid num "<<endl; 
	   continue; // we use it to show values again 
	   }
	   if (choice ==0) { 
	   
	   break; // to stop the loop  
       }
	    
	    
	    
	   //take quantity frome user
	   cout<<"Enter the quantity for "<<MenuItems [choice-1] <<" : " ;
	   cin>> quantity ;
	   
	   // loop for quantity if the usre input wrong number
	   while( quantity<=0) { 
	   cout<<"Invalid quantity "<<endl;
	   cin>> quantity;
	   }   
	   
	   
	   //array  for quantity
	   quantities [choice -1] += quantity;
	   cout<<endl; 
	    
	  } while( choice !=0) ; 
	   
	   
	   //subtotal 
	   for (  int i=0; i < NumItems ; i++ ) {
	    
	   	   subtotal+= quantities [i] * Prices[i] ;
        }     
	   
	   //taxrate , total
	   tax  =  subtotal * taxrate;
	   total =subtotal +tax; 
	    
	    cout<<"\n--- Order Summary ---"<<endl;
	    for ( int i = 0; i<NumItems; i++ ) { 
	    if ( quantities [i ] >0 ){ 
	    cout<<quantities [i] <<" x "<<MenuItems [i] <<"- $"  <<quantities[i] *Prices[i]<<endl;
	    
	       		} 
		}
	    
	    
	    //display the order
	   cout<<"\nSubtotal: $ "<<subtotal<<endl; 
	   cout<<"Tax (15%): $"<<tax<<endl;
	   cout<<"Total: $"<< total <<endl;
	   
	   cout<<"\nThank you for your order! "<<endl;
	   
	   return 0;
}
	    
	   
	   
	   
	   
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
