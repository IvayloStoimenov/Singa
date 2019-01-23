Bootstrap:shub
From:ubuntu:latest  

%labels
MAINTAINER Ivast

%post  
echo "This section happens once after bootstrap to build the image."  
apt-get update
apt-get install -y build-essential
apt-get install -y wget git curl
apt-get install -y apt-transport-https

cd /opt
git clone https://github.com/IvayloStoimenov/Singa.git


%runscript
echo "This gets run when you run the image!" 
exec /bin/bash /opt/Singa

