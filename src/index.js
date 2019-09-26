import React from 'react';
import ReactDOM from 'react-dom';
import logo from './Questions.zip';
import App from './App';
import axios from 'axios';
import './style.css';
import * as serviceWorker from './serviceWorker';
//import axios from 'axios';

class File extends React.Component{
	constructor () {
		super();
		this.state = {
      roll: null,
			answer1: null,
			type1: "C",
			answer2: null,
			type2: "C",
			answer3: null,
			type3: "C",
			answer4: null,
			type4: "C",
			answer5: null,
			type5: "C",
      answer6: null,
      type6: "C"
		};
	}
	handleChange=(event) => {
      event.preventDefault();
    	const { name, value } = event.target;
	this.setState({[name]: value});
    }
    handleFile=(event)=>{
      event.preventDefault();
      console.log(event.target.files);
      console.log("haha")
      const { name, value } = event.target;
      console.log(name);
       this.setState({[name]:event.target.files});
       console.log(this.state);
    }
    handleSubmit=(e) => {
      e.preventDefault();
      var formData = new FormData();
      if(this.state.answer1!=null)
      formData.append("answer1",this.state.answer1[0]);
      if(this.state.answer2!=null)
      formData.append("answer2",this.state.answer2[0]);
      if(this.state.answer3!=null)
      formData.append("answer3",this.state.answer3[0]);
      if(this.state.answer4!=null)
      formData.append("answer4",this.state.answer4[0]);
      if(this.state.answer5!=null)
      formData.append("answer5",this.state.answer5[0]);
      if(this.state.answer6!=null)
      formData.append("answer6",this.state.answer6[0]);
      formData.append("roll",this.state.roll);
      formData.append("type1",this.state.type1);
      formData.append("type2",this.state.type2);
      formData.append("type3",this.state.type3);
      formData.append("type4",this.state.type4);
      formData.append("type5",this.state.type5);
      formData.append("type6",this.state.type6);
      console.log(formData);
      axios.post('http://10.42.10.103:5000/Q1',formData).then(res => {
      console.log(res);
      console.log(res.data);
      alert("Q1: "+res.data.Q1+"\n"+"Q2: "+res.data.Q2+"\n"+"Q3: "+res.data.Q3+"\n"+"Q4: "+res.data.Q4+"\n"+"Q5: "+res.data.Q5+"\n"+"Q6: "+res.data.Q6+"\n"+"Total: "+res.data.Total);
      return res.data;
    }).catch(error => {
      console.log(error);
    });
    	
    }
    render(){
    	return(
        <div className='wrapper'>
    		<div className='form-wrapper' align="center">
    			<h1> Questions </h1>
    			<a href={logo} download > Questions.zip </a>
          <h1> Submissions </h1>
    			<form onSubmit={this.handleSubmit} >
    				
            <text> Roll No: </text>
              <input class='roll' name='roll' type='text' onChange={this.handleChange} />
              <br/>
              <br/>
    				<text> Q1 </text>
    					<input class='answer1' name='answer1' type ='file' onChange={this.handleFile} />
    				<br/>
    				<text> Choose Language </text>
    				<select class="type1" name="type1" onChange={this.handleChange}>
              			<option>C</option>
              			<option>C++</option>
              			<option>Python</option>
            		</select>
            		<br/>
            		<br/>
            		<text> Q2 </text>
    					<input class='answer2' name='answer2' type ='file' onChange={this.handleFile} />
    				<br/>
    				<text> Choose Language </text>
    				<select class="type2" name="type2" onChange={this.handleChange}>
              			<option>C</option>
              			<option>C++</option>
              			<option>Python</option>
            		</select>
            		<br/>
            		<br/>
            		<text> Q3 </text>
    					<input class='answer3' name='answer3' type ='file' onChange={this.handleFile} />
    				<br/>
    				<text> Choose Language </text>
    				<select class="type3" name="type3" onChange={this.handleChange}>
              			<option>C</option>
              			<option>C++</option>
              			<option>Python</option>
            		</select>
            		<br/>
            		<br/>
            		<text> Q4 </text>
    					<input class='answer4' name='answer4' type ='file' onChange={this.handleFile} />
    				<br/>
    				<text> Choose Language </text>
    				<select class="type4" name="type4" onChange={this.handleChange}>
              			<option>C</option>
              			<option>C++</option>
              			<option>Python</option>
            		</select>
            		<br/>
            		<br/>
            		<text> Q5 </text>
    					<input class='answer5' name='answer5' type ='file' onChange={this.handleFile} />
    				<br/>
    				<text> Choose Language </text>
    				<select class="type5" name="type5" onChange={this.handleChange}>
              			<option>C</option>
              			<option>C++</option>
              			<option>Python</option>
            		</select>
            		<br/>
                <br/>
                <text> Q6 </text>
                <input class='answer6' name='answer6' type ='file' onChange={this.handleFile} />
            <br/>
            <text> Choose Language </text>
            <select class="type6" name="type6" onChange={this.handleChange}>
                    <option>C</option>
                    <option>C++</option>
                    <option>Python</option>
                </select>
                <br/>

            		<button class="Submit">Submit</button>
    			</form>
    		</div>
        </div>
    		);

    }
}




ReactDOM.render(<File />, document.getElementById('root'));

// If you want your app to work offline and load faster, you can change
// unregister() to register() below. Note this comes with some pitfalls.
// Learn more about service workers: https://bit.ly/CRA-PWA
serviceWorker.unregister();
