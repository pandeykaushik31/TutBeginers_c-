import './App.css';

let name = "Shiv";
function App() {
  return (
    <>
    <nav>
      <li>Home</li>
      <li>About</li>
      <li>Contact</li>
    </nav>
    <div className="container">
      <h1>Hello {name}</h1>
      <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Commodi ut, ab vel quibusdam, iste, cupiditate suscipit perspiciatis debitis repudiandae non placeat nam rerum qui. Modi eum est ipsa libero, voluptatum possimus iure expedita autem harum!</p>
    </div>
    </>
    
  );
}

export default App;
