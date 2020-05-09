#include <iostream>
#include <stdio.h>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include "DiscordRPC/discord_rpc.h"
#include "DiscordRPC/discord_register.h"
#define LOG(x) std::cout<<x<<std::endl
#define LOGLN(x) std::cout<<x




int main()
{
	//The ID of the Discord application
	std::string appID;

	//Text to be printed on the status 
	//Details is on the top and state is on the bottom line
	std::string details;
	std::string state;

	//Image Keys to be displayed on the status
	std::string smallImage = "";
	std::string largeImage = "";
	std::string largeImageTEXT = "";
	std::string smallImageTEXT = "";

	//Timestamps for the status
	//Important note: startTime is UNIX time so you need to convert your time in a UNIX time converter
	long long startTime = 0;
	//bool QuestionedFinished = false;

	LOG("Hello and welcome to the CustomDiscordRPC application!");

	LOGLN("Enter your Discord Application ID: ");
	std::cin >> appID;
	LOG("Your appID is: " << appID);

	LOGLN("Enter your state: ");
	std::cin >> state;
	LOG("Your state is: " << state);

	LOGLN("Enter your details: ");
	std::cin >> details;
	LOG("Your details are:" << details);

	LOG("Optional category! To not use an image write invalid image key and write some random text and to disable timestamp write 0");

	LOGLN("Enter your large image key (name of the large image for your app): ");
	std::cin >> largeImage;
	LOG("Your image key is: " << largeImage);

	LOGLN("Enter your large image text (the text when you hover over the large image): ");
	std::cin >> largeImageTEXT;
	LOG("Your image key's text is: " << largeImageTEXT);

	LOGLN("Enter your small image key (name of the small image for your app): ");
	std::cin >> smallImage;
	LOG("Your image key is: " << smallImage);

	LOGLN("Enter your small image text (the text when you hover over the small image): ");
	std::cin >> smallImageTEXT;
	LOG("Your image key's text is: " << smallImageTEXT);

	LOGLN("Enter your start time stamp (UNIX time): ");
	std::cin >> startTime;
	LOG("Your image key's text is: " << startTime);

	LOG("Sumarry:");
	LOG("Your appID is: " << appID);
	LOG("Your state is: " << state);
	LOG("Your details are:" << details);
	LOG("Your large image key is: " << largeImage);
	LOG("Your large image key's text is: " << largeImageTEXT);
	LOG("Your small image key is: " << smallImage);
	LOG("Your small image key's text is: " << smallImageTEXT);
	LOG("Your start timestamp is: " << startTime);
	LOG("DO NOT close the program if you want the richpresense to be running");
	LOG("You are using CustomDiscordRPC version 1.0 by Madman10K. Be aware that for now every time you close the program you will need to re-enter your information!");
	
	const char* ID = appID.c_str();
	DiscordEventHandlers handle;
	memset(&handle, 0, sizeof(handle));
	Discord_Initialize(ID, &handle, NULL, NULL);


	const char* PresenseState = state.c_str();
    const char* PresenseDetails = details.c_str();
	const char* LargeImage = largeImage.c_str();
	const char* PresenseLargeImageText = largeImageTEXT.c_str();
	const char* SmallImage = smallImage.c_str();
	const char* PresenseSmallImageText = smallImageTEXT.c_str();

	LOG(PresenseDetails);
	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.state = PresenseState;
	discordPresence.details = PresenseDetails;
	discordPresence.largeImageKey = LargeImage;
	discordPresence.largeImageText = PresenseLargeImageText;
	discordPresence.smallImageKey = SmallImage;
	discordPresence.smallImageText = PresenseSmallImageText;
	discordPresence.startTimestamp = startTime;
	Discord_UpdatePresence(&discordPresence);

	
	system("pause");
}