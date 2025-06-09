//// PLAYER MANAGEMENT PROJECT

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

typedef struct player
{
	int jerseyNumber;
	char name[20];
	int run;
	int match;
	int wicket;
	
}player;

player addPlayer(player);
player removePlayer(player);
player searchPlayer(player);
player updatePlayerdata(player);
void displaysortedPlayer(player);
void displayallPlayer(player);


 void main()
 {
 	player p1;
 	p1=addPlayer(p1);
 	p1=removePlayer(p1);
 	p1=searchPlayer(p1);
 	p1=updatePlayerdata(p1);
 	displaysortedPlayer(p1);
 	displayallPlayer(p1);
 	
 }
player addPlayer(player p)
  {
 	int jerseyNumber;
 	char name[20];
 	int run;
 	int wicket;
 	int match;
 	
 	printf("ENTER THE JERSEY NUMBER:");
 	scanf("%d",&p.jerseyNumber);
 	
 	printf("ENTER THE PLAYER NAME:");
 	scanf("%s",p,name);
 	
 	printf("ENTER THE RUN:");
 	scanf("%d",&p.run);
 	
 	printf("ENTER THE WICKET:");
 	scanf("%d",&p.wicket);
 	
 	printf("ENTER THE MATCH:");
 	scanf("%d",&p.match);
 	
 	return p;
 }
 
player removePlayer(player p)
 {
 	int jersey;
 	char name[20];
 	
 	printf("ENTER THE JERSEY NUMBER:");
 	scanf("%d",&jersey);
 	
 	printf("ENTER THE PLAYER NAME:");
 	scanf("%s",name);
 	
 	if(p.jerseyNumber==jersey)
 	{
 		printf("ENTER THE JERSEY NUMBER REMOVE=%d",jersey);
 		
 		if(p.jerseyNumber==0)
 		{
 			printf("PLAYER FOUND\n");
		 }
		 else
		 {
		 	printf("PLAYER NOT FOUND\n");
		 }
	 }
	 return p;
 }
 
player searchPlayer(player p)
 {
 	int jersey;
 	char name[20];
 	
 	printf("ENTER THE JERSEY NUMBER:");
 	scanf("%d",&jersey);
 	
 	printf("ENTER THE NAME:");
 	scanf("%s",name);
 	
 	if(p.jerseyNumber==jersey && strcmp(p.name,name)==0)
	 {
	 	printf("PLAYER found\n");
	  } 
	  else
	  {
	  	printf("PLAYER NOT FOUND\n");
	  }
	  
	  return p;
 }
   
 player  updatePlayerdata(player p)
   {
   	int run;
   	int wicket;
   	int match;
   	
   	printf("ENTER THE NEW RUN:");
   	scanf("%d",&p.run);
   	
   	printf("ENTER THE NEW WICKET:");
   	scanf("%d",&p.wicket);
   	
   	printf("ENTER THE NEW MATCH:");
   	scanf("%d",&p.match);
   	
   	return p;
   }
   
 void  displaysortedPlayer(player p)
   {
   	int maxrun;
   	int minrun;
   	int maxwic;
   	int minwic;
   	
   	printf("ENTER THE MAXIMUM RUN:");
   	scanf("%d",&maxrun);
   	
   	printf("ENTER THE MINIMUM RUN:");
   	scanf("%d",&minrun);
   	
   	printf("ENTER THE MAXIMUM WICKET:");
   	scanf("%d",&maxwic);
   	
   	printf("ENTER THE MINIMUM WICKET:");
   	scanf("%d",&minwic);
   	
   	if(p.run<=maxrun && p.run>=minrun)
   	{
   		printf("RUN IS MAXIMUM\n");
	   }
	   else
	   {
	   	printf("RUN IS MINIMUM\n");
	   }
	   
	   if(p.wicket<=maxwic && p.wicket>=minwic)
	   {
	   	printf("WICKET IS MAXIMUM\n");
	   	
	   }
	   else
	   {
	   	printf("WICKET IS MINIMUM\n");
	   }
	   
	   
   }
 void  displayallPlayer(player p)
   {
   	
   	printf("JERSEY NUMBER=%d\n",p.jerseyNumber);
   	printf("NAME=%s\n",p.name);
   	printf("RUN=%d\n",p.run);
   	printf("WICKET=%d\n",p.wicket);
   	printf("MATCH=%d\n",p.match);
   
   }

