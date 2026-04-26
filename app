// =============================================
// DEVMON STUDIO — Main Application Script
// =============================================

// ===== TELEGRAM BOT NOTIFICATION =====
// Та Telegram Bot үүсгэж, доорх утгуудыг солино уу:
// 1. @BotFather руу очоод /newbot гэж бичээд bot үүсгэнэ
// 2. Bot Token авна (жнь: 123456:ABC-DEF...)
// 3. Bot-тойгоо чат эхлээд @userinfobot руу очоод Chat ID-аа мэдэж авна
const TELEGRAM_BOT_TOKEN = '8543981382:AAFDL8jTHxAT_3rpg3t31mlmioo9_rA3vBA';
const TELEGRAM_CHAT_ID   = '6206533681';

async function sendTelegramNotification(formData) {
  if (TELEGRAM_BOT_TOKEN === 'YOUR_BOT_TOKEN_HERE') {
    console.log('⚠️ Telegram Bot тохируулаагүй байна. app.js дотор TOKEN болон CHAT_ID оруулна уу.');
    return;
  }

  const message =
`🔔 *ШИНЭ ЗАХИАЛГА ИРЛЭЭ!*
━━━━━━━━━━━━━━━━
👤 *Нэр:* ${formData.name}
📞 *Утас:* ${formData.phone}
📧 *Имэйл:* ${formData.email || '—'}
📦 *Багц:* ${formData.plan}
🛠 *Үйлчилгээ:* ${formData.service}
📝 *Дэлгэрэнгүй:* ${formData.details || '—'}
━━━━━━━━━━━━━━━━
🕐 ${new Date().toLocaleString('mn-MN')}`;

  try {
    await fetch(`https://api.telegram.org/bot${TELEGRAM_BOT_TOKEN}/sendMessage`, {
      method: 'POST',
      headers: { 'Content-Type': 'application/json' },
      body: JSON.stringify({
        chat_id: TELEGRAM_CHAT_ID,
        text: message,
        parse_mode: 'Markdown'
      })
    });
    console.log('✅ Telegram мэдэгдэл илгээгдлээ');
  } catch (err) {
    console.error('❌ Telegram мэдэгдэл алдаа:', err);
  }
}


// ===== PARTICLES BACKGROUND =====
(function initParticles() {
  const canvas = document.getElementById('particles-canvas');
  if (!canvas) return;
  const ctx = canvas.getContext('2d');
  let particles = [];
  let w, h;
  const PARTICLE_COUNT = 60;
  const CONNECT_DIST = 120;

  function resize() {
    w = canvas.width = window.innerWidth;
    h = canvas.height = window.innerHeight;
  }
  resize();
  window.addEventListener('resize', resize);

  class Particle {
    constructor() {
      this.x = Math.random() * w;
      this.y = Math.random() * h;
      this.vx = (Math.random() - 0.5) * 0.4;
      this.vy = (Math.random() - 0.5) * 0.4;
      this.r = Math.random() * 2 + 0.5;
      this.alpha = Math.random() * 0.4 + 0.1;
    }
    update() {
      this.x += this.vx;
      this.y += this.vy;
      if (this.x < 0) this.x = w;
      if (this.x > w) this.x = 0;
      if (this.y < 0) this.y = h;
      if (this.y > h) this.y = 0;
    }
    draw() {
      ctx.beginPath();
      ctx.arc(this.x, this.y, this.r, 0, Math.PI * 2);
      ctx.fillStyle = `rgba(245, 183, 49, ${this.alpha})`;
      ctx.fill();
    }
  }

  for (let i = 0; i < PARTICLE_COUNT; i++) {
    particles.push(new Particle());
  }

  function animate() {
    ctx.clearRect(0, 0, w, h);
    for (let i = 0; i < particles.length; i++) {
      particles[i].update();
      particles[i].draw();
      for (let j = i + 1; j < particles.length; j++) {
        const dx = particles[i].x - particles[j].x;
        const dy = particles[i].y - particles[j].y;
        const dist = Math.sqrt(dx * dx + dy * dy);
        if (dist < CONNECT_DIST) {
          ctx.beginPath();
          ctx.moveTo(particles[i].x, particles[i].y);
          ctx.lineTo(particles[j].x, particles[j].y);
          ctx.strokeStyle = `rgba(245, 183, 49, ${0.06 * (1 - dist / CONNECT_DIST)})`;
          ctx.lineWidth = 0.5;
          ctx.stroke();
        }
      }
    }
    requestAnimationFrame(animate);
  }
  animate();
})();


// ===== SCROLL FADE-IN ANIMATION =====
const observer = new IntersectionObserver((entries) => {
  entries.forEach(entry => {
    if (entry.isIntersecting) entry.target.classList.add('visible');
  });
}, { threshold: 0.1 });
document.querySelectorAll('.fade-in').forEach(el => observer.observe(el));


// ===== NAVBAR SCROLL EFFECT =====
window.addEventListener('scroll', () => {
  const nav = document.getElementById('navbar');
  if (window.scrollY > 50) {
    nav.style.borderBottomColor = 'rgba(245,183,49,0.15)';
  } else {
    nav.style.borderBottomColor = 'var(--border)';
  }
});


// ===== MOBILE NAV DRAWER =====
const mobileToggle = document.getElementById('mobileToggle');
const mobileNav = document.getElementById('mobileNav');
const mobileOverlay = document.getElementById('mobileOverlay');
const mobileNavClose = document.getElementById('mobileNavClose');

function openMobileNav() {
  mobileNav.classList.add('open');
  mobileOverlay.classList.add('open');
  document.body.style.overflow = 'hidden';
}
function closeMobileNav() {
  mobileNav.classList.remove('open');
  mobileOverlay.classList.remove('open');
  document.body.style.overflow = '';
}

mobileToggle.addEventListener('click', openMobileNav);
mobileNavClose.addEventListener('click', closeMobileNav);
mobileOverlay.addEventListener('click', closeMobileNav);
document.querySelectorAll('.mobile-nav a').forEach(a => {
  a.addEventListener('click', closeMobileNav);
});


// ===== PLAN SELECTION FROM PRICING CARDS =====
document.querySelectorAll('[data-plan]').forEach(btn => {
  btn.addEventListener('click', (e) => {
    const plan = e.target.dataset.plan;
    const select = document.getElementById('plan');
    for (let opt of select.options) {
      if (opt.value.includes(plan)) { select.value = opt.value; break; }
    }
  });
});


// ===== FORM SUBMISSION + TELEGRAM =====
document.getElementById('orderForm').addEventListener('submit', async (e) => {
  e.preventDefault();
  const btn = document.getElementById('submitBtn');
  btn.textContent = '⏳ Илгээж байна...';
  btn.disabled = true;

  const formData = {
    name: document.getElementById('name').value,
    phone: document.getElementById('phone').value,
    email: document.getElementById('email').value,
    plan: document.getElementById('plan').value,
    service: document.getElementById('service').value,
    details: document.getElementById('details').value
  };

  // Send Telegram notification
  await sendTelegramNotification(formData);

  // Also save to localStorage as backup
  const orders = JSON.parse(localStorage.getItem('devmon_orders') || '[]');
  orders.push({ ...formData, date: new Date().toISOString() });
  localStorage.setItem('devmon_orders', JSON.stringify(orders));

  // Show success modal
  document.getElementById('successModal').classList.add('active');
  btn.textContent = '🚀 Захиалга илгээх';
  btn.disabled = false;
  e.target.reset();
});


// ===== MODAL CLOSE =====
document.getElementById('modalClose').addEventListener('click', () => {
  document.getElementById('successModal').classList.remove('active');
});
document.getElementById('successModal').addEventListener('click', (e) => {
  if (e.target === e.currentTarget) e.currentTarget.classList.remove('active');
});


// ===== SMOOTH SCROLL =====
document.querySelectorAll('a[href^="#"]').forEach(a => {
  a.addEventListener('click', (e) => {
    e.preventDefault();
    const target = document.querySelector(a.getAttribute('href'));
    if (target) target.scrollIntoView({ behavior: 'smooth', block: 'start' });
  });
});
