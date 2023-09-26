
function isPatternPresent(grid: string[], pattern: string[], row: number, col: number): boolean {
    for (let i = 0; i < pattern.length; i++) {
        for (let j = 0; j < pattern[0].length; j++) {
            if (grid[row+i][col+j] !== pattern[i][j]) return false;
        }
    }

    return true;
}

// Solution function
function gridSearch(G: string[], P: string[]): string {
    // Write your code here
    const gridRows = G.length;
    const gridCols = G[0].length;
    const patternRows = P.length;
    const patternCols = P[0].length;

    for (let i = 0; i <= gridRows-patternRows; i ++) {
        for (let j = 0; j <= gridCols-patternCols; j++) {
            if (G[i][j] === P[0][0] && isPatternPresent(G, P, i, j)) return "YES";
        }
    }

    return "NO";
}
