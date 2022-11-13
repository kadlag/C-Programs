#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void setPrice(void);
    void display(void);
    void initcounter(void);

};

void shop::initcounter(void)
{
    counter=0;

}

void shop::setPrice(void)
{
  cout<<"Enter a item id:"<<counter+1<<endl;
  cin>>itemId[counter];

  cout<<"Enter a price "<<endl;
  cin>>itemPrice[counter];

  counter++;

}

void shop::display(void)
{
    for(int i=0;i<counter;i++)
    {      
           cout<<"ID of the item :"<<itemId[i]<<endl;
           cout<<"Price of the item :"<<itemPrice[i]<<endl;
           

    }
   
}
int main(){
    
    shop dukaan;

    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();

    dukaan.display();




    return 0;
}