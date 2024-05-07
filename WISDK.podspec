Pod::Spec.new do |spec|

  spec.name         = "WISDK"
  spec.version      = ENV['LIB_VERSION'] || "0.0.1"
  spec.summary      = "Wiinvent Sdk iOS"

  spec.description  = <<-DESC
                        Wiinvent SDK iOS
                   DESC

  spec.homepage     = "https://wiinvent.tv"
  spec.license      = { :type => 'Copyright', :text => 'Copyright (C) 2022 by Wiinvent TV, Inc' }
  spec.author       = { "Wiinvent" => "support@wiinvent.tv" }

  spec.vendored_frameworks = "WISDK.xcframework"
  spec.platform = :ios
  spec.ios.deployment_target = "12.0"
  spec.swift_version = ["4.0", "4.2", "5.0"]
  spec.source = { :git => "https://github.com/Wiinvent/wiinvent-sdk-ios-release.git", :tag => "v#{spec.version.to_s}" }
  spec.pod_target_xcconfig = {'ONLY_ACTIVE_ARCH' => 'NO'}
  spec.user_target_xcconfig = {'ONLY_ACTIVE_ARCH' => 'NO'}

  spec.dependency 'GoogleAds-IMA-iOS-SDK', '3.18.4'
  spec.dependency 'TokenGenerator'

  spec.frameworks = 'AVFoundation', 'UIKit', 'WebKit'
end
