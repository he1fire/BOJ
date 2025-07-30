#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<pair<int,string> > x;
ll N, M, T;
int main(){
    cin >> T;
    x.push_back({1967,"DavidBowie"});
    x.push_back({1969,"SpaceOddity"});
    x.push_back({1970,"TheManWhoSoldTheWorld"});
    x.push_back({1971,"HunkyDory"});
    x.push_back({1972,"TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"});
    x.push_back({1973,"AladdinSane"});
    x.push_back({1973,"PinUps"});
    x.push_back({1974,"DiamondDogs"});
    x.push_back({1975,"YoungAmericans"});
    x.push_back({1976,"StationToStation"});
    x.push_back({1977,"Low"});
    x.push_back({1977,"Heroes"});
    x.push_back({1979,"Lodger"});
    x.push_back({1980,"ScaryMonstersAndSuperCreeps"});
    x.push_back({1983,"LetsDance"});
    x.push_back({1984,"Tonight"});
    x.push_back({1987,"NeverLetMeDown"});
    x.push_back({1993,"BlackTieWhiteNoise"});
    x.push_back({1995,"1.Outside"});
    x.push_back({1997,"Earthling"});
    x.push_back({1999,"Hours"});
    x.push_back({2002,"Heathen"});
    x.push_back({2003,"Reality"});
    x.push_back({2013,"TheNextDay"});
    x.push_back({2016,"BlackStar"});
    while (T--){
        cin >> N >> M;
        vector<pair<int,string> > ans;
        for (auto i:x){
            if (i.first>=N && i.first<=M)
                ans.push_back(i);
        }
        cout << ans.size() << "\n";
        for (auto i:ans)
            cout << i.first << " " << i.second << "\n";
    }
    return 0;
}