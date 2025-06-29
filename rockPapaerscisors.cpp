#include <iostream>

char userChoise();


int main(){
    int games = 1;
    int userWin = 0 ;
    int computerWin = 0;

    std::cout << " THIS IS A ROCK, PAPER , SCISSORS GAME ";
    
   

    srand(time(NULL));
    do{
        
        int computer = rand()%3 +1;
        char comp ; 
        char user ;
        user = userChoise();
        switch (computer)
        {
        case 1:
            comp= 'R';
            break;
        case 2 :
            comp= 'P';
            break;
        case 3 :
            comp= 'S';
    
        default:
            break;
        }
        
        if (comp==user){
            std::cout << "Thats a Tie. Computer choise = "<<comp<< " User choise = " << user<<'\n';
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;

        }

        else if (comp=='R' && (user=='p' || user=='P')){
            std::cout << "CONGRATS ... USER WON. Computer choise = "<<comp<< " User choise = " << user<<'\n';
            userWin++;
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;
        }

        else if (comp=='R' && (user=='s' || user=='S')){
            std::cout << "COMPUTER WON. Computer choise = "<<comp<< " User choise = " << user<<'\n';
            computerWin++;
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;
        }

        else if (comp=='P' && (user=='s' || user=='S')){
            std::cout << "CONGRATS ... USER WON. Computer choise = "<<comp<< " User choise = " << user<<'\n';
            userWin++;
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;

        }

        else if (comp=='P' && (user=='R' || user=='r')){
            std::cout << "COMPUTER WON. Computer choise = "<<comp<< " User choise = " << user <<'\n';
            computerWin++;
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;
        }

        else if (comp=='S' && (user=='R' || user=='r')){
            std::cout << "COMPUTER WON. Computer choise = "<<comp<< " User choise = " << user <<'\n';
            computerWin++;
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;
        }

        else if (comp=='S' && (user=='p' || user=='P')){
            std::cout << "CONGRATS ... USER WON. Computer choise = "<<comp<< " User choise = " << user <<'\n';
            userWin++;
            std::cout << "computer is "<< computerWin <<std::endl ;
            std::cout << "User is "<< userWin << std::endl;
        }
        games++;
    }while(games<=10);
    



    if (userWin > computerWin){
        std::cout << "GOOD JOB YOU WON THE GAME !!\n";
        std::cout << "computer is "<< computerWin <<std::endl ;
        std::cout << "User is "<< userWin << std::endl;

    }
    else if (userWin==computerWin){
        std::cout << "THAT's RARE !! . IT'S A TIE.\n";
        std::cout << "computer is "<< computerWin <<std::endl ;
        std::cout << "User is "<< userWin << std::endl;
    }
    else {
        std::cout << "DON'T YOU WORRY YOU WILL WIN THE GAME NEXT TIME.\n";
        std::cout << "computer is "<< computerWin <<std::endl ;
        std::cout << "User is "<< userWin << std::endl;
    }
    

    return 0;
}

char userChoise(){
    char user;
    while(true){

        std::cout << " PLEASE CHOSE BETWEEN ( R , P , S ) :";
        std::cin >> user;
    
        if (user == 'R' || user =='P' || user=='S'){
            return user;
        }
        else if (user == 'r' || user =='p' || user=='s'){
            return user ;
        }
        else {
            std::cout << "YOU SHOULD ENTER BETWEEN( R , P , S )\n";
            std::cin.clear();
            return '!';
        }
    }
        
}