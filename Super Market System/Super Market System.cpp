// Super Market System
#include <iostream>
#include <string >
#include <algorithm>
#include <cmath>
#include <conio.h>                   // getch() ;        // to take any key from keyboard to continue the program
using namespace std;
// arrays 
string products[100] = 
{
"rice" , "meat" , "tomatoes" ,
"salad" , "egg" , "tea" ,
"bottels" , "carrots" , "onion" ,
"butter" , "milk" , "juice" , 
"apples" , "cheese" , "bananas"
} ;

int prices[100] ={30 , 120 , 20 , 15 , 6 , 12 , 5 , 14 , 25 , 130 , 32 , 60 , 50 , 48 , 8 } ;

int products_bag[100] ;

// end of arrays

// prototype functions
void user_page() ;
void manager_page() ;
void show_menu() ;
void buy_product() ;
void add_product() ;
void show_reciept() ;
void create() ;
void login() ;
void manager_process(string name)  ;
void add_to_menu() ;
void edit_to_menu() ;
// end of prototype functions

// variables (global variables) 
int number_of_products ;
int menu_size = 15 ; 
string userName = "salah" ;
string pass = "100200" ;
// end of variables 

// main function
int main ()
{   
    int choice ;   
    // do-while() statement
    do
    {
        cout << "**************************************" << endl;
        cout << "Suprt Market System" << endl;
        cout << "**************************************" << endl;
        cout << "Enter any Key To Start" << endl;
        getch() ;                // getch() ;        // to take any key from keyboard to continue the program
        cout << endl;
        cout << "**************************************" << endl;
        cout << "choose the mood : " 
                "\n1- User"
                "\n2- Manager"
                "\n3- Exit" << endl;
        cout << "**************************************" << endl;
        cin >> choice ; 

        // switch statement
        switch(choice)
        {
            case 1 :
                user_page() ;
                break ;

            case 2 :
               manager_page() ;
                break ;

            case 3 :
                break;

            default :
                cout << "Enter Only 1 or 2 or 3 : " << endl; 
                main() ;
            

        }
    }while(choice != 3) ;

    return 0 ;
}

// start of user function
void user_page() 
{
    int choice ;
    string name ;

    cout << "Enter Your Name : " << endl;
    cout << "**************************************" << endl;
    cin >> name ; 
    cout << "**************************************" << endl;
    cout << "**********" << "Welcome " << name <<  "**********" << endl;

    // do-while() statement
    do
    {
        here :
        cout <<"What You Can Do : "
            "\n1- Show The Menu"
            "\n2- Buy a Product"
            "\n3- Return to Main Page" << endl;

        cout << "**************************************" << endl;
        cin >> choice ; 
        cout << "**************************************" << endl;

        // Switch Statement ;
        switch(choice) 
        {
            case 1 :
                show_menu() ;
                break ;

            case 2 :
                buy_product() ; 
                break ;

            case 3 :
                break;

            default :
                cout << "Enter Only 1 or 2 or 3 : " << endl; 
                goto here ;

                
        }
    }while(choice != 3) ;


}

void show_menu()
{
   
    for(int i = 0 ; i < menu_size ; i++)
    {
        cout << i+1 << "- " << products[i] << "     " << prices[i] << " LE" << endl;
        if(i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 || i == 20)
        {
            cout << "------------------------------------------" << endl;
        }
    }
}

void buy_product ()
{
    // prototype function 
    void add_product() ;
    void show_reciept() ;
    // end of prototype function 

    // variables 
    int choice ; 
    // end of variables 

    cout << "Enter Number of Product Do You Want to Buy : " << endl;
    cout << "**************************************" << endl;
    cin >> number_of_products ;
    cout << "**************************************" << endl;

    do
    {
        there :
        cout << "Choose The Process :" 
                "\n1- Add Product To Chart"
                "\n2- Show The Reciept"
                "\n3- Return Back" << endl;
        cout << "**************************************" << endl;
        cin >> choice ;
        cout << "**************************************" << endl;

        switch(choice)
        {
            case 1 :
                add_product();
                break ;

            case 2 :
                show_reciept() ;
                break ;

            case 3 :
                break;

            default :
                cout << "Enter Only 1 or 2 or 3 : " << endl; 
                goto there ;
            
        }
    }while(choice != 3) ;
}

void add_product()
{
    
    for(int i = 0 ; i < number_of_products ; i++)
    {
        cout << "Enter the number of products : " << endl;
        cin >> products_bag[i] ;

    }
    cout << "**********" << " Order Done! "<< "**********" << endl;
}

void show_reciept()
{
    int sum = 0 ;
    cout <<"**********" << "Your Reciept" << "**********" << endl;

    for(int i = 0 ; i < number_of_products ; i++)
    {
        sum+= prices[products_bag[i]-1] ;

        cout <<i+1 << "- " <<  products[products_bag[i]-1] << "     " << prices[products_bag[i]-1] << endl;
        cout << "**************************************" << endl;
    }
    cout << "The Total Cost Is : " << sum << endl; 
    cout << "**************************************" << endl;
}
// end of user function 

// start of manager function
void manager_page()
{
    int choice ;
    cout << "Choose The Mood : "
            "\n1- Create A New E-mail"
            "\n2- Login"
            "\n3- Return To Main Page" << endl ;

        cout << "**************************************" << endl;
        cin >> choice ; 
        cout << "**************************************" << endl;
    do
    {
        // switch statement
        switch(choice)
        {
            case 1 :
                create() ;
                break ;

            case 2 :
              login() ;
                break ;

            case 3 :
                break;

            default :
                cout << "Enter Only 1 or 2 or 3 : " << endl; 
                main() ;
            

        }
    }while(choice != 3) ;


}

void create()
{
    string name = "unkown" ;
    string password ;

    cout << "Enter Your Name : " << endl;
    cout << "**************************************" << endl;
    cin >> name ;
    cout << "**************************************" << endl;

    cout << "Enter Your password : " << endl;
    cout << "**************************************" << endl;
    cin >> password ;
    cout << "**************************************" << endl;

    string reName ;
    string rePassword ;
    Yes : 
    cout << "Now Login To Your Account To Open The Program : " << endl ;
    cout << "**************************************" << endl;
    cout << "ReEnter Your Name : " << endl ;
    cout << "**************************************" << endl;
    cin >> reName ;
    cout << "**************************************" << endl;
    cout << "ReEnter Your password : " << endl ;
    cout << "**************************************" << endl;
    cin >> rePassword ;
    cout << "**************************************" << endl;

    // check by if statement 

    if(name == reName && password == rePassword)
    {
        manager_process(name);
    }
    else
    {
        cout << "Wrong Input Enter A Valid Data Please : " << endl;
        goto Yes ;                // create() ;     === > i can replace goto Yes by create() ;    and the code will be correct too ;
    } 
}

void login()
{
    string name_try ; 
    string pass_try ;
    No :
    cout << "Enter Your Name : " << endl;
    cout << "**************************************" << endl;
    cin >> name_try ;
    cout << "**************************************" << endl;
    cout << "Enter Your password : " << endl;
    cout << "**************************************" << endl;
    cin >> pass_try ;
    cout << "**************************************" << endl;

    // check by if statement

    if(userName == name_try && pass == pass_try)
    {
        manager_process(userName) ;
    }
    else
    {
        cout << "Wrong Input Enter A Valid Data Please : " << endl;
        goto No ;                // login() ;     === > i can replace goto Yes by create() ;    and the code will be correct too ;
    }

}

void manager_process(string name) 
{
    int choice ;
    cout << "**************************************" << endl;
    cout << "welcome " << name << endl;
    cout << "**************************************" << endl;

    cout << "Choose The Mood : " 
            "\n1- Add Element To The Menu"
            "\n2- Edit Element To The Menu"
            "\n3- Return Back" << endl;
    
    // do-while() stetement
    do
    {
        cout << "**************************************" << endl;
        cin >> choice ;
        cout << "**************************************" << endl;

        // switch statement
        switch(choice)
        {
            case 1 :
                add_to_menu() ;
                break ;

            case 2 :
                edit_to_menu() ;
                break ;

            case 3 :
                break ;

            default :
                cout << "Enter Only 1 or 2 or 3 : " << endl; 
                main() ;

        }
    }while(choice != 3) ;   
}

void add_to_menu()
{
    cout << "Now Menu Is 9 Elements !! \n"
            "Enter The New Size You Want : " << endl;
    cout << "**************************************" << endl;
    cin >> menu_size ;
    cout << "**************************************" << endl;

    // check for  menu_size 
    if( menu_size > 15)
    {
        for(int i = 15 -1 ; i < menu_size ; i++)        // array start from index zero ;        // array [15]    ==> 15 element ==> 15 - 1 = 14 ===> i = 14 ;
        {
            cout << "Enter The Product Name : " << endl ;
            cout << "**************************************" << endl;
            cin >>products[i+1] ;
            cout << "**************************************" << endl;

            cout << "Enter The Product price : " << endl ;
            cout << "**************************************" << endl;
            cin >>prices[i+1] ;
            cout << "**************************************" << endl;

        }
        cout << "Done!" << endl;
        cout << "Do You Want To Show The New Menu ? Type (yes , no)" << endl;
        string check ;
        cout << "**************************************" << endl;
        cin >> check ;
        cout << "**************************************" << endl;

        // check by if statement 
        if(check == "yes")
        {
            show_menu() ;
        }
        else if (check == "no")
        {
            manager_process("sir") ;
        }

    }
    else if(menu_size < 15 && menu_size > 0)
    {
        cout << "Done!" << endl;
        cout << "Do You Want To Show The New Menu ? Type (yes , no)" << endl;
        string check ;
        cout << "**************************************" << endl;
        cin >> check ;
        cout << "**************************************" << endl;

        // check by if statement 
        if(check == "yes")
        {
            show_menu() ;
        }
        else if (check == "no")
        {
            manager_process("sir") ;
        }
    }
}

void edit_to_menu()
{
    int num_of_products ;
    int product_num ;
    int newPrice ;
    int choice ;
    string newName ;
    cout << "How Many Products To Edit ? " << endl ;
    cout << "**************************************" << endl;
    cin >> num_of_products ;
    cout << "**************************************" << endl;

    for(int i = 0 ; i < num_of_products ; i++)
    {
        cout << "Enter The Product Number : " << endl ;
        cout << "**************************************" << endl;
        cin >> product_num ;
        cout << "**************************************" << endl;

        here :
        cout << "Want To Edit Nmae Or Price Or both : "
                "\n1- name"
                "\n2- price"
                "\n3- Both" << endl ;
        cout << "**************************************" << endl;
        cin >> choice ;
        cout << "**************************************" << endl;

        switch(choice)
        {
            case 1 :
                cout << "Enter The New Name : " << endl;
                cout << "**************************************" << endl;
                cin >>newName ;
                cout << "**************************************" << endl;
                products[ product_num - 1] = newName ;
                break ;
                
            case 2 :
                cout << "Enter The New price : " << endl;
                cout << "**************************************" << endl;
                cin >> newPrice ;
                cout << "**************************************" << endl;
                prices[ product_num - 1] = newPrice ;
                break ;

            case 3 :
                cout << "Enter The New Name : " << endl;
                cout << "**************************************" << endl;
                cin >>newName ;
                cout << "**************************************" << endl;
                products[ product_num - 1] = newName ;
            
                cout << "Enter The New price : " << endl;
                cout << "**************************************" << endl;
                cin >>newName ;
                cout << "**************************************" << endl;
                prices[ product_num - 1] = newPrice ;
                break ;

             default :
                cout << "Enter Only 1 or 2 or 3 : " << endl; 
                goto here ;


        }

        string check ;
        cout << "Do You Want To Show The Menu ? Type (yes or no) : " << endl;
        cout << "**************************************" << endl;
        cin >> check ;
        cout << "**************************************" << endl;

        if(check == "yes")
        {
            show_menu() ;
        } 
        else if(check == "no")
        {
            manager_process("sir") ;
        }
        else
        {
            cout << "Please Type (yes or no) Only!!!" << endl;
        }

    }
}