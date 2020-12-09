//By Jack Tsai

#include <iostream>
#include <cmath> 
#include <algorithm>
using namespace std;

int fun(int S2,int a)
{
	S2 = rand() % S2 + 1;
	int b = S2;
	
	if (S2 == a || S2 == 1)
		return 1;
	else
		return 1 + fun(S2, b);

}
int main()
{
	int S, S1, S2;
	cin >> S;
	if(S > 0 && S < 10 ^ 5)
	{
		double avg = 0.0, Throw;
		double average[10];
		if (S == 1)
			avg = 1;
		else
		{
			for (int i = 0; i < 10; i++)
			{
				Throw = 1;
				for (int j = 0; j < 10000; j++)
				{
					S1 = rand() % S + 1;
					if (S1 == 1)
					{
						Throw = Throw + 1;
					}
					else
					{
						S2 = rand() % S1 + 1;
						
						if (S2 == 1)
							Throw = Throw + 2;
						else
						{
							int a = S2;
							S2 = rand() % S2 + 1;
							int b = S2;
							if(S2 == a || S2 == 1)
								Throw = Throw + 3;
							else
								Throw=Throw+3+fun(S2,b);
						}
					}
				}
				average[i] =round( Throw / 10000);
			}
			avg = *min_element(average,average+10);

		}
		cout << avg;
	}
	
	return 0;
}
