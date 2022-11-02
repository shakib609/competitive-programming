export function tournamentWinner(competitions: string[][], results: number[]) {
  const gameResults: { [key: string]: number } = {};
  let currentMax = 0,
    currentTopTeam = "";
  for (const [index, [home, away]] of competitions.entries()) {
    gameResults[home] = gameResults[home] || 0;
    gameResults[away] = gameResults[away] || 0;
    let winner = away;
    if (results[index] === 1) {
      winner = home;
    }
    gameResults[winner] += 3;
    const winnerPoints = gameResults[winner];
    if (winnerPoints > currentMax) {
      currentMax = winnerPoints;
      currentTopTeam = winner;
    }
  }

  return currentTopTeam;
}
