import 'dart:io';

factorial(int a) {
  if (a == 1) {
    return 1;
  }
  return a * factorial(a - 1);
}

void main() {
  stdout.write("Enter a no.: ");
  int a = int.parse(stdin.readLineSync().toString());
  int ans = factorial(a);
  print(ans);
}
