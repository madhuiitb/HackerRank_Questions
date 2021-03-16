int viralAdvertising(int n) {
    int likes = 0;
    int people = 5;
    int cumulative = 0;
    
    for(int i=0;i<n;i++){
        likes = people/2;
        cumulative = cumulative + likes;
        people = likes * 3;
    }
    return cumulative;

}
