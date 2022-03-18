# Stratego
Stratego game in c++

This is a remaster of the classic strategy board game "Stratego". The game plays just like the original: two players take turns moving their pieces to try and capture each other's flag.


Item 1: Each game has a single board. The game manages which player's turn it is, whether or not anyone has reached a win condition and will not "start" until both players are ready.

Item 2: Each board is a 10 by 10 square of board spots, with two 2 by 2 squares in the middle of the board to act as choke points for attacks.

Item 3: Each board spot has an id and if occupied, has a piece. 

Item 4: Each piece qcan move, capture another if it is of higher rank, and be captured. Each piece has a name, rank and spot on the board. 

END
