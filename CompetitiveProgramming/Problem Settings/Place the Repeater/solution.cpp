#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL)
#define PI acos(-1.0)
#define TEST(n) cout<<"dhukse"<<n<<'\n'
#define endl '\n'
#define FILEREAD freopen("input.txt","r",stdin)
#define FIXED(n) cout << fixed << setprecision(n);
#define CASE(n) cout<<"Case " << n << ": ";
long long Set(long long N,long long pos){ return N=N | (1<<pos);}
long long reset(long long N,long long pos){return N= N & ~(1<<pos);}
bool check(long long N,long long pos){return (bool)(N & (1<<pos));}
long long min(long long a, long long b){if(a<b)return a;else return b;}
long long max(long long a, long long b){if(a>b)return a;else return b;}

/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////In the name of almighty ALLAH/////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////Coded By: pranonrahman////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////

struct instruction{
    string cmd;
    char firstRegister = 'Z';
    char secondRegister = 'Z';
    int value=0;
};

int main()
{
    //FAST;
    int t=1;
    //cin >> t;
    int T = t;
    while(t--)
    {
        vector<instruction>instructions;
        string s;
        while(cin >> s)
        {
            instruction temp;
            temp.cmd = s;
            if(s=="LOD")
            {
                char x;
                int y;
                cin >> x >> y;
                temp.firstRegister = x;
                temp.value = y;
            }
            else if(s=="INC")
            {
                char x;
                cin >> x;
                temp.firstRegister = x;
            }
            else if(s=="ADD" or s=="MUL" or s=="CMP")
            {
                char x,y;
                cin >> x >> y;
                temp.firstRegister = x;
                temp.secondRegister = y;
            }
            else if(s!="HLT")
            {
                int x;
                cin >> x;
                temp.firstRegister = x;
            }


            instructions.push_back(temp);
        }
        map<char,int>registers;
        registers['A'] = 0;
        registers['B'] = 0;
        registers['C'] = 0;
        registers['D'] = 0;
        registers['E'] = 0;
        registers['F'] = 0;
        registers['P'] = 0;

        while(registers['P']<=instructions.size()-1)
        {

            int ip = registers['P'];
            cout << ip << ' ' << instructions[ip].cmd << ' ' << instructions[ip].firstRegister << ' ' << instructions[ip].secondRegister << ' ' << instructions[ip].value << endl;
            if(instructions[ip].cmd=="LOD")
            {
                registers[instructions[ip].firstRegister] = instructions[ip].value;
                registers['P']++;
            }
            else if(instructions[ip].cmd=="ADD")
            {
                registers[instructions[ip].firstRegister] = registers[instructions[ip].firstRegister] +  registers[instructions[ip].secondRegister];
                registers['P']++;
            }
            else if(instructions[ip].cmd=="MUL")
            {
                registers[instructions[ip].firstRegister] = registers[instructions[ip].firstRegister] *  registers[instructions[ip].secondRegister];
                registers['P']++;
            }
            else if(instructions[ip].cmd=="CMP")
            {
                int res = registers[instructions[ip].firstRegister] - registers[instructions[ip].secondRegister];
                if(res<0)        registers['C'] = -1;
                else if(res>0)   registers['C'] =  1;
                else             registers['C'] =  0;
                registers['P']++;
            }
            else if(instructions[ip].cmd=="JMP")
            {
                registers['P'] = instructions[ip].value;
            }
            else if(instructions[ip].cmd=="INC")
            {
                registers[instructions[ip].firstRegister]++;
                registers['P']++;
            }
            else if(instructions[ip].cmd=="JCZ")
            {
                if(registers['C']==0)
                {
                    registers['P'] = instructions[ip].value;
                }
                else registers['P']++;
            }
            else if(instructions[ip].cmd=="JCP")
            {
                if(registers['C']>0)
                {
                    registers['P'] = instructions[ip].value;
                }
                else registers['P']++;
            }
            else if(instructions[ip].cmd=="JCN")
            {
                if(registers['C']<0)
                {
                    registers['P'] = instructions[ip].value;
                }
                else registers['P']++;
            }
            else if(instructions[ip].cmd=="HLT")
            {
                break;
            }
            cout << endl;
            for(char i = 'A'; i<'G';i++)     cout << registers[i] << ' ';
            cout << registers['P'] << endl;
            cout << endl;
        }
        for(char i = 'A'; i<'G';i++)     cout << registers[i] << ' ';
        cout << registers['P'] << endl;
    }

    return 0;
}
