//let: const type; let mut: type; &mut: tempory pointer

fn main()
{
    let mut input = String::new();
    println!("Please enter a number:");
    
    //insert value input by user
    std::io::stdin().read_line(&mut input).expect("Failed to read line");

    //i32: int32
    let number: i32 = input.trim().parse().expect("Please type a number!");

    //let number = 5;

    if number == 4
    {
        println!("number value is 4");
    }
    else
    {
        println!("number value is not 4 but {number}");
    }
}