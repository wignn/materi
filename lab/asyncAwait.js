// Generate a random token
const token = ~~(Math.random()* 10);
const product = `https://api.example.com/picture/apiKey`;
console.log(token)
function login(client) {
  console.log("loading data token.......");
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      if (client !== "othinus") reject("salah");
      resolve({ client, token });
    }, 200);
  });
}


function getUser(token) {
  console.log("loading data api.......");
  return new Promise((resolve, reject) => {
    if (!token) reject("salah");
    setTimeout(() => {
      resolve({ apiKey: "exas21" });
    }, 300);
  });
}

const picture = (apiKey) => {
  console.log("loading data product.......");
  return new Promise((resolve, reject) => {
    if (!apiKey) reject("salah");
    setTimeout(() => {
      resolve({ product });
    }, 300);
  });
};

(async () => {
  try {
    const user = await login("othinus");
    const { client, token } = await user;
    const { apiKey } = await getUser(token);
    await picture(apiKey);
    console.log(`client ${client} token ${token} api key ${apiKey}`);
  } catch (error) {
    console.error("An error occurred:", error);
  }
})();


