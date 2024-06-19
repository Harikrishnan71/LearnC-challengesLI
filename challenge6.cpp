/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ Code Challenges, LinkedIn Learning

// Challenge #6: Horseplay
// Write a function that takes in the location of a knight in a chessboard and returns a vector of strings with the possible locations it might move to.
// The locations are expressed as strings in algebraic notation.
// Print the list on the terminal.
// Don't worry about other pieces on the chessboard.

#include <iostream>
#include <vector>
#include <string>

// knight_moves()
// Summary: This function receives a string with the location of a knight in a chessboard and returns a vector of strings with the possible locations it might move to.
// Arguments:
//           knight: The knight's location.
// Returns: An STL vector of strings with the possible locations to move.
std::vector<std::string> knight_moves(std::string knight){
    std::vector<std::string> moves;

char rank, files;
rank = knight[0]-'a'+1;
files = knight[1]-'0';

int posx, posy,i,j;
std::string pos{};
int deltax[2]={-1,2};
int deltay[2]={-1,2};
for (i=0;i<2;i++)
{for(j=0;j<2;j++)
{
    posx = rank+deltax[i];
    posy = files+deltay[j];
    
    if ((posx>0) && (posx<9) && (posy>0) && (posy<9))
    {
        pos[0] = posx+'a'-1;
        pos[1] = posy+'0';
        moves.push_back(pos);
    }
    
    
    posx = rank+deltay[i];
    posy = files+deltax[j];
    
    if (((posx>0) && (posx<9)) || ((posy>0) && (posy<9)))
    {
        pos[0] = posx+'a'-1;
        pos[1] = posy+'0';
        moves.push_back(pos);
    }
}
}

    return moves;
}

// Main function
int main(){
    std::string knight;
    
    std::cout << "Enter the location of the knight: " << std::flush;
    std::cin >> knight;

    std::vector<std::string> the_moves = knight_moves(knight);
    std::cout << std::endl << "Possible moves from " << knight << ": ";

    for (auto element : the_moves)
        std::cout << element << " ";
    std::cout << std::endl << std::endl << std::flush;
    return 0;
}
