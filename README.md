✈️ Airblue Airline Management System

A console-based **Airline Management System** built in C++ as a First Semester project.  
It lets you check flight schedules, book tickets, view bookings, and cancel them — all from a simple menu in the terminal.


 📌 What is this project?

This project simulates a basic airline booking system for **Airblue Airline**.  
You can browse domestic and international flights, enter passenger details, book a seat, and manage your bookings — just like a real airline counter, but in your terminal!

---

🖥️ How it looks

> When you run the program, you'll see a clean main menu like this:

```
      Welcome to Airblue Airline
  Your comfort is our priority. Enjoy your journey

__MainMenu_______________________

    Press 1 for Check flight Schedule
    Press 2 for Passenger Booking
    Press 3 for Booking Summary
    Press 4 for Booking Cancellation
    Press 5 to Show Seat Availability
    Press 6 for Exit from program
```

---

⚙️ Features

| Feature | Description |
|---|---|
| ✅ Flight Schedule | Check domestic & international flights by date |
| ✅ Passenger Booking | Book a flight with your personal info |
| ✅ Booking Summary | View all current bookings |
| ✅ Booking Cancellation | Cancel a booking by passenger name |
| ✅ Seat Availability | See how many seats are still available |

---

🗺️ Flight Routes

### 🇵🇰 Domestic Flights
Available from **January 14 to 18, 2025**

Routes covered:
- Karachi → Islamabad
- Karachi → Lahore
- Karachi → Sukkur
- Lahore → Sukkur
- Islamabad → Karachi
- Islamabad → Quetta
- Karachi → Gawadar
- Quetta → Peshawar
- Karachi → Faisalabad
- Faisalabad → Islamabad
- Faisalabad → Skardu
- Karachi → Peshawar

🌍 International Flights
Available on **January 12, 15, 17, 21, and 25, 2025**

Destinations:
- 🇦🇪 Dubai
- 🇸🇦 Jeddah
- 🇬🇧 London
- 🇹🇷 Istanbul
- 🇶🇦 Doha
- 🇨🇳 Shanghai
- 🇹🇭 Bangkok
- 🇧🇩 Dhaka
- 🇲🇾 Kuala Lumpur
- 🇱🇰 Colombo

---

🚀 How to Run

### Requirements
- A C++ compiler like **g++** or **MinGW**
- Windows OS (uses `system("CLS")` for screen clearing)

### Steps

1. **Clone this repository**
   ```bash
   git clone https://github.com/your-username/airblue-airline-system.git
   cd airblue-airline-system
   ```

2. **Compile the code**
   ```bash
   g++ main.cpp -o airblue
   ```

3. **Run the program**
   ```bash
   airblue.exe
   ```

---

📋 How to Use

1. Run the program — the **Main Menu** will appear
2. **Press 1** → Choose Domestic or International → Enter a date → View flights
3. **Press 2** → Enter your name, age, gender, passport number → Choose flight type and date → Enter flight number → Booking confirmed!
4. **Press 3** → See a list of all bookings made so far
5. **Press 4** → Enter passenger name to cancel their booking
6. **Press 5** → Check how many seats are still available (out of 50)
7. **Press 6** → Exit the program

---

🧠 Concepts Used

This project was built using the following C++ concepts:

 `structs` — to store flight schedules and booking data
 `arrays` — to hold multiple flight records and bookings
 `functions` — each feature is in its own function
 `switch-case` — for menu navigation
 `do-while loop` — to keep the menu running
 `string` and `getline` — for passenger name input
 `iomanip` — for neat table formatting in the console


👨‍💻 About

This is my **First Semester C++ Project**, made with a lot of effort and learning.  
It's not perfect, but it works — and I'm proud of it! 



---

## 📜 License

This project is open for learning purposes. Use it freely!
