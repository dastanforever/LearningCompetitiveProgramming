#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

struct vertex{
    string name;
    vector < int > edge;
    int priority,inedge;
    int visit;
};


bool cmp(struct vertex v1, struct vertex v2)
{
    return (v1.priority<v2.priority);
}

map < string , int > br;
vector < pair < int, int> > edges;
vector < struct vertex > temp;
void dfs(vertex[] , int);

void DFS(vertex vr[], int N)
{
    for (int i = 0; i < N; i++) {
        vr[i].visit = 0;
        vr[i].priority = i;
        vr[i].inedge = 0;
    }

    for (int i = 0; i < N; i++) {
        if (vr[i].visit == 0) {
            dfs(vr,i);
            vr[i].visit = 1;
        }
    }
}

void dfs(vertex vr[], int vrin)
{
    int m = 0,t;
    for (int i = 0; i < vr[vrin].edge.size(); i++) {
            if(!vr[vr[vrin].edge[i]].visit) dfs(vr,vr[vrin].edge[i]);
            vr[vr[vrin].edge[i]].inedge++;
    }
    vr[vrin].visit = 1;
}

int main(void)
{

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int N,M,k = 1;
    string ch,ch1,ch2;
    while(scanf("%d\n", &N) == 1)
    {
        vertex vr[N];
        for (int i = 0; i < N; i++) {
            cin>>ch;
            br[ch] = i;
            vr[i].name = ch;
        }
        scanf("%d\n", &M);
        pair < int, int > p;
        for (int i = 0; i < M; i++) {
            getline(cin,ch);
            ch1 = ch.substr(0,ch.find(" "));
            ch2 = ch.substr(ch.find(" ")+1);
            vr[br[ch1]].edge.push_back(br[ch2]);
            p.first = br[ch1];
            p.second = br[ch2];
            edges.push_back(p);
        }

        DFS(vr,N);
        cout<<"Case #"<<k<<": Dilbert should drink beverages in this order:";
        while(1)
        {
            for (int i = 0; i < N; i++)
                if(vr[i].inedge == 0)   { temp.push_back(vr[i]); vr[i].inedge = -1; }

            if(!temp.size()) break;
            sort(temp.begin(), temp.end(), cmp);
            cout<<" "<<temp[0].name;
            for (int i = 0; i < temp[0].edge.size(); i++) {
                vr[temp[0].edge[i]].inedge--;
            }
            temp.erase(temp.begin());
        }
        cout<<"."<<endl;
        br.clear();
        k++;
        cout<<endl;
    }
    return 0;
}
