#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;






int main (void)
{
    int x,y,e,w,z,offset;
    string s,r,line,p,l,k ;
    fstream myfile ;
    myfile.open ("The loan.txt") ;

//--------------------------------------------------------------------

//check is file opening or not

    if (myfile.is_open())
    {
        cout << "File successfully open" << endl;

    }
    else
    {
        cout << "Error opening file";
    }

//--------------------------------------------------------------------

//Start program

    cout << "1-New person" << "\n" << "2-Old person"<<"\n" ;
    cin >> e ;

    if (e==1)
    {

        ofstream myfile ;

        //append data to file without delete current data
        myfile.open("The loan.txt", ifstream::app);

        //Enter New account
        cout << "Name :" << endl ;
        cin >> r >> l >> k ;
        cin.ignore();

        cout << "Month of receipt : " << endl ;
        cin >> x ;
        cin.ignore();

        cout << " Month delivery :" << endl ;
        cin >> z ;
        cin.ignore();

        cout << "The loan :" << endl ;
        cin >> y ;
        cin.ignore();

        myfile << "Name:" << r << " " << l << " " << k <<  "   loan: " << y <<  "  Month of receipt :" << x
               << "   Month delivery :" << z <<endl ;
        myfile.close();
    }

//--------------------------------------------------------------------

    if (e==2)
    {

        ifstream myfile ;


        myfile.open ("The loan.txt") ;
//check is file opening or not

       /* if (myfile.is_open())
        {
            cout << "File successfully open" << endl ;

        }
        else
        {
            cout << "Error opening file"<< endl ;
        } */

//--------------------------------------------------------------------

//Show Entire account

        cout << "1-Show the account" << "\n" ;
        cin >> w ;
        if (w==1)
        {
            cout << "Please enter a name: ";
            cin  >> s ;
            if (myfile.is_open())
            {

                while (!myfile.eof())
                {
                    getline(myfile,line) ;

                    if ((offset = line.find(s,0)) != string::npos)
                    {
                        getline(myfile,p);
                        cout << p << endl ;
                    }

                }
            }
        }

        myfile.close() ;


        system("PAUSE");
    }
    return 0 ;
}



