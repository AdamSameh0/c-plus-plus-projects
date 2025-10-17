#include <iostream>

using namespace std;
char arr[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char position;
char player='x';
int xCounter=0,oCounter=0,test=0;
void show()
{
    cout<<"\t_______________"<<endl;
    cout<<"\t|   |    |    |"<<endl;
    cout<<"\t| "<<arr[0][0]<<" |  "<<arr[0][1]<<" |  "<<arr[0][2]<<" |"<<endl;
    cout<<"\t|   |    |    |"<<endl;
    cout<<"\t|-------------|"<<endl;
    cout<<"\t|   |    |    |"<<endl;
    cout<<"\t| "<<arr[1][0]<<" |  "<<arr[1][1]<<" |  "<<arr[1][2]<<" |"<<endl;
    cout<<"\t|   |    |    |"<<endl;
    cout<<"\t|-------------|"<<endl;
    cout<<"\t|   |    |    |"<<endl;
    cout<<"\t| "<<arr[2][0]<<" |  "<<arr[2][1]<<" |  "<<arr[2][2]<<" |"<<endl;
    cout<<"\t|-------------|"<<endl;
}
void play()
{
    cout<<"player "<<player<<" Please Enter a Position"<<endl;
    cin>>position;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j]==position)
            {
                arr[i][j]=player;
                break;
            }
        }
    }
    if(player=='x')
    {
        player='o';
    }
    else
    {
        player='x';
    }
}
char whoWin()
{
    //text rows
    for(int i=0; i<3; i++)
    {
        for(int y=0; y<3; y++)
        {
            if(arr[i][y]!='x'&&arr[i][y]!='o')
            {
                test=1;
            }
            if(arr[i][y]=='x')
            {
                xCounter++;
            }

            else if(arr[i][y]=='o')
            {
                oCounter++;
            }
        }
        if(xCounter==3)
        {
            return 'x';
        }
        else if(oCounter==3)
        {
            return 'o';
        }
        xCounter=oCounter=0;
    }
    //test coulums
    for(int i=0; i<3; i++)
    {
        for(int y=0; y<3; y++)
        {
            if(arr[i][y]!='x'&&arr[i][y]!='o')
            {
                test=1;
            }
            if(arr[y][i]=='x')
            {
                xCounter++;
            }

            else if(arr[y][i]=='o')
            {
                oCounter++;
            }
        }
        if(xCounter==3)
        {
            return 'x';
        }
        else if(oCounter==3)
        {
            return 'o';
        }
                    xCounter=oCounter=0;
    }
    //test diognals
    if(arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x')
    {
        return 'x';
    }
    else if(arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o')
    {
        return 'o';
    }
    else if(arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x')
    {
        return 'x';
    }
    else if(arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o')
    {
        return 'o';
    }
    if(test==0)
    {
        return 'z';
    }
    return '.';
}
int main()
{
    while(whoWin()=='.')
    {
        show();
        play();
        system("cls");
    }
    show();
    if(whoWin()=='z')
    {
        cout<<"Fair Play Draw"<<endl;
    }
    else
    {
        cout<<"Player "<<whoWin()<<" Wins ! congrats"<<endl;
    }
    return 0;
}
