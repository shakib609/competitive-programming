package main

const HOME_TEAM_WON = 1
const WIN_POINTS = 3

func TournamentWinner(competitions [][]string, results []int) string {
	pointMap := make(map[string]int)
	totalMatches := len(results)
	result := ""

	for i := 0; i < totalMatches; i++ {
		homeTeam, awayTeam := competitions[i][0], competitions[i][1]
		winner := awayTeam
		if HOME_TEAM_WON == results[i] {
			winner = homeTeam
		}
		winnerPoints := pointMap[winner] + WIN_POINTS
		pointMap[winner] = winnerPoints

		if pointMap[result] < winnerPoints {
			result = winner
		}
	}
	return result
}
