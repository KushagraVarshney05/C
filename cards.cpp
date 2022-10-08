
#include<iostream>
using namespace std;

const int jack=11;
const int queen=12;
const int king=13;
const int ace=1;
enum type {heart,diamond,club,spade};
struct card{
    int num;
    type suit;
};
int main()
{
    card temp,chosen,prize,card1,card2,card3;
    int position;
    card1={ace,heart};
    cout<<"card1 is ace of heart"<<endl;
    card2={jack,club};
    cout<<"card2 is jack ofclub"<<endl;
    card3={king,spade};
    cout<<"card 3 is king of spade"<<endl;
    prize =card3;

    cout<<"card1 and card 3 are exchanged"<<endl;
    temp=card1;
    card1=card3;
    card3=temp;
    cout<<"card2 and card 3 are exchanged"<<endl;
    temp=card2;
    card2=card3;
    card3=temp;
    cout<<"card1 and card 2 are exchanged"<<endl;
    temp=card1;
    card1=card2;
    card2=temp;
    cout<<"you have to find king of spade now choose a position 1,2,3"<<endl;
    cin>>position;
    switch(position)
    {
        case 1:
        chosen=card1;
        break;
        case 2:
        chosen=card2;
        break;
        case 3:
        chosen=card3;
        break;
    }
    if(chosen.num==prize.num && chosen.suit==prize.suit)
    cout<<"you hhave won"<<endl;
    else
    cout<<"your output is different"<<endl;
    return 0;

}