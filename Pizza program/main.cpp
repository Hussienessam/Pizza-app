#include <iostream>

using namespace std;

int main()
{
    // Hussien Essam 20180089 //
    // Yousef Fathy 20180348 //
    int mode,Q,i=1;
    float P=0;
    string ans,top,mushroom,onion,sausage,ans2,ans3;
    char siz;
    cout << "Welcome to our Pizza restaurant program" <<"\n" <<"\n" <<"Please select one of the items below :" <<endl ;
    cout << "1- Super Supreme: S=50 /M=75.5/ L=100" <<"\n" <<"2- Chicken Supreme: S=45/ M=73.88/ L=97.99"<< "\n" <<"3- Margherita: S=35/ M=70/ L=95"<<endl;
    cout << "4- Cheese Lovers: S=60.96/ M=87.75/ L=113.16" <<"\n" <<"5- Sea Food Lovers: S= 64.47/ M=94.30/ L=123.25"<< "\n" <<endl;
    while(1)
    {
        cout<<"Enter the number of your item"<<endl;
        cin>>mode;
        if (mode==1)
        {
           cout<<"Enter the quantity"<<endl;
           cin>>Q;
           if (Q<=0)
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
            while (i<=Q)
            {
                if (i==1)
                    cout<<"Enter the size of your order"<<"\t"<<"Enter (S/M/L)"<<endl;
                else
                    cout<<"Enter the size of order no."<<i<<"\t"<<"Enter (S/M/L)"<<endl;
                cin>>siz;
                if (siz!='S' and siz!='M' and siz!='L')
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
                cout<<"Do you want extra topping ?"<<"\t"<<"Enter yes/no"<<endl;
                cin>>ans;
                if (ans=="yes")
                 {
                    cout<<"Please select one (mushroom = 10, onion = 5, sausage = 10)"<<"\t"<<"Enter (mushroom/onion/sausage)"<<endl;
                    cin>>top;
                    if(top=="mushroom")
                        P=P+10;
                    else if(top=="onion")
                        P=P+5;
                    else if(top=="sausage")
                        P=P+10;
                    else
                    {
                        cout<<"Invalid input"<<endl;
                        break;
                    }
                 }
                else if (ans=="no")
                    top="no";
                else
                {
                    cout<<"Invalid input"<<endl;
                    break;
                }
                if (siz=='S')
                    P=P+50;
                else if (siz=='M')
                    P=P+75.5;
                else if (siz=='L')
                    P=P+100;
                cout<<"You have ordered Super Supreme with "<<siz<<" size with "<<top<<" extra topping"<<endl;
                i=i+1;
            }
            i=1;
        }
        else if (mode==2)
        {
            cout<<"Enter the quantity"<<endl;
           cin>>Q;
           if (Q<=0)
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
           while (i<=Q)
            {
                if (i==1)
                    cout<<"Enter the size of your order"<<"\t"<<"Enter (S/M/L)"<<endl;
                else
                    cout<<"Enter the size of order no."<<i<<"\t"<<"Enter (S/M/L)"<<endl;
                cin>>siz;
                if (siz!='S' and siz!='M' and siz!='L')
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
                cout<<"Do you want extra topping ?"<<"\t"<<"Enter yes/no"<<endl;
                cin>>ans;
                if (ans=="yes")
                 {
                    cout<<"Please select one (mushroom = 10, onion = 5, sausage = 10)"<<"\t"<<"Enter (mushroom/onion/sausage)"<<endl;
                    cin>>top;
                    if(top=="mushroom")
                        P=P+10;
                    else if(top=="onion")
                        P=P+5;
                    else if(top=="sausage")
                        P=P+10;
                    else
                    {
                      cout<<"Invalid input"<<endl;
                        break;
                    }
                 }
                else if (ans=="no")
                    top="no";
                else
                {
                    cout<<"Invalid input"<<endl;
                    break;
                }
                if (siz=='S')
                    P=P+45;
                else if (siz=='M')
                    P=P+73.88;
                else if (siz=='L')
                    P=P+97.99;
                cout<<"You have ordered Chicken Supreme with "<<siz<<" size with "<<top<<" extra topping"<<endl;
                i=i+1;
        }
        i=1;
     }
     else if (mode==3)
        {
            cout<<"Enter the quantity"<<endl;
           cin>>Q;
           if (Q<=0)
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
           while (i<=Q)
            {
                if (i==1)
                    cout<<"Enter the size of your order"<<"\t"<<"Enter (S/M/L)"<<endl;
                else
                    cout<<"Enter the size of order no."<<i<<"\t"<<"Enter (S/M/L)"<<endl;
                cin>>siz;
                if (siz!='S' and siz!='M' and siz!='L')
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
                cout<<"Do you want extra topping ?"<<"\t"<<"Enter yes/no"<<endl;
                cin>>ans;
                if (ans=="yes")
                 {
                    cout<<"Please select one (mushroom = 10, onion = 5, sausage = 10)"<<"\t"<<"Enter (mushroom/onion/sausage)"<<endl;
                    cin>>top;
                    if(top=="mushroom")
                        P=P+10;
                    else if(top=="onion")
                        P=P+5;
                    else if(top=="sausage")
                        P=P+10;
                    else
                    {
                       cout<<"Invalid input"<<endl;
                       break;
                    }
                 }
                 else if (ans=="no")
                    top="no";
                else
                {
                    cout<<"Invalid input"<<endl;
                    break;
                }
                if (siz=='S')
                    P=P+35;
                else if (siz=='M')
                    P=P+70;
                else if (siz=='L')
                    P=P+95;
                cout<<"You have ordered Margherita with "<<siz<<" size with "<<top<<" extra topping"<<endl;
                i=i+1;
            }
                i=1;
        }
        else if (mode==4)
          {
                cout<<"Enter the quantity"<<endl;
                cin>>Q;
                while (Q<=0)
                {
                   cout<<"Invalid input"<<endl;
                   cout<<"Enter a valid quantity"<<endl;
                   cin.clear();
                    cin.ignore(10000,'\n');
                   cin>>Q;
                }
                while (i<=Q)
            {
                if (i==1)
                    cout<<"Enter the size of your order"<<"\t"<<"Enter (S/M/L)"<<endl;
                else
                    cout<<"Enter the size of order no."<<i<<"\t"<<"Enter (S/M/L)"<<endl;
                cin>>siz;
               if (siz!='S' and siz!='M' and siz!='L')
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
                cout<<"Do you want extra topping ?"<<"\t"<<"Enter yes/no"<<endl;
                cin>>ans;
                if (ans=="yes")
                 {
                    cout<<"Please select one (mushroom = 10, onion = 5, sausage = 10)"<<"\t"<<"Enter (mushroom/onion/sausage)"<<endl;
                    cin>>top;
                    if(top=="mushroom")
                        P=P+10;
                    else if(top=="onion")
                        P=P+5;
                    else if(top=="sausage")
                        P=P+10;
                    else
                        cout<<"Invalid input"<<endl;
                        break;
                 }
                else if (ans=="no")
                    top="no";
                else
                {
                    cout<<"Invalid input"<<endl;
                    break;
                }
                  if (siz=='S')
                    P=P+60.96;
                else if (siz=='M')
                    P=P+87.75;
                else if (siz=='L')
                    P=P+113.16;
                cout<<"You have ordered Cheese Lovers with "<<siz<<" size with "<<top<<" extra topping"<<endl;
                i=i+1;
        }
        i=1;
     }
     else if (mode==5)
        {
           cout<<"Enter the quantity"<<endl;
           cin>>Q;
           if (Q<=0)
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
            while (i<=Q)
            {
                if (i==1)
                    cout<<"Enter the size of your order"<<"\t"<<"Enter (S/M/L)"<<endl;
                else
                    cout<<"Enter the size of order no."<<i<<"\t"<<"Enter (S/M/L)"<<endl;
                cin>>siz;
                if (siz!='S' and siz!='M' and siz!='L')
                {
                   cout<<"Invalid input"<<endl;
                   break;
                }
                cout<<"Do you want extra topping ?"<<"\t"<<"Enter yes/no"<<endl;
                cin>>ans;
                if (ans=="yes")
                 {
                    cout<<"Please select one (mushroom = 10, onion = 5, sausage = 10)"<<"\t"<<"Enter (mushroom/onion/sausage)"<<endl;
                    cin>>top;
                    if(top=="mushroom")
                        P=P+10;
                    else if(top=="onion")
                        P=P+5;
                    else if(top=="sausage")
                        P=P+10;
                    else
                    {
                        cout<<"Invalid input"<<endl;
                        break;
                    }
                 }
                else if (ans=="no")
                    top="no";
                else
                {
                    cout<<"Invalid input"<<endl;
                    break;
                }
                if (siz=='S')
                    P=P+64.47;
                else if (siz=='M')
                    P=P+94.30;
                else if (siz=='L')
                    P=P+123.25;
                cout<<"You have ordered Sea Food Lovers with "<<siz<<" size with "<<top<<" extra topping"<<endl;
                i=i+1;
            }
            i=1;
        }
        else if (mode<=0 or mode>5)
            cout<<"Invalid input"<<endl;
        cout<<"Do you want another item ?"<<"\t"<<"Enter yes/no"<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        cin>>ans2;
        if (ans2=="no")
            {
                cout<<"Your total required to pay is "<<P<<" L.E"<<endl;
                break;
            }
        else if (ans2!="no" and ans2!="yes")
        {
            cout<<"Invalid input"<<endl;
            cout<<"Your total required to pay is "<<P<<" L.E"<<endl;
            break;
        }
    }
    return 0;
}
