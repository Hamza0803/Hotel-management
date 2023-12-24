#include <iostream>

using namespace std;


void display() ;
void listt() ;

class Room{
public:
   string status ;
   string category ;
   int rent ;

};


Room RoomArr[11] ;


void display()
{
    cout<<"\n\t\t\t===============================================";
    cout<<"\n\t\t\t|               HOTEL RAWANDA                  |";
    cout<<"\n\t\t\t===============================================";
    cout<<"\n\n\t\t ======================== WELCOME ========================" ;
    cout<<"\n\n\t     AVAILABLE ROOMS :         " ;
    cout<<"\n\n\tRoom No. :         STATUS :             CATEGORY:             RENT :" ;
        for(int i=1 ; i<10 ; i++)
    {
        RoomArr[i].status="Available" ;
    }
     for(int i=1 ; i<6 ; i++)
    {
        RoomArr[i].rent=2000 ;
        RoomArr[i].category="SINGLE";
    }

    for(int i=6 ; i<11 ; i++)
    {
        RoomArr[i].rent=5000 ;
        RoomArr[i].category="DOUBLE" ;
    }

    for(int i=1 ; i<11 ; i++)
    {
    cout<<"\n\t"<<i<<"                 "<<RoomArr[i].status<<"             "<<RoomArr[i].category<<"             "<<RoomArr[i].rent ;
    }


}

void listt()
{
        cout<<"\n\n\t     AVAILABLE ROOMS :         " ;

    for(int i=1 ; i<11 ; i++)
    {
    cout<<"\n\t"<<i<<"                 "<<RoomArr[i].status<<"             "<<RoomArr[i].category<<"             "<<RoomArr[i].rent ;
    }
}


int main()
{
    display() ;
    cout<<"\n\n\t Which Room you  want to Book ? " ;
    int a ;
    cin>>a ;

    cout<<"\n=================BILL===============" ;
    cout<<"\n\nRoom no. :"<<a<<"           "<<"PRICE  :" <<RoomArr[a].rent ;
    RoomArr[a].status="NOT AVAILABLE" ;
    listt() ;


    return 0;
}
