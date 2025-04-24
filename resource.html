<!DOCTYPE html>
<html>
<head>
    <link rel="stylesheet" href="ostyle.css">
  <title>Resource Manager</title>
  <style>
    body {
      font-family: Arial;
      margin: 20px;
    }
    label, input {
      display: block;
      margin: 5px 0;
    }
    .program-block {
      margin-bottom: 15px;
      border: 1px solid #ccc;
      padding: 10px;
      border-radius: 10px;
    }
  </style>
</head>
<body>
    <div class="main">
        <div class="box">
            <h2>Resource Manager</h2>
        </div>
        
        
        <label>Total CPU Capacity (%)</label>
        <input type="number" id="totalCPU" />
        
        <label>Total Memory Capacity (MB)</label>
        <input type="number" id="totalMem" />
        
        <label>Number of Programs</label>
        <input type="number" id="numPrograms" />
        <button onclick="generateInputs()">Set Programs</button>
        
        <div id="programInputs"></div>
        <button onclick="processResources()">Optimize & Display Allocation</button>
        
        <pre id="output"></pre>        
    </div>

<script>
  function generateInputs() {
    const container = document.getElementById("programInputs");
    container.innerHTML = "";
    const num = parseInt(document.getElementById("numPrograms").value);
    for (let i = 1; i <= num; i++) {
      container.innerHTML += `
        <div class="program-block">
          <label>Program ${i} CPU Usage (%)</label>
          <input type="number" class="cpu" id="cpu${i}" />
          <label>Program ${i} Memory Usage (MB)</label>
          <input type="number" class="mem" id="mem${i}" />
        </div>
      `;
    }
  }

  function processResources() {
    const totalCPU = parseFloat(document.getElementById("totalCPU").value);
    const totalMem = parseFloat(document.getElementById("totalMem").value);
    const num = parseInt(document.getElementById("numPrograms").value);

    let programs = [];
    let usedCPU = 0, usedMem = 0;

    for (let i = 1; i <= num; i++) {
      const cpu = parseFloat(document.getElementById(`cpu${i}`).value);
      const mem = parseFloat(document.getElementById(`mem${i}`).value);
      programs.push({ id: i, cpuUsage: cpu, memoryUsage: mem });
      usedCPU += cpu;
      usedMem += mem;
    }

    if (usedCPU > totalCPU || usedMem > totalMem) {
      alert("Optimizing resources...");
      for (let p of programs) {
        p.cpuUsage = (p.cpuUsage / usedCPU) * totalCPU;
        p.memoryUsage = (p.memoryUsage / usedMem) * totalMem;
      }
    }

    let output = "--- Current Allocation ---\n";
    for (let p of programs) {
      output += `Program ${p.id}: CPU = ${p.cpuUsage.toFixed(2)}%, Memory = ${p.memoryUsage.toFixed(2)}MB\n`;
    }

    document.getElementById("output").textContent = output;
  }
</script>

</body>
</html>
<!-- gives memory to the file that requires more memory out of the available memory. The program will also optimize the CPU usage and memory allocation if the total CPU or memory exceeds the available resources. The optimized values are displayed in the output section. -->
