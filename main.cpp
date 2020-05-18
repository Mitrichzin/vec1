#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int multremoval(/*int n, const char* file*/)
{
    setlocale(LC_ALL, "Russian");
    //freopen(file, "r", stdin);
    int n, t, c;
	vector<int> v;
	vector<int>:: iterator it;
	vector<int>:: reverse_iterator rit;
	cout << "¬ведите количество элементов" << endl;
	cin >> n;
    cout << "¬водите элементы"<<endl;
	for (int i = 0; i<n; i++){
        cin >>t;
        v.push_back(t);
    }
    cout<<"ѕрограмма удал€ет из массива все повтор€ющиес€ элементы, оставл€€ их первые вхождени€."<<endl;
	for (it = v.begin(); it != v.end(); it++){
        t = *it;
        c = count(it, v.end(), t);
        if (c-1)
            for (rit = v.rbegin(); rit != v.rend(); rit++)
                if ((c-1) && (*rit == t)) {
                    v.erase(rit.base()-1);
                    v.push_back(0);
                    c--;
                }
	}
    for (it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";

    return 1;
}
int main()
{
    multremoval();
    return 0;
}
