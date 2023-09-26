#include <vector>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
 

bool isPatternPresent(vector<string>& grid, vector<string>& pattern, int row, int col) {
    int patternRows = pattern.size();
    int patternCols = pattern[0].size();
    
    for (int i = 0; i < patternRows; i++) {
        for (int j = 0; j < patternCols; j++) {
            int currentGridRow = row+i;
            int currentGridCol = col+j;
            if (grid[currentGridRow][currentGridCol] != pattern[i][j]) {
                return false;
            }
        }
    } 
    
    return true;
}


// Solution Function
string gridSearch(vector<string> G, vector<string> P) {
    int gridRows = G.size();
    int patternRows = P.size();
    int gridCols = G[0].size();
    int patternCols = P[0].size();
    
    for (int i = 0; i <= gridRows - patternRows; i++) {
        for (int j = 0; j <= gridCols - patternCols; j++) {
            if (G[i][j] == P[0][0] && isPatternPresent(G, P, i, j)) {
                return "YES";
            }
        }
    }
    
    return "NO";
}
