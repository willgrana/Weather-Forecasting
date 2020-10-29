# Weather Forecast

Ready to take the Temperature class and expand it to new levels?

You must work independently on this lab. You need to create a new branch in this repository, in similar fashion to the previous labs.

## Temperature Class

First, follow these steps.

### Reuse Code

Start with the Temperature class from the Style-Me week. You must copy the declarations into temperature.h and the definitions into temperature.cpp.

### Overload Operators

Consider which operators make sense to use with Temperature objects. Declare and define at least three overloaded operators, and use them in main.cpp to make sure they work.

## Weather Forecast Class

Now you are ready to expand to multiple classes!

Think about the last time you watched a newscaster give a weather forecast. What did she talk about? What did she show on the screen?

![Image of Weather Forecast](http://fxatoneglance.com/wp-content/uploads/2016/06/7-Day-Forecast.jpg)

### Weather Forecast

Declare a new class for the Weather Forecast. Temperature will be its **component class**, meaning that Temperature objects will be stored as fields. In other words, a Weather Forecast Has-A Temperature. Create new header and .cpp files for the Weather Forecast class.

The class should store:
* The number of days included in the forecast.
* The high and low temperatures for each day (how will you validate these values?).
* The days of the week in the forecast (hint: use an enum!).
    * Hold up, what's an enum? You can declare your own primitive data types that have a limited number of possible values (think booleans, which can only have values true and false). These are very readable for the programmer. The syntax is:
    ```
    // the enum is declared globally
    enum card_suit {clubs, diamonds, hearts, spades};
    
    // in a function, you can create a variable
    card_suit my_card = hearts;
    
    // like booleans, the values will print as integers
    cout << my_card << endl; // this prints 2
    ```
    To print the value of an enum variable as a readable string instead of an integer, you may want to write a helper function that converts the enum to a string. It would look like:
    ```
    string card_suit_to_string(card_suit suit) {
        switch(suit) {
        case hearts: return "hearts";
        // ... other three cases
        }
    }
    ```

The functionality of the Weather Forecast class should include:
* Displaying the forecast for all the days (feel free to use output manipulations like ```setw``` to make it look nice).
* Going to the next day's forecast (rotate out the day that has passed and receive new data for the day that is added).
* Calculating which day will be hottest/coldest.

## Grading
This lab is due by 3:30pm on Monday, February 17th. Note that that day is President's Day and there is no class. 

- [ ] (1 pt) Overload operators in Temperature class.
- [ ] (2 pts) Weather Forecast class: contains Temperature objects as a component class.
- [ ] (1 pt) Weather Forecast class: other fields as described above (including one enum).
- [ ] (1 pt) Weather Forecast class: display forecast (with formatted print statements).
- [ ] (1 pt) Weather Forecast class: method to go to the next day's forecast.
- [ ] (1 pt) Weather Forecast class: method to calculate hottest/coldest day.
- [ ] (2 pts) Create at least one Weather Forecast object and call methods to demonstrate their functionality.
- [ ] (1 pt) Code style is good and consistent.

## Extra Credit

For 0.5 pts of extra credit each, you can:
* Add a location to the forecast (this can be in the form of a town/city name or a zipcode or a latitude and longitude coordinate (hint: use a struct!)).
    * Hold up, what's a struct? Conventionally used for data types that store multiple pieces of information but does not have added functionality, the only technical difference between a struct and a class is that members of a struct are public by default (whereas they are private by default in a class). The syntax for a struct is:
    ```
    struct color {
        double red;
        double green;
        double blue;
    };
    ```
    Once declared, you can instantiate a struct the same way you would a class, and use the dot operator to access each part:
    ```
    color yellow;
    yellow.red = 1.0;
    yellow.green = 1.0;
    yellow.blue = 0.0;
    
    color gray = {0.5, 0.5, 0.5};
    ```
* Add precipitation percentage to each day (hint: making a day into a struct helps!).
* Add wind speeds to each day (hint: making a day into a struct helps!).
* Add the date to each day, that way you can distinguish between two of the same weekday in a longer-than-seven-day forecast (any guess what my hint will be?).
* Add weather pattern (sunny, cloudy, rainy, snowy, etc.) to each day (hint: enums and structs ftw!).

