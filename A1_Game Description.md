**What is the main action in the game?**

Unless I made a major error in the implementation, the game is essentially just classic checkers. The main draw of the game is meticulously thought out, tactical decision making. Due to one of the central mechanics of the game, forced aggression (being forced to take an opponent's piece whenever possible), sometimes players lose a lot of their agency for several turns. One move can lead into a sequence of positions where one player, or both, have very little ability to impact the outcome of the game. Occasionally, this mechanic can feel extremely satisfying - especially when you outwit your opponent, and force them into a sequence of turns they don't want to take.

Ironically, since the game sometimes (essentially) ends up playing itself, this mechanic usually makes it feel like a much less stimulating experience than most competing board games. 

**What was the hardest part of the game to get working in Unreal?**

I have a little list of things I really struggled with. Allow me to start at the top:

*C++ Programming*

This was a very hard one for me - aside from the fact that it is not really a comfortable language for me at the best of times, Unreal has a nasty habit of completely breaking whenever it encounters a major error. In the end I think there were 7 or 8 different iterations of this assignment on my computer, because I kept breaking them with different problems. Additionally, using C++ in an engine has its own learning curve associated with it - eg the fact that it is very difficult to actually spawn actors using pure C++ code, or that the default playerController can't click on things. Even with the copious tutorials offered by the epic team, I still found this part of the process utterly rage inducing.

In the end, the bulk of the logic for my implementation ended up being in the blueprint classes. These tools are extremely intuitive to work with, and function pretty well with just a tiny bit of extra C++. One major downside of a more visual style of coding, however, is that the codebase becomes more unsightly and hard to manage as work progresses. In particular, my blueboard class is a horrifying mess of connections.

*Passing Information*

Getting information of any kind between two different objects, especially objects which are not created as a part of the default scene, is a major hassle in unreal. Even to pass information up and down to the blueprint level is very difficult. A lot of my classes ended up with several getters and setters, just to try and integrate the c++ and the blueprint code together. Additionally, I was somewhat surprised by how hard it was to integrate c++ into a blueprint workflow - eg, having to make UFUNCTIONs BlueprintCallable in order to actually use them in the blueprint.

**What is the most interesting part of the game?**

I made a really boring game. I made checkers. 90% of the work I was doing felt like I was constraining the player out of having any actual fun. If I had to pick the most interesting part, however, it would probably be the user interface, or more specifically, the freedom of it. Having the player free to move in a three dimensional space to play this two dimensional game added just a little bit of visual intrigue that it otherwise would've totally lacked. Being able to look at the board from any angle makes it much more visually stimulating than it would be otherwise, and with some more solid better modelling skills, and a bit more of a dynamic board, it could have almost been fun. Once the novelty wears off though, it is still just checkers. 

Also, I was very proud of implementing the restricted movement mechanics fully - these took a lot of trial and error in order to get working properly. The green highlight is another thing that I think worked pretty well in context. 
