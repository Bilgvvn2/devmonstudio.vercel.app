$listener = New-Object System.Net.HttpListener
$listener.Prefixes.Add('http://devmonstudio.com/')
$listener.Start()
Write-Host 'Server started at http://devmonstudio.com'

$root = 'C:\Users\Dell\.gemini\antigravity\scratch\devmon-studio'

while ($listener.IsListening) {
    $context = $listener.GetContext()
    $request = $context.Request
    $response = $context.Response
    $path = $request.Url.LocalPath

    if ($path -eq '/') { $path = '/index.html' }

    $filePath = Join-Path $root $path.TrimStart('/')

    if (Test-Path $filePath) {
        $content = [System.IO.File]::ReadAllBytes($filePath)
        $ext = [System.IO.Path]::GetExtension($filePath)

        switch ($ext) {
            '.html' { $response.ContentType = 'text/html; charset=utf-8' }
            '.css'  { $response.ContentType = 'text/css; charset=utf-8' }
            '.js'   { $response.ContentType = 'application/javascript; charset=utf-8' }
            default { $response.ContentType = 'application/octet-stream' }
        }

        $response.ContentLength64 = $content.Length
        $response.OutputStream.Write($content, 0, $content.Length)
    } else {
        $response.StatusCode = 404
        $msg = [System.Text.Encoding]::UTF8.GetBytes('Not Found')
        $response.OutputStream.Write($msg, 0, $msg.Length)
    }

    $response.Close()
}
