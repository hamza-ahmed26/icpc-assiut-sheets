//
/*#include<iostream>
using namespace std;
int main()
{
	long long A , B;
	char S;
	cin >> A >> S >> B;
	long long sum = A + B;
	long long min = A - B;
	long long time = A * B;
	long long div = A / B;
	if (S == '+') { cout << sum; }
	else if (S == '-') { cout << min; }
	else if (S == '*') { cout << time; }
	else { cout << div; }
  }
  */
/*
 امم ده كان حلي السابق هو صحيح وكل حاجة 
.. بدل ما ألف وأدور بـ 
if و else،
ما اقولك علي امر منظم و تحسه شيك الا و هو 
switch
*/
#include <iostream>
using namespace std;
int main() {
    long long A, B;
    char S;
    cin >> A >> S >> B;
    switch (S) {
        case '+':
            cout << A + B;
            break;
        case '-':
            cout << A - B;
            break;
        case '*':
            cout << A * B;
            break;
        case '/':
            if (B != 0) {
                cout << A / B;
            }
            break;
    }

    return 0; // زي "قفل الباب" وراك وأنت خارج.. الكومبايلر ممكن يقفله بدالك دلوقتي، بس الأصح إنك تقفله بإيدك عشان تضمن إن مفيش "هوا" يدخل
  // يفضل تعمله لكن زماان كان البرنامج عمره ما يشتغل اطلاقا من غيره !!!
}/*
ما بتنفعش في "أكبر من" أو "أصغر من"؛ هي معمولة للحالات اللي فيها "المتغير ده بيساوي القيمة دي بالضبط".
لو تلاحظ

*/
