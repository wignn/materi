import { useEffect, useState } from 'react';
import data from './data';
import './App.css';
import backgroundVideo from './assets/skadi-the-corrupting-heart-arknights-desktop-wallpaperwaifu-com.mp4';

function App() {
  const [count, setCount] = useState(1);
  const [article, setArticle] = useState(data[0]); // Menggunakan data lokal sebagai artikel awal

  function nextPage() {
    setCount(prevCount => Math.min(prevCount + 1, data.length)); // Membatasi nilai count agar tidak melebihi panjang data
  }

  function previousPage() {
    setCount(prevCount => Math.max(prevCount - 1, 1)); // Membatasi nilai count agar tidak kurang dari 1
  }

  useEffect(() => {
    // Mengatur artikel berdasarkan nilai count saat ini
    setArticle(data[count - 1]);
  }, [count]);

  return (
    <>
      <main>
      <header className="App-header">
        <div className="video-container">
          <video autoPlay loop muted>
            <source src={backgroundVideo} type="video/mp4" />
            Your browser does not support the video tag.
          </video>
        </div>
        </header>
        <article>
        <div className='gambar'>
          {article.imgUrl && <img src={article.imgUrl} alt={article.nama} />} {/* Menampilkan gambar jika ada */}
          </div>
          <h3>{article.nama}</h3>
          <p>{article.deskrip}</p>
        </article>
        <p>{count}</p>
        <button onClick={previousPage}>Prev</button>
        <button onClick={nextPage}>Next</button>
      </main>
    </>
  );
}

export default App;
