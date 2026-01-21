const pgp = require("pg-promise")();
export const db = pgp({
	host: process.env.DB_HOST,
	port: Number(process.env.DB_PORT),
	database: process.env.DB_NAME,
	user: process.env.DB_USER,
	password: process.env.DB_PASSWORD,
});


// export async function checkDbStatus() {
// 	try {
// 		const result = await db.one(
// 			"SELECT NOW() as current_time, version() as pg_version",
// 		);
// 		return {
// 			status: "connected",
// 			timestamp: result.current_time,
// 			version: result.pg_version,
// 			database: process.env.DB_NAME,
// 		};
// 	} catch (error) {
// 		return {
// 			status: "disconnected",
// 			error: error instanceof Error ? error.message : "Unknown error",
// 		};
// 	}
// }

// export default db;
