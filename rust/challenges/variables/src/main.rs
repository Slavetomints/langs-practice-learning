fn main() {
    let x: i32 = 5;
    let x: i32 = x + 1;
    {
        let x: i32 = x * 2;
        println!("The value of x in the inner scope is: {x}");
    }
    println!("The value of x in the outer scope is: {x}");

    // addition
    let sum = 5 + 10;

    println!("The sum of 5 + 10 is: {sum}");

    // subtraction
    let difference = 95.5 - 4.3;

    println!("The difference of 95.5 and 4.3 is {difference}");

    // division
    let quotient = 56.7 / 32.2;
    let truncated = -5 / 3; // results in -1

    println!("The quotient of 56.7 and 32.2 is {quotient}");
    println!("The truncated quotient of -5 and 3 is {truncated}");

    // remainder
    let remainder = 43 % 5;
    println!("The remainder of 43 and 5 is {remainder}");

    // boolean
    let t = true;
    let f: bool = false; // explicit typing
    println!("The value of t is {t}, and the value of f is {f}");

    // character
    let c = 'z';
    let z: char = 'C';
    println!("c is the character {c}, and z is the character {z}");

    // tuple
    let tup: (i32, f32, i8) = (500,6.4,1);
    let (x2, y, z) = tup;
    println!("The value of x2 is {x2}, y is {y}, and z is {z}");

    // arrays
    let a = [1, 2, 3, 4, 5];
    let first = a[0];
    let second = a[1];
    println!("The first value fo the array is {first}, and the second value of the array is {second}");

    // functions!
    another_function();
    function_with_parameters(10);
    let five = five();
    println!("the function returned {five}");

}

fn another_function() {
    println!("Another function!")
}

fn function_with_parameters(a: i32) {
    let result = a * 2;
    println!("{a} * 2 = {result}");  
}

fn five() -> i32 {
    return 5;
}