use std::fs::File;
use std::io::{self, BufRead, BufReader};

fn main() {
    let mut file_name = String::new();

    io::stdin()
        .read_line(&mut file_name)
        .expect("Please enter a file name");

    println!("{}", file_name);

    let file = match File::open(file_name) {
        Ok(file) => file,
        Err(err) => panic!("Could not open file: {}", err),
    };

    let reader = BufReader::new(file);

    for line in reader.lines() {
        match line {
            Ok(line) => println!("{}", line),
            Err(err) => panic!("Could not read line: {}", err),
        }
    }
}
