fn main() {
  let first_integer: u8 = 1;
  let second_integer: u8 = 2;
  let third_integer: u8 = first_integer + second_integer;

  println!("The first integer is: {}", first_integer);
  println!("The second integer is: {}", second_integer);
  println!("The thrid integer is {0} + {1}, which is {2}", first_integer, second_integer, third_integer);
}