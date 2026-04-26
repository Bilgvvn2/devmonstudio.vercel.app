<!DOCTYPE html>
<html lang="mn">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <meta name="description" content="DevMon Studio - Монголын бизнесүүдэд цахим орчинд өсч хөгжих боломж олгодог бүрэн үйлчилгээт digital agency.">
  <title>DevMon Studio | Digital Agency Mongolia</title>
  <link rel="stylesheet" href="style.css">
</head>
<body>

<!-- ANIMATED PARTICLES BACKGROUND -->
<canvas id="particles-canvas"></canvas>

<!-- NAVBAR -->
<nav class="navbar" id="navbar">
  <div class="container">
    <a href="#" class="nav-logo">
      <div class="nav-logo-icon">DM</div>
      <div class="nav-logo-text">
        <h3>DevMon Studio</h3>
        <span>Web · Mobile · SEO</span>
      </div>
    </a>
    <ul class="nav-links" id="navLinks">
      <li><a href="#services">Үйлчилгээ</a></li>
      <li><a href="#pricing">Үнийн тариф</a></li>
      <li><a href="#portfolio">Ажлууд</a></li>
      <li><a href="#order">Холбоо барих</a></li>
    </ul>
    <a href="#pricing" class="nav-cta desktop">Үйлчилгээ & Тариф</a>
    <button class="mobile-toggle" id="mobileToggle" aria-label="Menu">☰</button>
  </div>
</nav>

<!-- MOBILE NAV DRAWER -->
<div class="mobile-overlay" id="mobileOverlay"></div>
<div class="mobile-nav" id="mobileNav">
  <button class="mobile-nav-close" id="mobileNavClose">✕</button>
  <a href="#services" class="mobile-link">🌐 Үйлчилгээ</a>
  <a href="#pricing" class="mobile-link">💰 Үнийн тариф</a>
  <a href="#portfolio" class="mobile-link">🎨 Ажлууд</a>
  <a href="#order" class="mobile-link">📞 Холбоо барих</a>
  <a href="#order" class="mobile-cta">🚀 Захиалга өгөх</a>
</div>

<!-- HERO -->
<section class="hero" id="hero">
  <div class="container">
    <div class="hero-grid">
      <div class="hero-content fade-in">
        <div class="hero-badge"><span class="dot"></span> Digital Agency Mongolia</div>
        <h1>Бүрэн цахим шийдэл — <span class="highlight">нэг дороос</span></h1>
        <p class="hero-desc">Бид Монголын бизнесүүдэд цахим орчинд өсч хөгжих боломж олгодог бүрэн үйлчилгээт digital agency юм. Вэбсайт, мобайл апп, онлайн дэлгүүр бүгдийг нэг дороос.</p>
        <div class="hero-buttons">
          <a href="#order" class="btn-primary">🚀 Захиалга өгөх</a>
          <a href="#pricing" class="btn-secondary">💰 Үнэ харах</a>
        </div>
        <div class="hero-stats">
          <div class="stat-item"><h4>50+</h4><p>Амжилттай төсөл</p></div>
          <div class="stat-item"><h4>30+</h4><p>Сэтгэл ханамж</p></div>
          <div class="stat-item"><h4>3+</h4><p>Жилийн туршлага</p></div>
        </div>
      </div>
      <div class="hero-visual fade-in">
        <div class="hero-visual-circle">
          <span class="logo-dm">DM</span>
        </div>
      </div>
    </div>
  </div>
</section>

<!-- SERVICES -->
<section class="services" id="services">
  <div class="container">
    <div class="fade-in">
      <p class="section-label">Бид юу хийдэг вэ</p>
      <h2 class="section-title">Бүрэн цахим шийдэл — <span class="highlight">нэг дороос</span></h2>
      <p class="section-subtitle">Таны бизнесийг цахим ертөнцөд хүчирхэгжүүлэх бүх төрлийн үйлчилгээг санал болгож байна.</p>
    </div>
    <div class="services-grid">
      <div class="service-card fade-in">
        <div class="service-icon">🌐</div>
        <h3>Вэбсайт хөгжүүлэлт</h3>
        <p>Landing page-с корпорат сайт хүртэл. Хурдан, responsive дизайн.</p>
      </div>
      <div class="service-card fade-in">
        <div class="service-icon">📱</div>
        <h3>Мобайл апп</h3>
        <p>iOS & Android. Таны брэнддэй тохирсон хэрэглэгч тус бүрт зориулсан апп.</p>
      </div>
      <div class="service-card fade-in">
        <div class="service-icon">🛒</div>
        <h3>E-commerce</h3>
        <p>Захиалга, QPay төлбөр, агуулахын систем бүхий онлайн дэлгүүр.</p>
      </div>
      <div class="service-card fade-in">
        <div class="service-icon">📈</div>
        <h3>SEO & Marketing</h3>
        <p>Google-д жагсаал байр тариах. Зөв үзэгчиддээ хүрэх стратеги.</p>
      </div>
    </div>
  </div>
</section>

<!-- PRICING -->
<section class="pricing" id="pricing">
  <div class="container">
    <div class="fade-in">
      <p class="section-label">Үнийн тариф</p>
      <h2 class="section-title">Танд тохирсон <span class="highlight">багц сонго</span></h2>
      <div class="pricing-notice">
        <strong>Чухал мэдээлэл:</strong>
        <span> Доорх үнэ нь суурь жишиг болно. Эцсийн үнэ нь төслийн цар хүрээ, функц, дизайны нарийн төвөгтэй байдлаас хамааран өөрчлөгдөнө. — <strong>үнэгүй зөвлөгөө авахаар message илгээгээрэй!</strong></span>
      </div>
    </div>
    <div class="pricing-grid">
      <div class="pricing-card fade-in">
        <h3 class="plan-name">Starter</h3>
        <p class="plan-desc">Хувиараа, жижиг бизнес</p>
        <p class="plan-label">Эхлэх үнэ</p>
        <p class="plan-price">₮500K</p>
        <p class="plan-note">— ₮1.5 сая хүртэл төслийн хэмжээнээс хамаарна</p>
        <div class="divider"></div>
        <ul class="feature-list">
          <li><span class="check">✓</span> Landing page (1–5 хуудас)</li>
          <li><span class="check">✓</span> Mobile responsive дизайн</li>
          <li><span class="check">✓</span> Холбоо барих хэлбэр</li>
          <li><span class="check">✓</span> 1 сарын үнэгүй дэмжлэг</li>
        </ul>
        <a href="#order" class="btn-plan btn-outline" data-plan="Starter">Захиалах</a>
      </div>
      <div class="pricing-card featured fade-in">
        <div class="popular-badge">⭐ Хамгийн их сонгогддог</div>
        <h3 class="plan-name">Business</h3>
        <p class="plan-desc">Дунд болон томоохон бизнес</p>
        <p class="plan-label">Эхлэх үнэ</p>
        <p class="plan-price">₮1.5сая</p>
        <p class="plan-note">— ₮5 сая хүртэл төслийн хэмжээнээс хамаарна</p>
        <div class="divider"></div>
        <ul class="feature-list">
          <li><span class="check">✓</span> Корпорат вэбсайт (хязгааргүй)</li>
          <li><span class="check">✓</span> E-commerce + QPay холболт</li>
          <li><span class="check">✓</span> SEO суурь тохиргоо</li>
          <li><span class="check">✓</span> Admin удирдлагын панел</li>
          <li><span class="check">✓</span> 3 сарын үнэгүй дэмжлэг</li>
        </ul>
        <a href="#order" class="btn-plan btn-gold" data-plan="Business">Захиалах</a>
      </div>
      <div class="pricing-card fade-in">
        <h3 class="plan-name">Enterprise</h3>
        <p class="plan-desc">Мобайл апп + бүрэн шийдэл</p>
        <p class="plan-label">Эхлэх үнэ</p>
        <p class="plan-price">₮5сая+</p>
        <p class="plan-note">Үнэ тохиролцоны төслийн нарийвчилсан үнэлгээгээр</p>
        <div class="divider"></div>
        <ul class="feature-list">
          <li><span class="check">✓</span> iOS + Android мобайл апп</li>
          <li><span class="check">✓</span> Вэбсайт + апп интеграц</li>
          <li><span class="check">✓</span> Тусгай дизайн систем</li>
          <li><span class="check">✓</span> Digital маркетинг стратеги</li>
          <li><span class="check">✓</span> 1 жилийн үнэгүй дэмжлэг</li>
        </ul>
        <a href="#order" class="btn-plan btn-outline" data-plan="Enterprise">Захиалах</a>
      </div>
    </div>
    <div class="custom-project fade-in" style="margin-top:48px;">
      <div class="custom-grid">
        <div>
          <div class="icon-wrap">🛠️</div>
          <h3>Тусгай захиалгат төсөл</h3>
          <p>Дээрх багцад багтахгүй онцгой шаардлага байна уу? Бид тохирсон шийдлийг хамтдаа гаргана.</p>
        </div>
        <div class="custom-right">
          <h3>Үнэгүй зөвлөгөө</h3>
          <p style="color:var(--text-secondary);font-size:14px;margin-bottom:12px;">Message илгээж → үнэлгээ авах</p>
          <a href="#order">Холбоо барих →</a>
        </div>
      </div>
    </div>
  </div>
</section>

<!-- PORTFOLIO -->
<section class="portfolio" id="portfolio">
  <div class="container">
    <div class="fade-in">
      <p class="section-label">Манай ажлууд</p>
      <h2 class="section-title">Бидний хийсэн <span class="highlight">төслүүд</span></h2>
      <p class="section-subtitle">Бид олон салбарын бизнесүүдэд цахим шийдлүүд хүргэсэн.</p>
    </div>
    <div class="portfolio-grid">
      <div class="portfolio-card fade-in" style="background: linear-gradient(135deg, #1a1a2e, #16213e);">
        <span class="p-icon">🏪</span>
        <span class="p-title">E-commerce дэлгүүр</span>
        <span class="p-sub">Онлайн худалдааны платформ</span>
      </div>
      <div class="portfolio-card fade-in" style="background: linear-gradient(135deg, #1a2e1a, #0e3e16);">
        <span class="p-icon">📱</span>
        <span class="p-title">Мобайл апп</span>
        <span class="p-sub">iOS & Android хэрэглүүр</span>
      </div>
      <div class="portfolio-card fade-in" style="background: linear-gradient(135deg, #2e1a1a, #3e1616);">
        <span class="p-icon">🏢</span>
        <span class="p-title">Корпорат вэбсайт</span>
        <span class="p-sub">Бизнес имиж нэмэгдүүлсэн</span>
      </div>
    </div>
  </div>
</section>

<!-- ORDER FORM -->
<section class="order-section" id="order">
  <div class="container">
    <div class="order-grid">
      <div class="order-info fade-in">
        <p class="section-label">Холбоо барих</p>
        <h3>Яг таны төсөлд хэд болох вэ? <span style="color:var(--gold);">Асуугаарай!</span></h3>
        <p>Бидэнтэй холбогдож, төслийнхөө талаар ярилцаарай. Үнэгүй зөвлөгөө, үнэлгээ авах боломжтой.</p>
        <div class="contact-item">
          <div class="ci-icon">📧</div>
          <div class="ci-text"><span>Имэйл</span><p>info@devmonstudio.mn</p></div>
        </div>
        <div class="contact-item">
          <div class="ci-icon">📞</div>
          <div class="ci-text"><span>Утас</span><p>+976 9911-2233</p></div>
        </div>
        <div class="contact-item">
          <div class="ci-icon">💬</div>
          <div class="ci-text"><span>Messenger / Instagram</span><p>@devmonstudio</p></div>
        </div>
        <div class="contact-item">
          <div class="ci-icon">📍</div>
          <div class="ci-text"><span>Хаяг</span><p>Улаанбаатар, Монгол</p></div>
        </div>
      </div>
      <div class="order-form fade-in">
        <h3>📝 Захиалга илгээх</h3>
        <form id="orderForm">
          <div class="form-row">
            <div class="form-group">
              <label for="name">Нэр *</label>
              <input type="text" id="name" placeholder="Таны нэр" required>
            </div>
            <div class="form-group">
              <label for="phone">Утас *</label>
              <input type="tel" id="phone" placeholder="+976 9999-9999" required>
            </div>
          </div>
          <div class="form-group">
            <label for="email">Имэйл</label>
            <input type="email" id="email" placeholder="example@mail.com">
          </div>
          <div class="form-group">
            <label for="plan">Багц сонгох *</label>
            <select id="plan" required>
              <option value="">— Багц сонгоно уу —</option>
              <option value="Starter (₮500K)">Starter (₮500K)</option>
              <option value="Business (₮1.5сая)">Business (₮1.5сая)</option>
              <option value="Enterprise (₮5сая+)">Enterprise (₮5сая+)</option>
              <option value="Тусгай захиалга">Тусгай захиалга</option>
            </select>
          </div>
          <div class="form-group">
            <label for="service">Үйлчилгээ *</label>
            <select id="service" required>
              <option value="">— Үйлчилгээ сонгоно уу —</option>
              <option value="Вэбсайт хөгжүүлэлт">Вэбсайт хөгжүүлэлт</option>
              <option value="Мобайл апп">Мобайл апп (iOS & Android)</option>
              <option value="E-commerce">E-commerce онлайн дэлгүүр</option>
              <option value="SEO & Marketing">SEO & Digital Marketing</option>
              <option value="Бүгд">Бүх үйлчилгээ</option>
            </select>
          </div>
          <div class="form-group">
            <label for="details">Төслийн дэлгэрэнгүй</label>
            <textarea id="details" placeholder="Таны төслийн талаар дэлгэрэнгүй бичнэ үү..."></textarea>
          </div>
          <button type="submit" class="btn-submit" id="submitBtn">🚀 Захиалга илгээх</button>
        </form>
      </div>
    </div>
  </div>
</section>

<!-- FOOTER -->
<footer class="footer">
  <div class="container">
    <div class="footer-left">
      <span style="color:var(--gold);">●</span>
      <span>Яг таны төсөлд хэд болох вэ? Асуугаарай!</span>
    </div>
    <div class="footer-right">
      <span style="font-weight:600;color:var(--text-secondary);">devmonstudio.mn</span>
      <span>#DevMonStudio</span>
      <span>#DigitalMongolia</span>
    </div>
  </div>
</footer>

<!-- SUCCESS MODAL -->
<div class="modal-overlay" id="successModal">
  <div class="modal">
    <button class="modal-close" id="modalClose">✕</button>
    <span class="success-icon">🎉</span>
    <h3>Амжилттай илгээгдлээ!</h3>
    <p>Таны захиалга бидэнд хүрлээ. Бид тантай 24 цагийн дотор холбогдох болно. Баярлалаа!</p>
    <button class="btn-primary" onclick="document.getElementById('successModal').classList.remove('active')" style="width:100%;justify-content:center;">Ойлголоо 👍</button>
  </div>
</div>

<script src="app.js"></script>
</body>
</html>
