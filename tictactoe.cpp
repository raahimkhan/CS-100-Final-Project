#include<iostream>
#include<stdlib.h>  /**Header which contains clear screen function**/
#include<windows.h> /**Header that contains color function and beep function**/
#include<string>
#include<iomanip>
#include<fstream> /**For file handling**/
using namespace std;
string block[3][3] =  /**Global 2D-array for blocks in board.**/
{
    { "1" , "2" , "3" } ,
    { "4" , "5" , "6" } ,
    { "7" , "8" , "9" } ,
} ;
/**Function to re-initialize global array (line 7)**/
void re_in(string a[3][3])
{
string block2[3][3] =
{
    { "1" , "2" , "3" } ,
    { "4" , "5" , "6" } ,
    { "7" , "8" , "9" } ,
} ;
for (int i = 0 ; i < 3 ; i++)
{
        for (int j = 0 ; j < 3 ; j++)
        {
            a[i][j] =  block2[i][j] ; /**re-initializes global array with original values**/
        }
}
}
/**Function to display playing board**/
void playing_board()
{
system("Color 7C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "     |     |     " << endl;
cout << "  " << block[0][0] << "  |  " << block[0][1] << "  |  " << block[0][2] << endl ;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << block[1][0] << "  |  " << block[1][1] << "  |  " << block[1][2] << endl ;
cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;
cout << "  " << block[2][0] << "  |  " << block[2][1] << "  |  " << block[2][2] << endl ;
cout << "     |     |     " <<endl <<endl ;
}
/**Function to check game status. "1 prints the result when game is over."
"2 is for when game is in progress." and "0 when game is over and draw (no result).**/
int game_status()
{
if (block[0][0] == block[0][1] && block[0][1] == block[0][2])
return 1 ;
else if (block[1][0] == block[1][1] && block[1][1] == block[1][2])
return 1 ;
else if (block[2][0] == block[2][1] && block[2][1] == block[2][2])
return 1 ;
else if (block[0][0] == block[1][0] && block[1][0] == block[2][0])
return 1 ;
else if (block[0][1] == block[1][1] && block[1][1] == block[2][1])
return 1 ;
else if (block[0][2] == block[1][2] && block[1][2] == block[2][2])
return 1 ;
else if (block[0][0] == block[1][1] && block[1][1] == block[2][2])
return 1 ;
else if (block[0][2] == block[1][1] && block[1][1] == block[2][0])
return 1 ;
else if (block[0][0] != "1" && block[0][1] != "2" && block[0][2] != "3" && block[1][0] != "4" && block[1][1] != "5" && block[1][2] != "6" && block[2][0] != "7" && block[2][1] != "8" && block[2][2] != "9")
return 0 ;
else
return 2 ;
}
int main()
{
string p1_name , name1 ; /**Player 1's name variables and identifier**/
string p2_name , name2 ; /**Player 2's name variables and identifier**/
system("Color 0C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "  *********************************************" <<endl ;
cout << "  *                   Raahim" <<"          " <<"Usman   *" <<endl ;
cout << "  *  PROJECT BY  :   21100157       21100095  *" <<endl ;
cout << "  *********************************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *           TIC--TAC--TOE!        *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *         14-12-17 , THURSDAY     *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
string instruct ; /**Variable to choose between choices provided on menu**/
cout << "Press 1 to read instructions" <<endl ;
cout << "Press 2 to start game as a guest" <<endl ;
cout << "Press 3 to login to an existing account" <<endl ;
cout << "Press 4 to view stats" <<endl ;
cout << "Press 5 to quit" <<endl ;
cout <<endl ;
cout << "Your choice   :   " ;
LOOP4 : cin >> instruct ; /**LOOP 6 used in line 137**/
if (instruct == "1")
{
system("CLS"); /**Clears screen before displaying instructions**/
system("Color 3F"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "************************************************" <<endl ;
cout << "*              INSTRUCTIONS                    *" <<endl ;
cout << "************************************************" <<endl ;
cout <<endl <<endl ;
cout << "The object of Tic Tac Toe is to get three in a row." <<endl ;
cout << "You play on a three by three game board" <<endl ;
cout << "The first player is known as X and the second is *." <<endl ;
cout << "First to get three in a row wins" <<endl ;
cout << "In case no one gets three in a row, game stands draw" <<endl ;
cout <<endl <<endl ;
cout << "In this project you can play unlimited games and score will be displayed at end" <<endl ;
cout << "Scores would be appended (previous scores would stay) and displayed at end" <<endl ;
cout <<endl ;
cout << "Press 'm' to go back to main menu  :   " ;
string choice3; /**Variable to check if 'm' is entered or not**/
LOOP6 : cin >> choice3 ; /**LOOP 6 used in line 142**/
if (choice3 == "m")
{
system("CLS"); /**Clears screen and displays menu again**/
system("Color 0C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "  *********************************************" <<endl ;
cout << "  *                   Raahim" <<"          " <<"Usman   *" <<endl ;
cout << "  *  PROJECT BY  :   21100157       21100095  *" <<endl ;
cout << "  *********************************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *           TIC--TAC--TOE!        *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *         14-12-17 , THURSDAY     *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "Press 1 to read instructions" <<endl ;
cout << "Press 2 to start game as a guest" <<endl ;
cout << "Press 3 to login to an existing account" <<endl ;
cout << "Press 4 to view stats" <<endl ;
cout << "Press 5 to quit" <<endl ;
cout << "Your choice   :   " ;
goto LOOP4 ; /**LOOP 4 used in line 255 and 277**/
}
else
{
cout << "Please enter 'm' to go back to main menu  :   " ;
goto LOOP6 ; /**LOOP 6 used in line 113**/
}
}
else if (instruct == "2")
{
name1 = "Guest 1" ;
name2 = "Guest 2" ;
system("CLS"); /**Clears screen and logs in as guest**/
cout << "Logged in as guest!!!" <<endl ;
std::cin.get() ;
cout <<endl ;
Sleep(1000) ; /**Delays time by 1 second**/
cout <<"Game will start in" <<endl ;
cout <<endl ;
for (int i = 3 ; i > 0 ; i--)
{
cout << i <<endl ;
Sleep(1000) ; /**Delays time by 1 seconds**/
}
cout <<endl ;
cout << "Go!!!" <<endl ;
Sleep(2000) ; /**Delays time by 2 seconds**/
system("CLS"); /**Clears Screen before game (round1) starts**/
}
else if (instruct == "3")
{
string username ; /**variable to store user name**/
string password ; /**variable to store password**/
system("CLS"); /**Clears Screen before login as an existing user screen appears**/
system("Color 5F"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "*************************************" <<endl ;
cout << "*       !WELCOME DEAR USER!         *" <<endl ;
cout << "*************************************" <<endl ;
cout <<endl <<endl ;
cout << "Enter user name  :   " ;
u_name : cin >> username ; /**u_name used in line 192**/
cout <<endl <<endl ;
cout << "Enter password  :   " ;
cin >> password ;
cout <<endl <<endl ;
if (username == "cs100" && password == "cs100")
{
    system("CLS"); /**Clears Screen before asking for names of p1/p2**/
    cout << "Logged in as  user 'CS100' !" <<endl ;
    cout <<endl ;
}
else
{
    cout << "Either user name or password is incorrect ! Please re-enter" <<endl ;
    cout << "Enter user name  :   " ;
    goto u_name ; /**u_name used in line 177**/
}
cout << "Player 1 , enter your name  :    " ;
cin >> p1_name ;
cout <<endl ;
cout << "Player 2 , enter your name  :    " ;
cin >> p2_name ;
cout <<endl ;
name1 = p1_name ;
name2 = p2_name ;
cout <<"Game will start in" <<endl ;
cout <<endl ;
for (int i = 3 ; i > 0 ; i--)
{
cout << i <<endl ;
Sleep(1000) ; /**Delays time by 1 seconds**/
}
cout <<endl ;
cout << "Go!!!" <<endl ;
Sleep(2000) ; /**Delays time by 2 seconds**/
system("CLS"); /**Clears Screen before game (round1) starts**/
}
else if (instruct == "4")
{
system("CLS"); /**Clears Screen before stats appear**/
system("COLOR CF"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "*********************************" <<endl ;
cout << "*           PLAYER STATS        *" <<endl ;
cout << "*********************************" <<endl ;
cout <<endl <<endl ;
cout <<"name\twon\tlost\tdraw" <<endl ;
cout <<endl ;
cout <<"Raahim\t5\t4\t0" <<endl ;
cout <<"Usman\t4\t8\t3" <<endl ;
cout <<"Hamza\t10\t0\t0" <<endl ;
cout <<"SirZaid\t15\t0\t6" <<endl ;
cout <<endl <<endl ;
cout << "Press 'm' to go back to main menu  :   " ;
string choice4; /**Variable just to check whether 'm' is entered or not**/
LOOP7 : cin >> choice4 ; /**LOOP 7 used in line 260**/
if (choice4 == "m")
{
system("CLS");
system("Color 0C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "  *********************************************" <<endl ;
cout << "  *                   Raahim" <<"          " <<"Usman   *" <<endl ;
cout << "  *  PROJECT BY  :   21100157       21100095  *" <<endl ;
cout << "  *********************************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *           TIC--TAC--TOE!        *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *         14-12-17 , THURSDAY     *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "Press 1 to read instructions" <<endl ;
cout << "Press 2 to start game as a guest" <<endl ;
cout << "Press 3 to login to an existing account" <<endl ;
cout << "Press 4 to view stats" <<endl ;
cout << "Press 5 to quit" <<endl ;
cout << "Your choice   :   " ;
goto LOOP4 ; /**LOOP 4 used in line 137**/
}
else
{
    cout <<"Invalid Input! Please press 'm' to return  :   " ;
    goto LOOP7 ; /**LOOP 7 used in line 231**/
}
}
else if (instruct == "5")
{
system("CLS"); /**Clears Screen and game quits**/
cout << "Game will quit in" <<endl ;
for (int i = 3 ; i > 0 ; i--)
{
    cout << i <<endl ;
    Sleep(1000) ; /**Delays time by 1 seconds**/
}
cout <<endl ;
cout << "   ***********************" <<endl ;
cout << "   *    PROJECT ENDED!   *" <<endl ;
cout << "   ***********************" <<endl ;
return 0 ;
}
else
{
cout << "Not a valid selection! Please enter a valid number  :   " ;
goto LOOP4 ; /**LOOP 4 used in line 137**/
}
int round = 1 ; /** Variable to keep check for number of rounds played **/
int player = 1 , j  ; /**Variable player is for player 1/2 and variable j is used to check game status**/
string choice ; /**Variable to check user choice while playing**/
string choice2 ; /**Variable to check user choice whether he wants to play again or not**/
string mark ; /**Variable used to over write numbers in tic-tac-toe board with 'x' or '*' **/
int p1_score = 0 , p2_score = 0 , win ; /**Variables to check score of each player**/
LOOP3 : do /**Loop3 used in line 424 **/
{
cout <<"                    Round  " <<setw(3) <<round <<endl ;
cout <<endl ;
cout <<"           !"<<name1 <<"      VS      "<<name2 <<"!" <<endl ;
cout <<endl ;
cout << "The score is :" <<" " <<name1 << setw(20) <<name2 <<endl ;
cout << setw(19) <<p1_score << setw(19) <<p2_score <<endl ;
cout <<endl ;
cout <<name1 <<" == (x)  AND " <<name2 <<" == (*)" <<endl <<endl ;
playing_board() ;
player = (player % 2) ? 1 : 2 ; /**conditional operator used just like if-then-else to check whos turn is it**/
if (player == 1)
{
    cout <<name1 <<" " <<"your turn! Enter number according to board  :   " ;
}
else
{
    cout <<name2 <<" " <<"your turn! Enter number according to board  :   " ;
}
LOOP : cin >> choice ; /**Loop used in line 351**/
cout <<endl <<endl ;
mark = (player == 1) ? "x" : "*" ; /**If player 1's turn then mark will be set to 'x' otherwise '*' **/
if (choice == "1" && block[0][0] == "1")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
    block[0][0] = mark ;}
else if (choice == "2" && block[0][1] == "2")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[0][1] = mark ;}
else if (choice == "3" && block[0][2] == "3")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[0][2] = mark ;}
else if (choice == "4" && block[1][0] == "4")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[1][0] = mark ;}
else if (choice == "5" && block[1][1] == "5")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[1][1] = mark ;}
else if (choice == "6" && block[1][2] == "6")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[1][2] = mark ;}
else if (choice == "7" && block[2][0] == "7")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[2][0] = mark ;}
else if (choice == "8" && block[2][1] == "8")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[2][1] = mark ;}
else if (choice == "9" && block[2][2] == "9")
{Beep(750,500) ; /**Produces sound of frequency 750Hz for 500ms**/
block[2][2] = mark ;}
else
{
cout <<"Invalid move! Available choices are" <<endl ;
cout <<endl ;
cout <<" | " ;
/**Following loop displays available choices to user in case he enters invalid input**/
for (int x = 0 ; x < 3 ; x++)
{
   for (int y = 0 ; y < 3 ; y++)
    {
     if (block[x][y] != "x" && block[x][y] != "*")
     cout <<block[x][y] <<" | " ;
    }
}
cout <<endl <<endl ;
cout << "Choose from the above provided options  :   " ;
goto LOOP ; /**Loop used in line 305**/
}
j = game_status() ;
player++ ;
system("CLS"); /**Clears screen after each player has taken his/her turn.**/
}
while(j == 2) ;
playing_board() ;
if(j == 1)
{
system("CLS"); /**Clears screen before displaying results**/
cout <<endl <<endl ;
int win2 ; /**Variable that is assigned the value of winning player i.e 1 or 2**/
win2 = --player ;
if (win2==1)
{
    cout <<name1 <<"  wins! " <<endl ;
}
else
{
    cout <<name2 <<"  wins! " <<endl ;
}
cout <<endl <<endl ;
win = (player == 1) ? p1_score++ : p2_score++ ; /**If player1 wins then his score is incremented and vice-versa**/
cout << "The score is :" <<" " <<name1 << setw(20) <<name2 <<endl ;
cout << setw(19) <<p1_score << setw(19) <<p2_score <<endl ;
cout <<endl <<endl ;
}
else
{
cout <<"It's a draw !!! Both get 1 point each !" ;
p1_score++ ; /**both scores incremented if it's a draw**/
p2_score++ ; /**both scores incremented if it's a draw**/
cout <<endl ;
cout << "The score is :" <<" " <<name1 << setw(20) <<name2 <<endl ;
cout << setw(19) <<p1_score << setw(19) <<p2_score <<endl ;
cout <<endl <<endl ;
}
cout << "Do you want to play again? Enter '1' for yes or '2' for no  :   " ;
LOOP2 : cin >> choice2 ; /**Loop2 used in line 429 **/
if (choice2=="2")
{
system("CLS"); /**Clears screen if user selects '2' (no)**/
system("Color 0C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout <<"Total rounds played : " <<round <<endl ;
cout <<endl ;
cout << "The score is :" <<" " <<name1 << setw(20) <<name2 <<endl ;
cout << setw(19) <<p1_score << setw(19) <<p2_score <<endl ;
cout <<endl ;
if (p1_score > p2_score)
{
    cout <<name1 <<"  " <<"won the series!" <<endl ;
}
else if (p1_score < p2_score)
{
    cout <<name2 <<"  " <<"won the series!" <<endl ;
}
else
{
    cout << "Series ended in a draw!" <<endl ;
}
cout <<endl ;
string choice3 ; /**For choices provided at end of game if user doesn't want to play again**/
cout << "Press 1 to return to main menu" <<endl ;
cout << "Press 2 to view updated stats" <<endl ;
cout << "Press 3 to quit" <<endl ;
cout <<endl ;
cout << "Your choice  :  " ;
again : cin >> choice3 ;
if (choice3 == "1")
{
system("CLS"); /**Clears screen before returning to main menu**/
system("Color 0C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "  *********************************************" <<endl ;
cout << "  *                   Raahim" <<"          " <<"Usman   *" <<endl ;
cout << "  *  PROJECT BY  :   21100157       21100095  *" <<endl ;
cout << "  *********************************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *           TIC--TAC--TOE!        *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *         14-12-17 , THURSDAY     *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
string instruct ; /**Variable to choose between choices provided on menu**/
cout << "Press 1 to read instructions" <<endl ;
cout << "Press 2 to start game as a guest" <<endl ;
cout << "Press 3 to login to an existing account" <<endl ;
cout << "Press 4 to view stats" <<endl ;
cout << "Press 5 to quit" <<endl ;
cout <<endl ;
cout << "Your choice   :   " ;
goto LOOP4 ;
}
else if (choice3 == "2")
{
system("CLS"); /**Clears screen before displaying updated stats**/
string line ;
ifstream in_file ;
ofstream out_file ;
in_file.open("E:\\tictactoe.txt") ;
out_file.open("E:\\tictactoe.txt" , ios::app) ;
if (out_file.fail())
{
cout << "File could not be opened" <<endl ;
}
else
{
out_file <<setw(20) << "Updated Player Stats" <<endl ;
out_file <<endl ;
out_file <<"Name\tScore" <<endl ;
out_file <<endl ;
out_file <<name1 <<"\t" <<p1_score <<endl ;
out_file <<name2 <<"\t" <<p2_score <<endl ;
out_file <<endl ;
out_file.close() ;
}
while(getline(in_file , line))
{
cout <<line <<endl ;
}
in_file.close() ;
cout <<endl ;
string choice4 ; /**To return to main menu or quit game from stats screen at end**/
cout << "Press 1 to return to main menu or Press 2 to quit  :   " ;
again2 : cin >> choice4 ;
if (choice4 == "1")
{
system("CLS"); /**Clears screen before returning to main menu**/
system("Color 0C"); /**Changes the background and text color. Number is for background. Alphabet is for text**/
cout << "  *********************************************" <<endl ;
cout << "  *                   Raahim" <<"          " <<"Usman   *" <<endl ;
cout << "  *  PROJECT BY  :   21100157       21100095  *" <<endl ;
cout << "  *********************************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *           TIC--TAC--TOE!        *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
cout << "       ***********************************" <<endl ;
cout << "       *         14-12-17 , THURSDAY     *" <<endl ;
cout << "       ***********************************" <<endl ;
cout <<endl <<endl ;
string instruct ; /**Variable to choose between choices provided on menu**/
cout << "Press 1 to read instructions" <<endl ;
cout << "Press 2 to start game as a guest" <<endl ;
cout << "Press 3 to login to an existing account" <<endl ;
cout << "Press 4 to view stats" <<endl ;
cout << "Press 5 to quit" <<endl ;
cout <<endl ;
cout << "Your choice   :   " ;
goto LOOP4 ;
}
else if (choice4 == "2")
{
system("CLS"); /**Clears Screen and game quits**/
cout << "Game will quit in" <<endl ;
for (int i = 3 ; i > 0 ; i--)
{
    cout << i <<endl ;
    Sleep(1000) ; /**Delays time by 1 seconds**/
}
cout <<endl ;
cout << "   ***********************" <<endl ;
cout << "   *    PROJECT ENDED!   *" <<endl ;
cout << "   ***********************" <<endl ;
return 0 ;
}
else
{
cout << "Not a valid option !!! Enter again :  " ;
goto again2 ;
}
}
else if (choice3 == "3")
{
system("CLS"); /**Clears Screen and game quits**/
cout << "Game will quit in" <<endl ;
for (int i = 3 ; i > 0 ; i--)
{
    cout << i <<endl ;
    Sleep(1000) ; /**Delays time by 1 seconds**/
}
cout <<endl ;
cout << "   ***********************" <<endl ;
cout << "   *    PROJECT ENDED!   *" <<endl ;
cout << "   ***********************" <<endl ;
return 0 ;
}
else
{
cout << "Not a valid option !!! Enter again  :   " ;
goto again ;
}
}
else if (choice2=="1")
{
round++ ; /**round is incremented each time user decides to play again**/
player = 1 ; /**value of variable 'player' is re-initialized to its original value**/
re_in(block) ; /**global array is re-initialized**/
system("CLS"); /**Clears screen before new round starts**/
goto LOOP3 ; /**Line 285**/
}
else
{
    cout << "Not a valid option! Please enter a valid option :    " ;
    goto LOOP2 ; /**Line 390 **/
}
return 0 ;
}




