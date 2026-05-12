// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include<iostream>
using namespace std;
int main()
{
	char x; 
	cin >> x;
	if (x >= 'a' && x <= 'z') { 
        // الحرف سمول.. اطرح 32 عشان تجيب الكابيتال من جدول الـ ASCII
        cout << char ( x - 32 ); 
    }
	else { 
        // الحرف كابيتال.. زود 32 عشان تنزل للسمول
        cout << char (x + 32); 
    }
}
/*
 ASCII (أو "أسكي") 
 هي اختصار لـ
 American Standard Code for Information Interchange.

ببساطة ومن غير تعقيد: الكمبيوتر مبيفهمش حروف، بيفهم كهرباء (أرقام).

فكان لازم يعملوا "جدول" يترجم الحروف اللي بنكتبها لأرقام الكمبيوتر يقدر يخزنها، والجدول ده هو الـ
 ASCII.
 الحروف الكبيرة (A-Z): بدأت من رقم 65 لحد 90.

الحروف الصغيرة (a-z): بدأت من رقم 97 لحد 122.

الأرقام (0-9): حتى الأرقام ليها كود! مثلاً '0' الكود بتاعه 48.

الرموز (Space, @, #): المسافة (Space) نفسها ليها رقم وهو 32.
 عايز تشوف رموز اخري 
 https://www.ascii-code.com

*/
