/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>

// Base class for event subscribers
class EventSubscriber {
public:
    virtual void onEventReceived(const std::string& event) = 0;
};

// Event distributor class
class EventDistributor {
private:
    std::vector<EventSubscriber*> subscribers;

public:
    void subscribe(EventSubscriber* subscriber) {
        subscribers.push_back(subscriber);
    }

    void notify(const std::string& event) {
        for (EventSubscriber* subscriber : subscribers) {
            subscriber->onEventReceived(event);
        }
    }
};

// Example component class
class ButtonComponent : public EventSubscriber {
private:
    std::string name;

public:
    ButtonComponent(const std::string& name, EventDistributor* distributor) : name(name) {
        distributor->subscribe(this);
    }

    void onClick(EventDistributor distributor) {
        std::cout << "Button '" << name << "' clicked!" << std::endl;
        // Simulate generating an event
        std::string event = "ButtonClickedEvent";
        distributor.notify(event);
    }

    void onEventReceived(const std::string& event) override {
        if (event == "ButtonClickedEvent") {
            // Handle the event
            std::cout << "Button '" << name << "' received the event: " << event << std::endl;
            // Perform necessary actions
        }
    }
};

// Example component class
class TextBoxComponent : public EventSubscriber {
private:
    std::string name;

public:
    TextBoxComponent(const std::string& name, EventDistributor* distributor) : name(name) {
        distributor->subscribe(this);
    }

    void onTextEntered(const std::string& text,EventDistributor distributor) {
        std::cout << "Text entered in TextBox '" << name << "': " << text << std::endl;
        // Simulate generating an event
        std::string event = "TextEnteredEvent";
        distributor.notify(event);
    }

    void onEventReceived(const std::string& event) override {
        if (event == "TextEnteredEvent") {
            // Handle the event
            std::cout << "TextBox '" << name << "' received the event: " << event << std::endl;
            // Perform necessary actions
        }
    }
};

int main() {
    // Create the event distributor
    EventDistributor distributor;

    // Create components and subscribe them to the event distributor
    ButtonComponent button1("Button 1", &distributor);
    ButtonComponent button2("Button 2", &distributor);
    TextBoxComponent textBox1("TextBox 1", &distributor);

    // Simulate user interactions
    button1.onClick(distributor);
    button2.onClick(distributor);
    textBox1.onTextEntered("Hello, World!",distributor);

    return 0;
}


