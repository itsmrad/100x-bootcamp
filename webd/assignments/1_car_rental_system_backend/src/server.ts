import dotenv from "dotenv";
import express from "express";
import { generateToken } from "./auth";
import { checkDbStatus } from "./db";

dotenv.config();

const app = express();
const PORT = 3000;

app.get("/", (req, res) => {
	res.send({ message: "Car Rental System Backend is running!" });
});

app.get("/auth/sign-up", async (req, res) => {
	// Placeholder for signup logic
	const session = generateToken();
	res.send({ message: "Signup endpoint", token: session });
});

app.post("/auth/login", (req, res) => {
	// Placeholder for login logic
	res.send({ message: "Login endpoint" });
});

app.get("/api/status", async (req, res) => {
	const dbstatus = await checkDbStatus();
	res.send(dbstatus);
});

app.listen(PORT, () => {
	console.log(`Server is running at http://localhost:${PORT}`);
});
