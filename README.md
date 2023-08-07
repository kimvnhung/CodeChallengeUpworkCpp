# CodeChallengeUpworkCpp

    this is main branch
# Step to run Code
    sudo apt-get install libssl-dev
    g++ -I/user/include -c main.cpp -o main.o (/user/include is the path link to openssl lib)
    g++ main.o -o main -lssl -lcrypto
    ./main
