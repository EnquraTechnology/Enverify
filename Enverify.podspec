   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "0.0.0.8"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '11.0'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/0.0.0.8.zip"}
    spec.ios.vendored_frameworks = "EnVerify-0.0.0.8/EnQualify.xcframework" , "EnVerify-0.0.0.8/IDVerification.xcframework"
    spec.ios.frameworks = "EnQualify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0'
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64'  ,'IPHONEOS_DEPLOYMENT_TARGET' => '11.0','EXCLUDED_ARCHS[sdk=iphonesimulator*]' => ''}
    spec.user_target_xcconfig = { 'VALID_ARCHS' => 'arm64' ,'IPHONEOS_DEPLOYMENT_TARGET' => '11.0','EXCLUDED_ARCHS[sdk=iphonesimulator*]' => ''}
    spec.dependency 'Starscream', '~> 3.0.0'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift','14.0.0'
    spec.dependency 'Alamofire', '5.6.2'
    spec.dependency 'GoogleMLKit/TextRecognition','2.2.0'
    spec.dependency 'GoogleMLKit/FaceDetection'
    spec.dependency 'GoogleMLKit/BarcodeScanning'
    spec.dependency 'OpenSSL-Universal','1.1.1900'
    spec.dependency 'SwiftyJSON', '~> 5.0'
    spec.dependency 'TensorFlowLiteSwift','~> 2.12.0'
    spec.dependency 'PromisesObjC'
    spec.dependency 'GTMSessionFetcher'
    spec.dependency 'GoogleDataTransport'
    spec.dependency 'GoogleToolboxForMac'
    spec.dependency 'Protobuf'
    spec.dependency 'GoogleUtilities'
  end

