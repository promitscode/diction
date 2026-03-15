:root {
  --bg: #f5f5f2;
  --panel: rgba(255, 255, 255, 0.72);
  --text: #1d1d1f;
  --muted: #6e6e73;
  --line: rgba(29, 29, 31, 0.10);
  --hover: rgba(29, 29, 31, 0.04);
  --shadow: 0 20px 60px rgba(0, 0, 0, 0.06);
  --radius: 24px;
  --max-width: 860px;
}

* {
  box-sizing: border-box;
}

html {
  scroll-behavior: smooth;
}

body {
  margin: 0;
  background: var(--bg);
  color: var(--text);
  font-family: -apple-system, BlinkMacSystemFont, "SF Pro Display", "Segoe UI",
    Roboto, Helvetica, Arial, sans-serif;
  line-height: 1.6;
  -webkit-font-smoothing: antialiased;
  text-rendering: optimizeLegibility;
}

/* Home page */
.home-page {
  min-height: 100vh;
  display: flex;
  align-items: center;
  justify-content: center;
  padding: 40px 24px;
}

.home-container {
  width: 100%;
  max-width: 900px;
}

.hero {
  text-align: center;
  margin-bottom: 56px;
}

.eyebrow {
  margin: 0 0 8px;
  font-size: 0.82rem;
  letter-spacing: 0.18em;
  text-transform: uppercase;
  color: var(--muted);
}

.hero h1 {
  margin: 0;
  font-size: clamp(3rem, 7vw, 5.2rem);
  font-weight: 600;
  letter-spacing: -0.05em;
}

.intro {
  margin: 18px auto 0;
  max-width: 600px;
  font-size: 1.05rem;
  color: var(--muted);
}

.month-list-section {
  max-width: 720px;
  margin: 0 auto;
}

.month-list {
  background: var(--panel);
  border: 1px solid var(--line);
  border-radius: 28px;
  overflow: hidden;
  box-shadow: var(--shadow);
  backdrop-filter: blur(14px);
}

.month-link {
  display: flex;
  align-items: center;
  justify-content: space-between;
  text-decoration: none;
  color: var(--text);
  padding: 24px 28px;
  font-size: 1.2rem;
  transition: background 0.25s ease, transform 0.25s ease;
  border-bottom: 1px solid var(--line);
}

.month-link:last-child {
  border-bottom: none;
}

.month-link:hover {
  background: var(--hover);
}

.month-name {
  font-weight: 500;
  letter-spacing: -0.02em;
}

.month-arrow {
  color: var(--muted);
  font-size: 1.1rem;
}

/* Month pages */
.month-page {
  padding: 48px 24px 80px;
}

.page-shell {
  max-width: var(--max-width);
  margin: 0 auto;
}

.top-nav {
  margin-bottom: 32px;
}

.back-link {
  color: var(--muted);
  text-decoration: none;
  font-size: 0.96rem;
  transition: color 0.2s ease;
}

.back-link:hover {
  color: var(--text);
}

.month-header {
  margin-bottom: 40px;
}

.month-title {
  margin: 0;
  font-size: clamp(2.2rem, 5vw, 4rem);
  font-weight: 600;
  letter-spacing: -0.045em;
}

.month-subtitle {
  margin: 12px 0 0;
  color: var(--muted);
  font-size: 1rem;
}

.entries {
  display: grid;
  gap: 18px;
}

.entry-card {
  background: var(--panel);
  border: 1px solid var(--line);
  border-radius: var(--radius);
  padding: 24px 24px 22px;
  box-shadow: var(--shadow);
}

.entry-date {
  margin: 0 0 16px;
  font-size: 1.05rem;
  font-weight: 600;
  letter-spacing: -0.02em;
}

.entry-row {
  margin-bottom: 12px;
}

.entry-row:last-child {
  margin-bottom: 0;
}

.label {
  display: block;
  margin-bottom: 4px;
  font-size: 0.8rem;
  text-transform: uppercase;
  letter-spacing: 0.12em;
  color: var(--muted);
}

.word-text {
  font-size: 1.15rem;
  font-weight: 600;
  letter-spacing: -0.01em;
}

.sentence-text {
  font-size: 1rem;
  color: var(--text);
}

.placeholder {
  color: #8c8c90;
  font-style: italic;
}

/* Responsive */
@media (max-width: 640px) {
  .month-link {
    padding: 20px 20px;
    font-size: 1.05rem;
  }

  .entry-card {
    padding: 20px 18px;
    border-radius: 20px;
  }

  .intro {
    font-size: 1rem;
  }
}