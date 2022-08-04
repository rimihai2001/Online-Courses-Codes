function main() {
    var depth = parseInt(readLine(), 10);
    var feet = 0;
    var day = 0;
    while(feet<depth)
    {
        day++;
        feet+=7;
        if(feet>=depth)
            break;
        feet-=2;
    }
    console.log(day);
}
