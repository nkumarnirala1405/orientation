# **Docker Basics**

## Docker Terminologies
*  **Docker** is a platform for developers and system admins to develop, deploy, and run applications with containers.

* **Docker v/s Virtual machine**
![docker vs virtual machine](https://codingthesmartway.com/wp-content/uploads/2019/02/010.png)
* **Docker Image** is containing everything needed to run an application as a container. This includes code, runtime, libraries, environment variables, configuration files.
* A Docker **Container** is a runtime instance of an image.
* Docker image is created using a **Docker file**.

## Docker Components

## Docker Engine
* It is responsible for the overall functioning of the Docker platform.
* It is a client-server based application and Server, Rest API and client are its three main components.
    
![Docker_engine](https://docs.docker.com/engine/images/engine-components-flow.png)

## Docker Hub

Docker Hub is the official online repository where you could find all the Docker Images that are available for us to use.

## Docker Installation

1. Uninstall the older version of docker if is already installed.

       $ sudo apt-get remove docker docker-engine docker.io containerd runc

2. [Installing CE ](https://docs.docker.com/install/linux/docker-ce/ubuntu/)(Community Docker Engine)

## Docker basic command

![docker_basic_commnads](https://raw.githubusercontent.com/sangam14/dockercheatsheets/master/dockercheatsheet1.png)

## Push your image on Dockerhub

[Referred link](https://medium.com/@deepakshakya/beginners-guide-to-use-docker-build-run-push-and-pull-4a132c094d75)

1. Create Dockerhub account
2. Create Repository
3. Click on Create Repository button, put the name and enter.
4. Now we will tag the image and push it to dockerhub repository which we just created.

## Pull and run the image

1. Remove all versions of python-test image on our local system. Use Image ID to do that.
2. Run the image, if it doesn't find it on local machine, it fetched it from dockerhub and run.
        
         

