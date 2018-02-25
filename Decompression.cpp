#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,st,sss,si;
    vector<vector<string>> v;
    vector<string> vv;
    int c;
    bool f=0;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(getline(cin,s))
    {
        stringstream ss(s);
        while(ss>>st)
        {
            sss.clear();
            for(int i=0;i<(int)st.size();++i)
            {
                si.clear();
                c=0;
                while(st[i]>='0'&&st[i]<='9')
                {
                    if(!i) f=1;
                    si.push_back(st[i++]);
                }
                stringstream ssi(si);
                ssi>>c;
                if(!c) sss.push_back(st[i]);
                else
                {
                    if(f)
                    {
                        sss.push_back(toupper(st[i]));
                        --c;
                        f=0;
                    }
                    while(c--) sss.push_back(st[i]);
                }
            }
            vv.push_back(sss);
        }
        v.push_back(vv);
        vv.clear();
    }
    for(int i=0;i<(int)v.size();++i)
    {
        for(int j=0;j<(int)v[i].size();++j)
        {
            cout<<v[i][j];
            if(j!=(int)v[i].size()-1) cout<<" ";
        }
        if(i!=(int)v.size()-1) cout<<endl;
    }
    return 0;
}
