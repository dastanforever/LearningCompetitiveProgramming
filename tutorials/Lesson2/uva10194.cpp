#include <cstdio>
#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <locale>

using namespace std;

struct team
{
	string teamname;
	int matches,won,tie,lose,score,goalssc,goalag,points;
};

void makedef(struct team * t)
{
	t->teamname = "";
	t->matches = 0;
	t->won = 0;
	t->tie = 0;
	t->lose = 0;
	t->score = 0;
	t->goalssc = 0;
	t->goalag = 0;
	t->points = 0;
}

map < string , team > teams;

bool sorting(team t1, team t2)
{
	if(t1.points > t2.points) return true;
	else if(t1.points < t2.points) return false;
	if(t1.won > t2.won) return true;
	else if (t1.won < t2.won) return false;
	if ((t1.goalssc-t1.goalag) > (t2.goalssc-t2.goalag)) return true;
	else if ((t1.goalssc-t1.goalag) < (t2.goalssc-t2.goalag)) return false;
	if(t1.matches < t2.matches) return true;
	else if (t1.matches > t2.matches) return false;
	if(tolower(t1.teamname) > tolower(t2.teamname)) return true;
	else return tolower(t1->teamname) < tolower(t2.teamname);
}

int main(void)
{
	int te,m,i;
	char tourname[250];
	string teamname;
	scanf("%d\n",&te);
	while(te--)
	{
		cin.getline(tourname,sizeof(tourname));
		scanf("%d",&m);
		team t;
		makedef(t);
		for (i = 0; i < m; ++i)
		{
			getline(cin,teamname);
			t.teamname = teamname;
			map[teamname] = team;
		}
		scanf("%d\n",&m);
		string team1,team2,goals1,goals2;
		for (i = 0; i < m; ++i)
		{
			getline(cin,teamname);
			stringstream s1(teamname);
			getline(s1,team1,'#');
			getline(s1,goal1,'@');
			getline(s1,goal2,'#');
			getline(s1,team2);
			teams[team1].matches++;
			teams[team1].goalssc += (int)goals1;
			teams[team1].goalag += (int)goals2;
			teams[team2].matches++;
			teams[team2].goalssc += (int)goals2;
			teams[team2].goalag += (int)goals1;
			if((int)goal1 == (int)goal2) { teams[team1].tie++; teams[team1].points++; teams[team2].tie++; teams[team2].points++;}
			else (int)goals1>(int)goals2?{teams[team1].won++; teams[team2].lose++; teams[team1].points+=3;teams[team2].points--;}:{teams[team2].won++;teams[team1].lose++;teams[team1].points--;teams[team2].points+=2;};
		}
		sort(teams.begin(),teams.end(),sorting);
	}	
	return 0;
}