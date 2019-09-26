#include <bits/stdc++.h>
using namespace std;
main()
{
	cout<<"They put in their lives together with her small mantra to life. ";
	cout<<"They had their own happiness, sorrow, anger and pain. They split them all separately and dealt with them as a team.";
	cout<<" They had a distinct vision of life, in which they could always see each other.\n";
	cout<<" Our hero was successful, smart, brisk, and valued among everyone. What a turnover! But you know what's bigger? He now valued his life. He was content with his performance and the road he had taken."<<endl;
	cout<<"\n\nI would want to stop the story at this point and ask you, can you think of a person (who you think of positively) who actually went from totally hopeless to genuinely happy? That's the best thing as human you'll get to see. :)"<<endl;
	cout<<endl<<endl;
	while(true)
	{
		cout<<"Enter an integer: ";
    	int n;
   		cin>>n;
    	int counter=0;
    	for (int i = 1; i < n; i++) 
      	for (int j = i; j < n; j++) 
            for (int k = j; k < n; k++)  
            	if (n-i-j-k>=k) 
               		counter++; 
        cout<<"The result is:";
   		cout<<counter<<endl<<endl;
   	}
}