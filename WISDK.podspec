Pod::Spec.new do |spec|

  spec.name         = "WISDK"
  spec.version      = ENV['LIB_VERSION'] || "0.0.1"
  spec.summary      = "Wiinvent Sdk iOS"

  spec.description  = <<-DESC
                        Wiinvent SDK iOS
                   DESC

  spec.homepage     = "https://wiinvent.tv"
  spec.license      = { :type => 'Copyright', :text => 'Copyright (C) 2020 by Wiinvent TV, Inc' }
  spec.author       = { "Wiinvent" => "support@wiinvent.tv" }

  spec.platform = :ios
  spec.ios.deployment_target = "9.0"
  spec.swift_version = ["4.0", "4.2", "5.0"]
  
  spec.source = { :git => "https://github.com/Wiinvent/wiinvent-sdk-ios-release.git", :tag => "#{spec.version}" }

  spec.source_files = "WISDK.framework/Headers/*.h"
  spec.public_header_files = "WISDK.framework/Headers/*.h"
  spec.vendored_frameworks = "WISDK.framework"

  spec.frameworks = 'AVFoundation', 'UIKit', 'WebKit'
end
