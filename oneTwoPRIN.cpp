#include<iostream>
#include<string.h>
using  namespace std;
string c;
int sum(int a){
       switch(a){
        case 0: 
               cout<<" : no is zero : ";
               break;
        case 1: 
               cout<<" : one : "<<a;
               break;
        case 2: 
               cout<<" : two : "<<a;
               break;
        case 3: 
               cout<<" : three : "<<a;
               break;
        case 4: 
               cout<<" : four : "<<a;
               break;
        case 5: 
               cout<<" : five : "<<a;
               break;
        case 6: 
               cout<<" :  six : "<<a;
               break;
        case 7: 
               cout<<" : seven : "<<a;
               break;
        case 8: 
               cout<<" : eight : "<<a;
               break;
        case 9: 
               cout<<" : nine : "<<a;
               break;
        case 10: 
               cout<<" : ten : "<<a;
               break;
        case 11: 
               cout<<" : eleven : "<<a;
               break;
        case 12: 
               cout<<" : twelve : "<<a;
               break;

         case 13: 
               cout<<" : therthiy : "<<a;
               break;

         case 14: 
               cout<<" : fourtiy : "<<a;
               break;

         case 15: 
               cout<<" : fifty : "<<a;
               break;

         case 16: 
               cout<<" : sixtin : "<<a;
               break;

         case 17: 
               cout<<" : seventin : "<<a;
               break;

         case 18: 
               cout<<" : eighty : "<<a;
               break;

         case 19: 
               cout<<" : ninety: "<<a;
               break;

         case 20: 
               cout<<" : twontiy : "<<a;
               break;
       }
       
}

string sumo(int t){

       switch(t) {
        case 1: 
               c= "one";
               break;
        case 2: 
               c= "two" ;
               break;
        case 3: 
               c= "three" ;
               break;
        case 4: 
               c= "four";
               break;
        case 5: 
               c= "five";
               break;
        case 6: 
               c= "six";
               break;
        case 7: 
              c= "seven" ;
               break;
        case 8: 
               c= "eight";
               break;
        case 9: 
               c= "nine" ;
               break;
}
    return c;
}


 void demo(int a){
       
      if(a>20 && a<30){
                  int t=a%10;
                  sumo(t);
                  cout<<" : twonty"<<c<<" : "<<a;
              }
       if(a>=30&& a<40){
                     if(a==30){
                            cout<<" : thirty : "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<": thirty"<<c<<" : "<<a;
                     }        
       }
       if(a>=40&& a<50){
                     if(a==40){
                            cout<<" : fourty : "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<": fourty"<<c<<" : "<<a;
                     }        
       }
       if(a>=50&& a<60){
                     if(a==50){
                            cout<<" :fifty: "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<": fifty"<<c<<" : "<<a;
                     }        
       }
       if(a>=60&& a<70){
                     if(a==60){
                            cout<<" :sixty : "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<": sixty"<<c<<" : "<<a;
                     }        
       }
       if(a>=70&& a<80){
                     if(a==70){
                            cout<<" : seventiy : "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<":seventiy"<<c<<" : "<<a;
                     }        
       }
       if(a>=80&& a<90){
                     if(a==80){
                            cout<<" : eighty: "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<": eighty"<<c<<" : "<<a;
                     }        
       }
       if(a>=90&& a<=99){
                     if(a==90){
                            cout<<" : ninety : "<<a;
                     }
                     else {
                          int t=a%10;
                          sumo(t);
                          cout<<": ninety"<<c<<" : "<<a;
                     }        
       }
}
int main(){
    int a;
    cout<<" enter the no : ";
    cin>>a;
    if(a<=20){
       sum(a);
    }
    if(a>20&&a<=99){
       
       demo( a);
    }
    /*
    
    */
    if(a>99){
       cout<<": please enter 0 to 99 value :";
    }
    return 0;
}
    

