#include <bits/stdc++.h>

using namespace std;

int main()
{
    //to sort the names in the file first
    /*string s;
    vector<string> v;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(getline(cin,s))
        v.push_back(s);
    sort(v.begin(),v.end());
    for(int i=0;i<(int)v.size();++i)
        cout<<v[i]<<endl;*/
    string s,st,sss,sw;
    vector<vector<string>> v;
    vector<string> vv;
    int c;
    char p;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(getline(cin,s))
    {
        stringstream ss(s);
        while(ss>>st)
        {
            p=tolower(st[0]);
            c=1;
            sss.clear();
            for(int i=1;i<(int)st.size();++i)
            {
                if(p==st[i]) c++;
                else
                {
                    p=st[i];
                    if(c>2)
                    {
                        sw.clear();
                        while(c>9)
                        {
                            sw.push_back((c%10)+'0');
                            c/=10;
                        }
                        sw.push_back(c+'0');
                        reverse(sw.begin(),sw.end());
                        for(int j=0;j<(int)sw.size();++j)
                            sss.push_back(sw[j]);
                        sss.push_back(st[i-1]);
                    }
                    else
                    {
                        sss.push_back(st[i-1]);
                        if(c==2) sss.push_back(st[i-1]);
                    }
                    c=1;
                }
            }
            if(c>2)
            {
                sw.clear();
                while(c>9)
                {
                    sw.push_back((c%10)+'0');
                    c/=10;
                }
                sw.push_back(c+'0');
                reverse(sw.begin(),sw.end());
                for(int j=0;j<(int)sw.size();++j)
                    sss.push_back(sw[j]);
                sss.push_back(*st.rbegin());
            }
            else
            {
                sss.push_back(*st.rbegin());
                if(c==2) sss.push_back(*st.rbegin());
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
