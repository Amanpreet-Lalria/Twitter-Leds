var tweet = msg.payload;

tweet = tweet.toLowerCase();

       if (tweet.indexOf('one') != -1) {
    msg.payload = 1;
} else if (tweet.indexOf('two') != -1) {
    msg.payload = 2;
} else {
    msg.payload = '';
}
return msg;