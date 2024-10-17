#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }
    return count;
}

int main() {
   
    int numbers[] = {1, 2, 1, 3, 4, 5, 1, 3, 2, 4, 5, 1, 3, 5, 4, 2, 1, 5, 3}; 
    int maximum = sizeof(numbers) / sizeof(numbers[0]); 

   
    int result1 = linearSearch(numbers, maximum, 1);
    int result2 = linearSearch(numbers, maximum, 2);
    int result3 = linearSearch(numbers, maximum, 3);
    int result4 = linearSearch(numbers, maximum, 4);
    int result5 = linearSearch(numbers, maximum, 5);

    
    cout << "\n";
    cout << "=============TALLY OF VOTES=============" << endl;
    cout << "Candidate 1| Bo Dalton Capistrano : " << result1 << " votes" << endl;
    cout << "Candidate 2| Cornelius Raymon Agustín : " << result2 << " votes" << endl;
    cout << "Candidate 3| Deja Jayla Bahaga : " << result3 << " votes" << endl;
    cout << "Candidate 4| Lalla Brielle Yabut : " << result4 << " votes" << endl;
    cout << "Candidate 5| Franklin Relano Castro : " << result5 << " votes" << endl;

    
    int voteCounts[5] = {result1, result2, result3, result4, result5};
    int maxVotes = voteCounts[0];
    int winnerIndex = 0;

    
    for (int i = 1; i < 5; i++) {
        if (voteCounts[i] > maxVotes) {
            maxVotes = voteCounts[i];
            winnerIndex = i;
        }
    }

    cout << "\n";
    cout << "=============ELECTION WINNER=============" << endl;
    
   
    switch (winnerIndex) {
        case 0:
            cout << "Candidate 1| Bo Dalton Capistrano is the winner with " << maxVotes << " votes!" << endl;
            break;
        case 1:
            cout << "Candidate 2| Cornelius Raymon Agustín is the winner with " << maxVotes << " votes!" << endl;
            break;
        case 2:
            cout << "Candidate 3| Deja Jayla Bahaga is the winner with " << maxVotes << " votes!" << endl;
            break;
        case 3:
            cout << "Candidate 4| Lalla Brielle Yabut is the winner with " << maxVotes << " votes!" << endl;
            break;
        case 4:
            cout << "Candidate 5| Franklin Relano Castro is the winner with " << maxVotes << " votes!" << endl;
            break;
    }

    return 0;
}
