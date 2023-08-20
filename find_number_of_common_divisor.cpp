int numOfDiv(int num) {
    int cnt = 0;
    for(int i=1;i*i<=num;i++) {
        if(num%i == 0) {
            if(num/i == i)
                cnt++;
            else
                cnt += 2;
        }
    }
    return cnt;
}
