<!doctype html>
<html lang="en">
<head>
<meta charset="utf-8" />
<meta name="viewport" content="width=device-width, initial-scale=1" />
<title>DSA Assignments — README</title>
<style>
:root{
--bg:#0f1724; --card:#0b1220; --accent:#7c3aed; --muted:#9aa4b2; --glass: rgba(255,255,255,0.03);
--mono: 'SFMono-Regular', Consolas, 'Roboto Mono', Menlo, monospace;
}
html,body{height:100%;margin:0;font-family:Inter, system-ui, -apple-system, 'Segoe UI', Roboto, 'Helvetica Neue', Arial; background:linear-gradient(180deg,#071024 0%, #07182b 60%); color:#e6eef6}
.wrap{max-width:900px;margin:36px auto;padding:28px;background:linear-gradient(180deg, rgba(255,255,255,0.02), rgba(255,255,255,0.01));border-radius:12px;box-shadow:0 8px 30px rgba(2,6,23,0.6);border:1px solid rgba(255,255,255,0.03)}
header{display:flex;gap:18px;align-items:center}
.logo{width:68px;height:68px;border-radius:12px;background:linear-gradient(135deg,var(--accent),#2dd4bf);display:flex;align-items:center;justify-content:center;font-weight:700;color:white;font-family:var(--mono);font-size:22px}
h1{margin:0;font-size:28px}
p.lead{margin:6px 0 18px;color:var(--muted)}
.grid{display:grid;grid-template-columns:1fr 260px;gap:20px}
.card{background:var(--card);padding:16px;border-radius:10px;border:1px solid rgba(255,255,255,0.02)}
.muted{color:var(--muted);font-size:14px}
nav ul{list-style:none;padding:0;margin:0;display:flex;flex-wrap:wrap;gap:8px}
nav a{color:#bfe7ff;text-decoration:none;padding:6px 10px;border-radius:8px;background:rgba(255,255,255,0.02);font-size:13px}
pre{background:var(--glass);padding:12px;border-radius:8px;overflow:auto;border:1px dashed rgba(255,255,255,0.03)}
table{width:100%;border-collapse:collapse;margin-top:8px}
th,td{padding:8px 10px;border-bottom:1px solid rgba(255,255,255,0.03);text-align:left}
th{color:var(--muted);font-size:13px}
.btn{display:inline-block;padding:8px 12px;border-radius:10px;background:linear-gradient(90deg,var(--accent),#06b6d4);color:#041029;text-decoration:none;font-weight:600}
footer{margin-top:18px;color:var(--muted);font-size:13px}
@media (max-width:820px){.grid{grid-template-columns:1fr}}
</style>
</head>
<body>
<div class="wrap">
<header>
<div class="logo">DSA</div>
<div>
<h1>DSA Assignments</h1>
<p class="lead">Collection of my data-structures & algorithms assignments — clean, organized and ready to run.</p>
<div class="muted">Repo structure, how to run solutions, grading notes and contribution guide.</div>
</div>
</header>


<main style="margin-top:18px">
<div class="grid">
<section class="card">
<h2>Table of contents</h2>
<nav>
<ul>
<li><a href="#structure">Repo structure</a></li>
<li><a href="#run">How to run</a></li>
<li><a href="#assignments">Assignments</a></li>
<li><a href="#contribute">Contribute</a></li>
<li><a href="#notes">Notes</a></li>
</ul>
</nav>


<hr style="margin:14px 0;border:none;border-top:1px solid rgba(255,255,255,0.03)">


<h3 id="structure">Repo structure</h3>
<pre>
DSA-Assignments/
├─ README.md # this file (HTML version)
├─ sorting/ # e.g. bubble, merge, quick
│ ├─ bubble.cpp
│ └─ merge.cpp
├─ graphs/ # graph problems & implementations
├─ trees/
└─ utils/ # helper scripts, test harness
</pre>


<h3 id="run">How to run (examples)</h3>
<p class="muted">Commands assume you have g++ installed on your machine.</p>
<pre>
