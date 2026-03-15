:root {
  --bg: #f7f5f0;
  --bg-2: #fcfbf8;
  --panel: rgba(255, 255, 255, 0.78);
  --text: #1e1e1c;
  --muted: #6f6b66;
  --line: rgba(30, 30, 28, 0.10);

  --accent: #8c6f4f;   /* warm bronze */
  --accent-2: #708c86; /* muted sage-teal */

  --hover: rgba(140, 111, 79, 0.06);
  --shadow: 0 20px 60px rgba(45, 38, 31, 0.08);
  --shadow-soft: 0 10px 30px rgba(45, 38, 31, 0.05);
  --radius-xl: 30px;
  --radius-lg: 22px;
  --radius-md: 16px;
  --max-width: 920px;
}

* {
  box-sizing: border-box;
}

html {
  scroll-behavior: smooth;
}

body {
  margin: 0;
  min-height: 100vh;
  background:
    radial-gradient(circle at top left, rgba(140, 111, 79, 0.08), transparent 28%),
    radial-gradient(circle at bottom right, rgba(112, 140, 134, 0.10), transparent 32%),
    linear-gradient(180deg, var(--bg-2) 0%, var(--bg) 100%);
  color: var(--text);
  font-family: -apple-system, BlinkMacSystemFont, "SF Pro Display", "Segoe UI",
    Roboto, Helvetica, Arial, sans-serif;
  line-height: 1.6;
  -webkit-font-smoothing: antialiased;
  text-rendering: optimizeLegibility;
  position: relative;
  overflow-x: hidden;
}

.page-glow {
  position: fixed;
  width: 380px;
  height: 380px;
  border-radius: 50%;
  filter: blur(60px);
  opacity: 0.45;
  pointer-events: none;
  z-index: 0;
}

.page-glow-1 {
  top: -100px;
  left: -80px;
  background: rgba(140, 111, 79, 0.10);
}

.page-glow-2 {
  bottom: -120px;
  right: -80px;
  background: rgba(112, 140, 134, 0.12);
}

/* Home page */
.home-page {
  display: flex;
  align-items: center;
  justify-content: center;
  padding: 48px 24px;
}

.home-container {
  width: 100%;
  max-width: 920px;
  position: relative;
  z-index: 1;
}

.hero {
  text-align: center;
  margin-bottom: 52px;
}

.eyebrow {
  margin: 0 0 10px;
  font-size: 0.82rem;
  letter-spacing: 0.20em;
  text-transform: uppercase;
  color: var(--accent-2);
  font-weight: 600;
}

.hero h1 {
  margin: 0;
  font-size: clamp(3.2rem, 7vw, 5.6rem);
  font-weight: 650;
  letter-spacing: -0.06em;
}

.intro {
  margin: 18px auto 0;
  max-width: 620px;
  font-size: 1.05rem;
  color: var(--muted);
}

.month-list-section {
  max-width: 760px;
  margin: 0 auto;
}

.section-label {
  margin-bottom: 14px;
  padding-left: 4px;
  font-size: 0.85rem;
  letter-spacing: 0.14em;
  text-transform: uppercase;
  color: var(--accent);
  font-weight: 600;
}

.month-list {
  background: var(--panel);
  border: 1px solid rgba(255, 255, 255, 0.6);
  border-radius: var(--radius-xl);
  overflow: hidden;
  box-shadow: var(--shadow);
  backdrop-filter: blur(16px);
  position: relative;
}

.month-list::before {
  content: "";
  position: absolute;
  inset: 0;
  border-radius: var(--radius-xl);
  padding: 1px;
  background: linear-gradient(
    135deg,
    rgba(140, 111, 79, 0.18),
    rgba(112, 140, 134, 0.14),
    rgba(255, 255, 255, 0.4)
  );
  -webkit-mask:
    linear-gradient(#fff 0 0) content-box,
    linear-gradient(#fff 0 0);
  -webkit-mask-composite: xor;
          mask-composite: exclude;
  pointer-events: none;
}

.month-link {
  display: flex;
  align-items: center;
  justify-content: space-between;
  gap: 20px;
  text-decoration: none;
  color: var(--text);
  padding: 26px 28px;
  transition: background 0.25s ease, transform 0.25s ease;
  border-bottom: 1px solid var(--line);
  position: relative;
}

.month-link:last-child {
  border-bottom: none;
}

.month-link:hover {
  background: var(--hover);
}

.month-name {
  display: block;
  font-size: 1.22rem;
  font-weight: 600;
  letter-spacing: -0.02em;
}

.month-meta {
  display: block;
  margin-top: 4px;
  font-size: 0.92rem;
  color: var(--muted);
}

.month-arrow {
  color: var(--accent-2);
  font-size: 1.2rem;
  flex-shrink: 0;
}

/* Month pages */
.month-page {
  padding: 42px 24px 80px;
}

.page-shell {
  max-width: var(--max-width);
  margin: 0 auto;
  position: relative;
  z-index: 1;
}

.top-nav {
  margin-bottom: 30px;
}

.back-link {
  display: inline-flex;
  align-items: center;
  gap: 8px;
  color: var(--muted);
  text-decoration: none;
  font-size: 0.96rem;
  padding: 8px 12px;
  border-radius: 999px;
  background: rgba(255, 255, 255, 0.5);
  border: 1px solid rgba(30, 30, 28, 0.06);
  box-shadow: var(--shadow-soft);
  transition: color 0.2s ease, background 0.2s ease;
}

.back-link:hover {
  color: var(--text);
  background: rgba(255, 255, 255, 0.72);
}

.month-header {
  margin-bottom: 34px;
}

.month-kicker {
  display: inline-block;
  margin-bottom: 10px;
  font-size: 0.8rem;
  letter-spacing: 0.16em;
  text-transform: uppercase;
  color: var(--accent);
  font-weight: 700;
}

.month-title {
  margin: 0;
  font-size: clamp(2.4rem, 5vw, 4.2rem);
  font-weight: 650;
  letter-spacing: -0.05em;
}

.month-subtitle {
  margin: 12px 0 0;
  max-width: 700px;
  color: var(--muted);
  font-size: 1rem;
}

.entries {
  display: grid;
  gap: 18px;
}

.entry-card {
  background: var(--panel);
  border: 1px solid rgba(255, 255, 255, 0.6);
  border-radius: var(--radius-lg);
  padding: 24px 24px 20px;
  box-shadow: var(--shadow);
  backdrop-filter: blur(14px);
  position: relative;
  overflow: hidden;
}

.entry-card::before {
  content: "";
  position: absolute;
  left: 0;
  top: 0;
  width: 5px;
  height: 100%;
  background: linear-gradient(180deg, var(--accent), var(--accent-2));
  opacity: 0.75;
}

.entry-date {
  margin: 0 0 16px;
  padding-left: 8px;
  font-size: 1.08rem;
  font-weight: 650;
  letter-spacing: -0.02em;
}

.entry-grid {
  display: grid;
  gap: 12px;
}

.entry-row {
  padding-left: 8px;
}

.label {
  display: block;
  margin-bottom: 4px;
  font-size: 0.76rem;
  text-transform: uppercase;
  letter-spacing: 0.14em;
  color: var(--muted);
  font-weight: 700;
}

.word-text {
  font-size: 1.14rem;
  font-weight: 650;
  letter-spacing: -0.01em;
}

.meaning-text,
.sentence-text {
  font-size: 1rem;
  color: var(--text);
}

.placeholder {
  color: #8d8881;
  font-style: italic;
}

@media (max-width: 640px) {
  .home-page,
  .month-page {
    padding-left: 18px;
    padding-right: 18px;
  }

  .month-link {
    padding: 22px 20px;
  }

  .entry-card {
    padding: 20px 18px 18px;
    border-radius: 18px;
  }

  .entry-date,
  .entry-row {
    padding-left: 4px;
  }

  .intro {
    font-size: 1rem;
  }
}