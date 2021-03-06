extern crate system_shutdown;

use system_shutdown::shutdown;

fn main() {
    match shutdown() {
        Ok(_) => println!("Shutting down..."),
        Err(error) => eprintln!("Failed to shut down: {}", error),
    }
}
