// Generate a random token
const token = ~~[Math.random() * 211212];
const product = [`https://api.example.com/picture/apiKey}`];

function login(client) {
  console.log("loading data api.......");
  return new Promise((success, failed) => {
    setTimeout(() => {
      if (client != "othinus") failed("salah");
      success({ client, token });
    }, 200);
  });
}

function getUser(token) {
  console.log("loading data api.......");
  return new Promise((success, failed) => {
    if (!token) failed("salah");
    setTimeout(() => {
      success({ apiKey: "exas21" });
    }, 300);
  });
}

const picture = (apiKey) => {
  console.log("loading data product.......");
  return new Promise((success, failed) => {
    if (!apiKey) failed("salah");
    setTimeout(() => {
      success(product);
    }, 300);
  });
};

login("othinus")
  .then((response) => {
    const { token, client } = response;
    console.log(`token no ${token} dan user name ${client}`);

    getUser(token).then((user) => {
      console.log(`API Key user : ${user.apiKey}`);

      picture(user.apiKey)
        .then((product) => {
          console.log(`Data Product : ${product}`);
        })
        .catch((error) => {
          console.log(`Error : ${error}`);
        });
    });
  })
  .catch((err) => console.log(err));
