#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    string username;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Your opponent is John." << endl;
    int max=6,position,count=0;
    cout << "press 0 to start: \n";
    cin >> position;
    if(position != 0)
    {
        cout << "Invalid Move!!!\n";
        return 0;  
    }
    else
    {
        while(position <= 100)
        { 
            cout << "Press r to roll the dice..." << endl;
            char roll;
            cin >> roll;
            if(roll  == 'r')
            {   
                srand(time(0));
                int dice=(rand() % max)+1;
                cout << "The dice showed " << dice << "." << endl;
                position = position + dice;
                if(count>=1)
                {
                    int taunt, t;
                    t = 5;
                    srand(time(0));
                    taunt = (rand() % t) + 1;
                    cout << "John says - ";
                    if(taunt == 1)
                    {
                        cout <<"Beginner's luck.\n";
                    }
                    else if(taunt== 2)
                    {
                        cout << "I forgot my lenses today.\n";
                    }
                    else if(taunt == 3)
                    {
                        cout << "Are you cheating??\n";
                    }
                    else if(taunt == 4)
                    {
                        cout << "This can't be true.\n";
                    }
                    else if(taunt = 5)
                    {
                        cout << "I am out of this junk!!\n";
                    }
                }
                int snakes[] = {5,16,21,28,34,39,43,50,58,63,68,99};
                for(int i=0;i<12;i++)
                {
                    if(position == snakes[i])
                    {
                        cout << "Snake wrapped u like a candy.\n";
                        int reduce,snakeLimit=10; // loss refers to no of steps decremented by the snake bit.
                        srand(time(0));
                        int loss = (rand() % snakeLimit)+1;
                        position = position - loss;
                        if(position<=0)
                        {
                            cout << "Welcome back at start, Again.\n";
                            position = 0;
                        }
                        else
                        {
                            cout << "Snake brought u down by " << loss << "." << endl;
                        }
                    }
                }

            }
            
            cout << "You are at " << position << "."<< endl;
            count++;
            cout << "\n#-------------------------------------------------------#\n\n";
        }
        cout << "You Won!!!\nThanks for playing " << username << ".\nHope you enjoyed it...\nPress c for credits: ";
        char credit;
        cin >> credit;
        if(credit == 'c' || credit == 'C')
        {
            cout << "Hi.\nI am Ahmar, creator of this game.\nIt took me almost 3 hour to design and code this game.\nThis was one of my early GameDev projects.\nYou can download this game from Github, Click here to download [source code + application] https://github.com/ahmarcode/Snake-n-Ladder \nHope you enjoyed it, as it was for me to creating.\n";
        }
    }   
    
    return 0;
}