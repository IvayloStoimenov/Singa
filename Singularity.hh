Bootstrap:docker  
From:ubuntu:latest  

%labels
MAINTAINER Vanessasaur
SPECIES Dinosaur

%environment
RAWR_BASE=/dia
export RAWR_BASE

%runscript
echo "This gets run when you run the image!" 
exec /bin/bash /dia/Singa

%post  
echo "This section happens once after bootstrap to build the image."  
ls
mkdir -p /dia
ls
cp Singa /dia/Singa
cp Singa.specs /dia/Singa.specs
chmod u+x /dia/Singa
