This Project Contains the Source Code for BOOK MY SHOW Application
============================================================================

BookMyShow is an Indian online ticketing service for cinemas / movies, events, and sports

Requirement Gathering:
=====================================

**Rough Flow of the Requirements:**

1. User selects his preferred city and list of the movies/events is displayed to him which are showing  in the cinemas of that city with their availability.
2. User can browse through the movies and select/book  a movie in a cinema hall by making the payment.
3. User should be able to browse movies on the basis of city,language of movie,title of movie,show time,cinema hall, release date, location of cinema hall in the city, movie rating,genre ( Action,
drama,Animation, 2D,3D).
4. Each movie can be shown in multiple cinemas.
5. Each cinema hall can have multiple show/movie timings. 
6. Customer should be able to view the seating arrangement, available seats and book the seats ( one or more accordingly).
7. System should be able to accept the payment and the customer should be able to get the confirmation of payment with the booked tickets.
8. The system should not allow the multiple booking for same seat.
9. Customer can registers on the app/website of Book My Show. 
10. He can login to the app/website.
11. User Should be able to cancel the tickets.


Here are the Actors Involved:
1. User ( User can be a Guest user- who do activities of searching but do not book the ticket, Customer - who actually book the ticket )
2. Admin
3. System

We will treat Customer as our user for now: 


Use Cases:
=====================

**User ( Customer)**
1. Should be able to regsiter and login.
2. Should be able to browse movies on the basis of city,language of movie,title of movie,show time,cinema hall, release date, location of cinema hall in the city, movie rating,genre ( Action,
drama,Animation, 2D,3D).
3. Accordingly , select the movie and  make the payemnt by UPI/Wallet/Cards
4. Get Notification of booking and tickets to Mail/Whatsapp
5. Can give Rating of the Movie
7. Call Customer Care if needed.
6. Can Cancel the Movie.
7. Get Refund.
8. Should be able to view Recommended Movies or get Notifications of  the same.
9. Should be able to view his bookings.


**Admin:**
1. Can add/Update/delete the Cinemas, movies, movie timings, city
2. Can Block Some of the seats 
3. Add some rules for a movie/events
4. Do KYC of Cinemas


**System:**
1. Should be able to accept payment and book the ticket
2. Send Booking confirmation and send ticket to email/Whatsapp
3. Accept user request of cancellation and send the refund.
4. Show or send recommended movies to registered users.
5. Send the upcoming movies/shows notifications.
6. Keep History of Customers orders




So Our Core Flow can be:
================================

City Displayed ->  Choose Cinema -> Choose Movie and timings -> seat booking -> Make Payment -> Get the Confirmation of ticket Booking


Classes Identified:
==========================
1. User/Customer
2. Movie
3. City
4. Theater/Cinema
5. Cinema hall
6. Show
7. Seat
8. Booking
9. Ticket
10. Payment
11. Notification
