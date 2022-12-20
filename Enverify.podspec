  Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "1.1.0"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :file => "LICENSE" }
    spec.platform     = :ios
    spec.ios.deployment_target = '10.3'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/1.1.0.zip"}
    spec.ios.vendored_frameworks = "EnVerify-1.1.0/EnVerify.xcframework" , "EnVerify-1.1.0/IDVerify.xcframework"
    spec.ios.frameworks = "EnVerify"
    spec.requires_arc = true
    spec.swift_version = '5.0'	
    spec.dependency 'Starscream', '~> 3.0.0'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift'
    spec.dependency 'Alamofire', '~> 5.5.0'
    spec.dependency 'GoogleMLKit/TextRecognition','2.2.0'
    spec.dependency 'GoogleMLKit/FaceDetection'
    spec.dependency 'SnapKit', '~> 5.0.0'
    spec.dependency 'OpenSSL-Universal','1.1.1400'
    spec.dependency 'SwiftyJSON', '~> 5.0'
    spec.dependency 'TensorFlowLiteSwift'
    spec.dependency 'netfox', :configurations => ['Debug']
    spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
    spec.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
  end

