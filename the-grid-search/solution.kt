

fun isPatternPresent(grid: Array<String>, pattern: Array<String>, row: Int, col: Int): Boolean {
    for (i in 0..pattern.size-1) {
        for (j in 0..pattern[0].length-1) {
            if (grid[row+i][col+j] != pattern[i][j]) return false
        }
    }

    return true
}


fun gridSearch(G: Array<String>, P: Array<String>): String {
    for (i in 0..G.size-P.size) {
        for (j in 0..G[0].length-P[0].length) {
            if (G[i][j] == P[0][0] && isPatternPresent(G, P, i, j)) return "YES"
        }
    }

    return "NO"
}