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
ls
mkdir -p /dia
cd /dia
git clone https://github.com/IvayloStoimenov/Singa.git
