<h1> A4988Stepper - README </h1>

<b>Contents:</b>
<ol>
  <li><a href="#summary">Summary</a></li>
  <li><a href="#commands">Commands</a></li>
  <li><a href="#bugs">Known bugs</a></li>
  <li><a href="#contact">Contact</a></li>
</ol>

<br>
 
<details id="summary">
  <summary>
    <b>1. Summary</b>
  </summary>
  This library allows Arduino boards to control stepper motors with the A4988 driver board.<br>
  Developed by Jens Ostertag, © 2020.
  <br><br>
</details>

<details id="commands">
  <summary>
    <b>2. Commands</b>
  </summary>
  <details>
    <summary>
      <b>Setting up the stepper motor</b>
    </summary>
    At first, you have to set up the stepper motor by writing <code>Stepper stepper(direction, step, enable, stepsPerRevolution);</code>. The variables <code>direction</code>, <code>step</code> and <code>enable</code> are the corresponding pins of the driver board. Their data type is integer.<br> The variable <code>stepsPerRevolution</code> is the number of steps per revolution.
    Second, you have to set the mentioned pins as OUTPUTs. You can either do this manually or by calling the method <code>stepper.begin();</code>.
    <br><br>
  </details>
  <details>
    <summary>
      <b>Enabling and disabling the motor</b>
    </summary>
      To enable the motor, you have to call <code>stepper.enableMotor();</code>.<br>
      To disable the motor, you have to call <code>stepper.disableMotor();</code>.
      <br><br>
  </details>
  <details>
    <summary>
      <b>Driving the motor</b>
    </summary>
      To drive motor, you have to call <code>stepper.driveMotor(invert, speed, steps)</code>. <code>invert</code> is a boolean, that determines the rotation direction of the motor. If it is set to false, the motor will rotate clockwise, if it is defined as true, the motor spins counter-clockwise. <code>speed</code> and <code>steps</code> both are integers, with <code>speed</code> you can specify the rotation speed and with <code>steps</code> you can set the amount of steps the motor will turn.
      <br><br>
  </details>
</details>

<details id="bugs">
  <summary>
    <b>3. Known bugs</b>
  </summary>
  <ul>
    <li>There are no known bugs</li>
  </ul>
  <br>
</details>

<details id="contact">
  <summary>
    <b>4. Contact</b>
  </summary>
  This Arduino Library was developed by Jens Ostertag.<br>
  E-Mail: <a href="mailto:JensOstertag@gmx.de">JensOstertag@gmx.de</a>
</details>
