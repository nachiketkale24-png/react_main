import Youtube from './youtube';

function App() {
  const username = "Nachiket";
  return (
    <>
    <h1>Hello, Vite + React! {2+2}</h1>
    <h1>Hello, Vite + React! {username === 'Nachiket' ? "yes" : "no"}</h1>
    <Youtube /> 
    </>
  )
}

export default App
