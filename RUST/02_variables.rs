//let: const type; let mut: type; &mut: tempory pointer
//types: i32/64, f32/64, char, bool, &str

fn main()
{
    let nb_respect: i32;
    nb_respect = 4;

    let mut input = String::new();
    println!("Please enter a number:");
    
    //insert value input by user
    std::io::stdin().read_line(&mut input).expect("Failed to read line");

    //i32: int32
    let number: i32 = input.trim().parse().expect("Please type a number!");

    if number == nb_respect
    {
        println!("number value is {nb_respect}");
    }
    else
    {
        println!("number value is not {nb_respect} but {number}");
    }
}
