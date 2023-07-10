#include <bits/stdc++.h>
using  namespace std;
int main ()
{
string firstlevel ("com");
string secondlevel ("cplusplus");
string scheme ("http://");
string hostname;
string url;
hostname = "www." + secondlevel + '.' + firstlevel;
url = scheme + hostname;
cout << url << '\n';
return 0;
}