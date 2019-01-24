Bootstrap:docker
From:ubuntu

%help
This is the place for basic help.

%labels
MAINTAINER Ivast

%runscript
echo "This gets run when you run the image!" 
cd /dia/Singa
ls -l
./Singa

%post  
echo "This section happens once after bootstrap to build the image."  
apt-get update
apt-get install -y build-essential
apt-get install -y wget git curl
apt-get install -y apt-transport-https
ls
mkdir -p /dia
cd /dia
git clone https://github.com/IvayloStoimenov/Singa.git
ls
cd Singa
ls
chmod +x Singa 
