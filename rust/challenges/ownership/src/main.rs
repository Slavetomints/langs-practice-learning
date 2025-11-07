fn main() {
    let s = String::from("Hello");

    takes_ownership(s);
    
    // cant do this because ownership was passed in the function call
    // println!("{}", s);

    let x = 5;

    makes_copy(x);

    //
    // return values and ownership
    //
    let s1 = gives_ownership();

    println!("{}", s1);

    let s2 = String::from("Hello");
    let s3 = takes_and_gives_back(s2);
    println!("{}", s3);

    //
    // returning multiple values
    //

    let string1 = String::from("Hello");

    let (string2, len) = calculate_length(string1);

    println!("The Length of {string2} is {len}");

    //
    // references and borrowing
    // 

    let another_fucking_string = String::from("haiiiii");
    let len2 = calculate_length_two(&another_fucking_string);

    println!("The length of {another_fucking_string} is {len2}");

    let s4 = String::from("Hello");

    // references are immutable
    // change(&s4);

    println!("{}", s4);


}

fn takes_ownership(some_string: String) {
    println!("{some_string}");
}

fn makes_copy(some_integer: i32) {
    println!("{some_integer}");
}

fn gives_ownership() -> String {
    let some_string =  String::from("Yours");

    return some_string;
}

fn takes_and_gives_back(a_string: String) -> String {
    return a_string;
}

fn calculate_length(some_string: String) -> (String, usize) {
    let length = some_string.len();
    return (some_string, length);
}

fn calculate_length_two(s: &String) -> usize {
    return s.len();
}

//fn change(some_string: &String) {
//    some_string.push_str(", World!");
//}