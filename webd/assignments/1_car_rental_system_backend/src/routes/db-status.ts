import express from "express";

const router = express.Router();

router.get("/", (req, res) => {
  try {
    const users = 
  } catch (error) {
    res.status(500).send({
      status: "disconnected",
      error: error instanceof Error ? error.message : "Unknown error",
    });
  }
});

export default router;