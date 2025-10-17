#include <iostream>
#include <Array.h>
using namespace std;

int main()
{
    Array test;
    int choice;
    do
    {
        cout<<"\t ----main menu----"<<endl;
        cout<<"press 1 for inserting a number"<<endl;
        cout<<"press 2 for removing a number"<<endl;
        cout<<"press 3 for editing a number"<<endl;
        cout<<"press 4 for searching element position"<<endl;
        cout<<"press 5 for print the list"<<endl;
        cout<<"press 6 for exit the program"<<endl;
        cin>>choice;
        if(choice==1)
        {
            cout<<"Press 1 For Inserting At The End Of The List Or Press 2 For Inserting At Spaceific position"<<endl;
            int determain;
            cin>>determain;
            cout<<endl;
            if(determain==1)
            {
                cout<<"What value Do You Want To Put In The List"<<endl;
                double value;
                cin>>value;
                test.insertLast(value);
                cout<<endl;
            }
            else if(determain==2)
            {
                cout<<"What Is The Position That You Want To Put Value On It"<<endl;
                int position;
                cin>>position;
                cout<<"And What Is The Value Do You Want To Put in"<<endl;
                double value;
                cin>>value;
                test.insertAtPosition(value,position);
                cout<<endl;
            }
            else
            {
                cout<<"The Number You Entered Was Not Mentioned In The Message Before-----You Will Be Sent Back To Main Menu"<<endl;
                cout<<endl;
            }
        }
        else if(choice==2)
        {
            cout<<"Press 1 For Removing Last Number On The List Or Press 2 For Removing A Number In Spaceific Position"<<endl;
            int determain;
            cin>>determain;
            cout<<endl;
            if(determain==1)
            {
                test.removeLast();
                cout<<endl;
            }
            else if(determain==2)
            {
                cout<<"What Is The Position That You Want To Delete Its Value"<<endl;
                int position;
                cin>>position;
                test.removeAtPosition(position);
                cout<<endl;
            }
        }
        else if(choice==3)
        {
            cout<<"What Is The Position That You Want to update it Notice That The First Number On The List Has position Of Zero"<<endl;
            int position;
            cin>>position;
            cout<<"What Is The The Number Do You Want To Put In"<<endl;
            double value;
            cin>>value;
            test.edit(position,value);
            cout<<endl;
        }
        else if(choice==4)
        {
            cout<<"What The Value You Want To Check Its Exceistance"<<endl;
            double value;
            cin>>value;
            int check=test.searching(value);
            if(check!=-1)
            {
                cout<<"\a Value Founded At Index "<<check<<endl;
            }
            else
            {
                cout<<"Value Not Found"<<endl;
            }
            cout<<endl;
        }
        else if(choice==5)
        {
            test.print();
            cout<<endl;
        }
        else if(choice==6)
        {

        }
        else
        {
            cout<<"Error: The Number You Entered Is not Mentioned On The Main Menu-----Try Again"<<endl;
            cout<<endl;
        }
    }
    while(choice!=6);
        return 0;
}


