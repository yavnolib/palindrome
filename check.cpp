int is_palindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (rev == str) {
        return 1;
    }
    else {
        return 0;
    }
}
