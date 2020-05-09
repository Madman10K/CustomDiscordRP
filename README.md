# CustomDiscordRP
## Description
A program written in C++ that allows for a person to make their own custom rich presence on discord. One thing that is very pepega is that I pasted everything into my main function because calling fuctions didn't work lmao and I will try and adress that in a later update
## Usage
### Setting up a discord application
To make yourself a custom rich presence you first need to create an app for discord. This can be done by going to this [link](https://discord.com/developers/). Log into your Discord account and create an app by clicking on "New Application". Here you can get the settings we need.
### Installing the CustomDiscordRP application
Download the app from the [releases section](https://github.com/Madman10K/CustomDiscordRP/releases) and unizp it's contents to a folder then open it up. You are now ready to make your first custom rich presence!
### Setting up your presence
When you open the program a console window should appear 

![alt text](https://cdn.discordapp.com/attachments/606099831542382594/708739815851556985/unknown.png)

It will ask you for your appID. You need to paste your "client id" from the discord developers site (the numbers in the hidden part)

![alt text](https://cdn.discordapp.com/attachments/606099831542382594/708740548562911282/unknown.png)

After pasting it and clicking Enter the program will ask you for your state (the lower line on your status). Here you can type whatever you want to display: 

![alt text](https://cdn.discordapp.com/attachments/606099831542382594/708741568839942255/unknown.png) 

After that it will ask you about details (the higher line on the status). The process is exactly the same as with the state
### Setting up optional RPC features
In this section I will show you how to set up optional features. Almost every feature is optional with the exception of the appID, the state and the details.
#### Adding a picture to the RPC
To add a picture to the presense you need to go to the discord developers site and go to the section `Rich Presense` and then select `Art Assets`. Here you can upload photos to add to your rich presense. The name of your photos are called image keys and they are important to type right in the program. The large image key refers to the big image while the small image key refers to the small one. For example the game OSU! uses the large image as it's logo and the small image to show what game mode you are playing. Write the exact image key to use an image or write invalid text so it doesn't show anything. The image text is the text when you hover over the image. 
#### Adding a timestamp to the RPC
Finally we have the start timestamp which tracks the time you have been playing the game for. Leave at 0 to disable or paste in a UNIX time number by converting your current time to UNIX time.
## You are ready and you successfully made a custom RPC 
You can now go to your profile and see everything you have set up displaying to your profile just like I do here 

![alt text](https://cdn.discordapp.com/attachments/606099831542382594/708749104175382528/unknown.png)
