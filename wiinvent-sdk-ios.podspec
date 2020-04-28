Pod::Spec.new do |spec|

  spec.name         = "wiinvent-sdk-ios"
  spec.version      = "0.0.1"
  spec.summary      = "Wiinvent Sdk iOS"

  spec.description  = <<-DESC
                        Wiinvent SDK iOS
                   DESC

  spec.homepage     = "https://github.com/Wiinvent/wiinvent-sdk-ios-release.git"
  spec.license      = { :type => 'Copyright', :text => 'Copyright (C) 2018-2020 by Wiinvent TV, Inc' }
  spec.author       = { "Wiinvent" => "support@wiinvent.tv" }

  spec.platform = :ios
  spec.ios.deployment_target = "9.0"
  spec.swift_version = ["4.0", "4.2", "5.0"]
  
  spec.source = { :git => "https://github.com/Wiinvent/wiinvent-sdk-ios-release.git", :tag => "#{spec.version}" }

  spec.source_files = "wiinvent_sdk_ios.framework/Headers/*.h"
  spec.public_header_files = "wiinvent_sdk_ios.framework/Headers/*.h"
  spec.vendored_frameworks = "wiinvent_sdk_ios.framework"

  spec.frameworks = 'AVFoundation', 'UIKit', 'WebKit'
end
