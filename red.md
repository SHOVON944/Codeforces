<style>
  /* Reset and page setup */
  * {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
  }

  /* Define A4 page size for print/PDF */
  @page {
    size: A4;
    margin: 0;
  }

  /* Main container – exactly A4 size */
  .title-page {
    width: 210mm;
    min-height: 297mm;
    margin: 0 auto;
    background: white;
    font-family: 'Segoe UI', 'Roboto', 'Helvetica Neue', sans-serif;
    position: relative;
    padding: 20mm 18mm;
    box-shadow: 0 0 10px rgba(0,0,0,0.1); /* subtle shadow for screen */
    page-break-after: avoid;
    break-inside: avoid;
  }

  /* University header area */
  .uni-header {
    text-align: center;
    margin-bottom: 18mm;
    border-bottom: 3px solid #2c3e66;
    padding-bottom: 6mm;
  }

  .uni-name {
    font-size: 24pt;
    font-weight: bold;
    color: #1a2a4f;
    letter-spacing: 1px;
  }

  .uni-address {
    font-size: 11pt;
    color: #2c3e66;
    margin-top: 4px;
  }

  .dept {
    font-size: 13pt;
    font-weight: 500;
    color: #2c3e66;
    margin-top: 6px;
  }

  /* Report title block */
  .report-title {
    text-align: center;
    margin: 12mm 0 10mm 0;
  }

  .project-label {
    font-size: 16pt;
    font-weight: 600;
    color: #111;
    text-transform: uppercase;
    letter-spacing: 2px;
    background: #eef2fa;
    display: inline-block;
    padding: 4px 18px;
    border-radius: 30px;
  }

  .title-main {
    font-size: 14pt;
    font-weight: 800;
    color: #0b2b4b;
    margin-top: 12px;
    line-height: 1.3;
    border-left: 5px solid #2c3e66;
    border-right: 5px solid #2c3e66;
    padding: 10px 13px;
    background: #f9fbfe;
  }

.course-info {
  text-align: center;
  margin: 5mm 0 12mm 0;
  font-size: 13pt;
  background: #d9e2f0;      /* darker, more visible than #f0f3f9 */
  padding: mm;
  border-radius: 16px;
  border: 1px solid #b0c2da;
  box-shadow: 0 2px 6px rgba(0, 0, 0, 0.05);
  color: #0a2a44;           /* deep navy for strong text contrast */
  font-weight: 500;
}

  .course-info p {
    margin: 4px 0;
  }

  /* Two column for author details (modern look) */
  .authors {
    display: flex;
    justify-content: space-between;
    gap: 12mm;
    margin: 12mm 0 12mm 0;
  }

  .author-card {
    flex: 1;
    background: #ffffff;
    border: 1px solid #cddae9;
    border-radius: 20px;
    padding: 8mm 6mm;
    box-shadow: 0 4px 8px rgba(0,0,0,0.03);
    transition: all 0.2s;
    text-align: center;
  }

  .author-name {
    font-size: 15pt;
    font-weight: 700;
    color: #1e4663;
    margin-bottom: 6px;
  }

  .author-detail {
    font-size: 11pt;
    color: #2c3e66;
    line-height: 1.5;
  }

  .faculty {
    font-size: 10pt;
    color: #5d6f88;
    margin-top: 5px;
    font-style: italic;
  }

  /* Submitted to section */
  .submitted-to {
    text-align: center;
    margin: 10mm 0 12mm 0;
    padding: 2mm;
    border-top: 1px solid #bdc7db;
    border-bottom: 1px solid #bdc7db;
    background: #fafcff;
  }

  .to-label {
    font-weight: 600;
    font-size: 12pt;
    color: #2c3e66;
    text-transform: uppercase;
  }

  .supervisor-name {
    font-size: 14pt;
    font-weight: 700;
    margin: 6px 0 2px 0;
    color: #0b2b4b;
  }

  .supervisor-title {
    font-size: 11pt;
    color: #4a627a;
  }

  /* Submission date */
  .date-box {
    text-align: center;
    margin-top: 12mm;
  }

  .date {
    font-size: 13pt;
    font-weight: 500;
    background: #eef2fa;
    display: inline-block;
    padding: 5px 20px;
    border-radius: 40px;
    color: #1a2a4f;
    letter-spacing: 1px;
  }

  /* decorative line */
  .decor-line {
    width: 80px;
    height: 3px;
    background: #2c3e66;
    margin: 8mm auto 4mm auto;
    border-radius: 5px;
  }

  /* ensure page break */
  .page-break {
    page-break-after: avoid;
    break-after: avoid;
  }

  /* for print exactly one page */
  @media print {
    body {
      margin: 0;
      padding: 0;
      background: white;
    }
    .title-page {
      box-shadow: none;
      margin: 0;
      padding: 20mm 18mm;
      width: 100%;
      height: auto;
      min-height: 297mm;
    }
  }
</style>

<div class="title-page page-break">
  <!-- University header -->
  <div class="uni-header">
    <div class="uni-name">Patuakhali Science and Technology University</div>
    <div class="dept">Faculty of Computer Science and Engineering</div>
  </div>

  <!-- Project Report label -->
  <div class="report-title">
    <div class="project-label">Project Report</div>
    <div class="title-main">
      “Ultrasonic Air Defense Simulation:<br>
      Automated Detection, Tracking, and Engagement Using Arduino.”
    </div>
  </div>

  <!-- Course details block -->
  <div class="course-info">
    <p><strong>Course Code:</strong> EEE-212 &nbsp;|&nbsp; <strong>Course Title:</strong> Electrical Technology Sessional</p>
    <p><strong>Level:</strong> II &nbsp;|&nbsp; <strong>Semester:</strong> I</p>
  </div>

  <!-- Submitted by (two column design) -->
  <div class="authors">
    <div class="author-card">
      <div class="author-name">MD. Selim Hossain</div>
      <div class="author-detail">
        <strong>ID:</strong> 2302007<br>
        <strong>Reg:</strong> 11785<br>
        <strong>Session:</strong> 2023-2024
      </div>
      <div class="faculty">Faculty of Computer Science & Engineering</div>
    </div>
    <div class="author-card">
      <div class="author-name">MD. Leon Islam</div>
      <div class="author-detail">
        <strong>ID:</strong> 2302008<br>
        <strong>Reg:</strong> 11786<br>
        <strong>Session:</strong> 2023-2024
      </div>
      <div class="faculty">Faculty of Computer Science & Engineering</div>
    </div>
  </div>

  <!-- Submitted to section -->
  <div class="submitted-to">
    <div class="to-label">Submitted To</div>
    <div class="supervisor-name">Ashique E Elahi Sadi</div>
    <div class="supervisor-title">Lecturer, Department of Electrical and Electronics Engineering</div>
    <div class="supervisor-title">Faculty of Computer Science and Engineering</div>
  </div>


  <!-- Submission date -->
  <div class="date-box">
    <div class="date">Submission Date: 17 February 2026</div>
  </div>
</div>