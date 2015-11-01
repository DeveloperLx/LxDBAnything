Pod::Spec.new do |s|
  s.name         = "LxDBAnything"
  s.version      = "1.0.0"
  s.summary      = "Tell you the type of any variable! Print log without any format control symbol! Change debug habit thoroughly!"

  s.homepage     = "https://github.com/DeveloperLx/LxDBAnything"
  s.license      = 'MIT'
  s.authors      = { 'DeveloperLx' => 'developerlx@yeah.com' }
  s.platform     = :ios, "6.0"
  s.ios.deployment_target = "6.0"
  s.source       = { :git => "https://github.com/DeveloperLx/LxDBAnything", :tag => s.version}
  s.source_files = 'LxDBAnything.h'
  s.requires_arc = true
  s.frameworks   = 'Foundation', 'CoreGraphics'
end
