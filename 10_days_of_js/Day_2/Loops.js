function vowelsAndConsonants(s) {
  const vowels = "aeiou";
  for (let i = 0; i < s.length; i++) {
    if (vowels.indexOf(s.charAt(i)) > -1) {
      console.log(s.charAt(i));
    }
  }
  for (let i = 0; i < s.length; i++) {
    if (vowels.indexOf(s.charAt(i)) < 0) {
      console.log(s.charAt(i));
    }
  }
}
