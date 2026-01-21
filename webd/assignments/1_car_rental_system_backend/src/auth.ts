import dotenv from "dotenv";
import express from "express";
import jwt from "jsonwebtoken";

dotenv.config();

const router = express.Router();

router.get

const payload = {
	userId: 1,
	username: "testuser",
};

const secret = process.env.JWT_SECRET;

export function generateToken() {
	const token = jwt.sign(payload, secret, {
		expiresIn: "5m",
	});
	return token;
}
