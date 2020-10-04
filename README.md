# Dance
CMake build example of Dance


# how to do test
mkdir Dance
cd Dannce
curl -o dance.cpp -L https://gist.githubusercontent.com/mlcollard/29b30a1951022b878e0c69f0a183d634/raw/5d2a9c6f061fef8ae78826c1f4f63635a9bba582/dance.cpp
ls -l

nano CMakeLists.txt

cmake_minimum_required(VERSION 3.10.0)

project(dance)

add_executable(dance dance.cpp)


cd ..

# build on docker
docker run --mount type=bind,source=$(pwd)/Dance,target=/Dance -it mlcollard/linux-dev
ls /Dance
mkdir Dance-Ninja
cd Dance-Ninja
cmake ../Dance -G Ninja

ls
ninja
./dance

// showterm
http://showterm.io/31377bd886871174fd848#
