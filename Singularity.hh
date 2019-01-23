Bootstrap:docker
From:ubuntu:latest  

%labels
MAINTAINER Vanessasaur
SPECIES Dinosaur

%runscript
echo "This gets run when you run the image!" 
exec /bin/bash /dia/Singa/Singa

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
chmod u+x /Singa 
