# Library Management System

This project is a Library Management System, divided into three major management modules, a comprehensive query module, and a statistical analysis module.

## Table of Contents
- [Features](#features)
- [Extended Features](#extended-features)
- [How to Use](#how-to-use)
- [Code Explanation](#code-explanation)

## Features

### 1. Picture Book Data Management
- **Basic Information:**
  - Book information includes book number, title, author, publisher, publication date, price, language, suitable age, and lending status.
- **Functionality:**
  - Provides basic functions such as entering, modifying, deleting, and browsing book information.

### 2. Member Information Management
- **Basic Information:**
  - Member information includes member number, name, age, gender, and contact number.
- **Functionality:**
  - Provides basic functions such as entering, modifying, deleting, and browsing member information.

### 3. Borrowing Management
- **Borrowing Information:**
  - Borrowing information includes book number, member number, borrowing time, and return time.
- **Functionality:**
  - Provides basic functions such as entering, modifying, deleting, and browsing borrowing information.

## Additional Modules

### 4. Comprehensive Query Module
- **Book Information Query:**
  - Search by book number, title, or author.
- **Member Information Query:**
  - Search by member number, name, or contact number.
- **Borrowing Information Query:**
  - Search by book number or member number.

### 5. Statistical Analysis Module
- **Ranking:**
  - Member borrowing ranking.
  - Book borrowing ranking.
  - Book suitable age ranking.

## Extended Features

### 1. Data Persistence
- **Saving Data:**
  - Save various data types from memory to files when the system exits.
- **Loading Data:**
  - Support loading data from files when the system is reopened.

### 2. Membership Levels
- **Membership Tiers:**
  - Introduce different membership levels, regular and premium.
- **Borrowing Limits:**
  - Regular members can borrow a maximum of 10 books with a 1-month deadline. Each overdue book incurs a fine of $1 per day.
  - Premium members have no limits on the number of books borrowed and no time restrictions.

## How to Use

1. Clone the repository.
2. Compile the C++ code using your preferred compiler.
3. Run the executable to start the Library Management System.
4. Follow on-screen instructions to navigate and use the system.

## Code Explanation

The core code is divided into sections corresponding to different functionalities. Each section is well-documented to facilitate understanding and modification.

