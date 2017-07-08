#Timezone
timedatectl set-timezone Asia/Tokyo

add-apt-repository -y ppa:ubuntu-toolchain-r/test
apt-get update
apt-get -y install language-pack-ja git g++-6 clang-3.8 clang-format-3.8 libboost-all-dev nkf libiomp-dev
apt-get -y autoremove
