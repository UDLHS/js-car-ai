# 🚗 AI Self-Learning Car (JavaScript, No Libraries)

This project is a pure **JavaScript-based simulation** of an AI-powered car that learns to drive on its own using basic concepts of artificial intelligence, object-oriented programming (OOP), and collision detection — **without using any external libraries**.

---

## 🎯 Objective

To build a basic self-learning car simulation from scratch using plain JavaScript and HTML5 Canvas. The car should learn to avoid obstacles and stay within road boundaries by adjusting its own behavior based on input sensors and scoring.

---

## 🧠 Key Concepts Used

- **Object-Oriented Programming (OOP)**: Cars, sensors, roads, traffic, etc. are modeled as objects.
- **AI Logic from Scratch**: The car uses simple logic (e.g., basic neural net or heuristic) to make decisions.
- **Sensor-Based Input**: The car "sees" the road using simulated sensors (rays for obstacle detection).
- **Learning / Mutation**: Simple logic to "evolve" or improve over generations (no external AI libraries).
- **Canvas Rendering**: All graphics are rendered using the HTML5 `<canvas>` element.

---

## 🛠️ Tech Stack

- 🧠 **JavaScript (no libraries)**
- 🎨 **HTML5 Canvas**
- 🧱 Basic CSS for layout and UI

---

## 📁 Project Structure

ai-self-driving-car/
├── car.js           # Car class: physics, movement, drawing
├── controls.js      # Keyboard and AI control logic
├── index.html       # Canvas + initial layout
├── main.js          # Entry point: sets up simulation, animates
├── network.js       # Neural network logic from scratch
├── road.js          # Road structure, lane calculations
├── sensor.js        # Sensor rays for obstacle detection
├── style.css        # Basic CSS styling
├── test.cpp         # (Optional/Unused) C++ test file
├── utils.js         # Utility functions (math, collision, etc.)
├── visualizer.js    # Visualizes the neural network on canvas
└── README.md        # This file

---
