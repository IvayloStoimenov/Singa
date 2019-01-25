Bootstrap:docker
From:ubuntu:16.04

%help
This is the place for basic help.

%labels
MAINTAINER Ivast

%runscript
echo "This gets run when you run the image!" 
cd /Singa
ls -l
./Singa "$@"

%post  
echo "This section happens once after bootstrap to build the image."  
apt-get update && apt-get install -y git
git clone https://github.com/IvayloStoimenov/Singa.git
chmod +x ./Singa/Singa 
