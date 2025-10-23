   /* SOHEL*/                                                                                                                                                         
     #include<bits/stdc++.h>
using namespace std;
#define tt int t; cin >> t; while(t--)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long
#define end cout<<endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    tt {
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            v[i] = m;
            s.insert(m);
        }

        if (n == 1) {
            cout << 1 << " " << 1 << endl;
        } 
        else if (s.size() == 1) {
            cout << 0 << endl;
        } 
        else {
            int len = n - s.size();
            int i = 0, j = n - 1;
            int mm = 0, mmm = 0;
            int count = 0, cnt = 0;
            set<int> ss, sss;
            map<int, int> mp, mmp;

            
            while (count != len && mm <= n && i < j) {
                ss.insert(v[i]);
                mp[v[i]]++;
                i++;
                mm++;
                count = mm - ss.size();

                while (mp[v[j]] > 0 && count != len && i < j) {
                    ss.insert(v[j]);
                    mp[v[j]]++;
                    j--;
                    mm++;
                    count = mm - ss.size();
                    
                }
            }
            int ac = i, bc = j, ml = mm;

        
            i = 0, j = n - 1;
            while (cnt != len && mmm <= n && i < j) {
                sss.insert(v[j]);
                mmp[v[j]]++;
                j--;
                mmm++;
                cnt = mmm - sss.size();

                while (mmp[v[i]] > 0 && cnt != len && i < j) {
                    sss.insert(v[i]);
                    mmp[v[i]]++;
                    i++;
                    mmm++;
                    cnt = mmm - sss.size();
                }
            }
           // cout<<"mm and Mmm=" <<mm<<mmm<<endl;
            int al = i, am = j;
            
            if(cnt!=len) mmm=-1;
            if(count!=len)  mm=-1;
            if(mm<0&&mmm<0) cout<<0<<endl;
            else if(mm<0){
                cout << al + 1 << " " << am + 1 << endl;
            }
            else if(mmm<0){
                cout << ac + 1 << " " << bc + 1 << endl;
            }
            else if (mm >= mmm&&mmm!=-1) {
                cout << al + 1 << " " << am + 1 << endl;
            } else {
                cout << ac + 1 << " " << bc + 1 << endl;
            }
        }
    }
}
