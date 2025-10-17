#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
using namespace std;
class Array
{
private:
    double  *arr;
    int length;
public:
    Array()
    {
        arr=new double[100];
        length=0;
    }
    void insertLast(double value)
    {
        if(length==100)
        {
            cout<<"The List Is Full Cannot Put More Items"<<endl;
        }
        else
        {
            arr[length]=value;
            length++;
            cout<<"Number Added Successfully"<<endl;
        }
    }
    void insertAtPosition(double value,int position)
    {
        if(position>=0&&position<=length)
        {
            if(position==length)
            {
                insertLast(value);
            }
            else
            {
                for(int i=length; i>position;i--)
                {
                    arr[i]=arr[i-1];
                }
                arr[position]=value;
                length++;
                cout<<"Number Added Successfully"<<endl;
            }
        }
        else
        {
            cout<<"Error: The position You Entered Is Invalid----You Will Be Sent Back To Main Menu"<<endl;
        }
    }
    void removeLast()
    {
        if(length==0)
        {
            cout<<"List Is Empty Can Not Remove More Items"<<endl;
        }
        else
        {
            length--;
            cout<<"The Last Number In List Removed Successfully"<<endl;
        }
    }
    void removeAtPosition(int position)
    {
        if(position>=0&&position<length)
        {
            if(position==length-1)
            {
                removeLast();
            }
            else
            {
                for(int i=position; i<length-1; i++)
                {
                    arr[i]=arr[i+1];
                }
                length--;
                cout<<"The Number Deleted Successfully"<<endl;
            }
        }
        else
        {
            cout<<"Error: The position You Entered Is Invalid----You Will Be Sent Back To Main Menu"<<endl;
        }
    }
    void edit(int position,double value)
    {
        if(position>=0&&position<length)
        {
            arr[position]=value;
            cout<<"Edit Applied"<<endl;
        }
        else
        {
             cout<<"Error: The position You Entered Is Invalid----You Will Be Sent Back To Main Menu"<<endl;
        }
    }
    int searching(double value)
    {
        for(int i=0;i<length;i++)
        {
            if(arr[i]==value)
            {
                return i;
            }
        }
        return -1;
    }
    void print()
    {
        if(length==0)
        {
            cout<<"The List Is Empty Can Not Print"<<endl;
        }
        else
        {
             for(int i=0;i<length;i++)
        {
            cout<<arr[i]<<" ";
        }
        }
    }
    ~Array()
    {

    }
};

#endif // ARRAY_H
