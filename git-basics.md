
# Git Basics
_Git_ is version-control software that makes collaboration with teammates super simple. It lets you easily keep track of every revision you and your team make during the development of your software.

![git_vocab](https://image.slidesharecdn.com/gitandgithubfordocsabv3-150729233204-lva1-app6892/95/git-and-github-for-documentation-4-638.jpg?cb=1438213068)

## Getting Started and Required Commands

### How to Install Git

For Linux, open the terminal and type:

    sudo apt-get install git-all 
    
On Windows, it’s just as simple. You [download the installer](https://git-scm.com/download/win) and run it.    

## Git Internals

**-Basic commands to move files into different trees in your repository**
![git_internals](https://i.redd.it/nm1w0gnf2zh11.png)

## Git Workflow

The basic Git work flow goes something like this:
1. Clone the repo
     
       $ git clone <link-to-repository> 

2. Create a new branch

       $ git checkout master
       $ git checkout -b <your-branch-name>
    
      
3. Add untracked/modified files

       $ git add .    // To add untracked files ( . adds all files)
       
4. Commit changes

       $ git commit -sv      // Description about the commit
      
5. Push to remote respository

       $ git push origin <branch-name>   // Push changes into repository
      


   



