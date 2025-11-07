fn main() {
    let usernames: [&'static str; 5] = ["mints", "joe", "bob", "admin", "phillis"];
    for name in usernames {
        if name.to_lowercase() == "admin" {
            println!("Hello {name}, would you like to see a status report?");
        } else {
            println!("Hello {name}");
        }
    }

}
