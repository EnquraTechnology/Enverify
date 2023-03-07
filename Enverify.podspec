   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "0.1.2001"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '10.3'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/0.1.2001.zip"}
    spec.ios.vendored_frameworks = "EnVerify-0.1.2001/EnVerify.xcframework" , "EnVerify-0.1.2001/IDVerify.xcframework"
    spec.ios.frameworks = "EnVerify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0'
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64' ,  'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64' , 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
    spec.dependency 'Starscream', '~> 3.0.6'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift'
    spec.dependency 'Alamofire', '~> 5.5.0'
    spec.dependency 'GoogleMLKit/TextRecognition','2.2.0'
    spec.dependency 'GoogleMLKit/FaceDetection'
    spec.dependency 'OpenSSL-Universal','1.1.1900'
    spec.dependency 'SwiftyJSON', '~> 5.0'
    spec.dependency 'TensorFlowLiteSwift'
    spec.dependency 'PromisesObjC'
    spec.dependency 'GTMSessionFetcher'
    spec.dependency 'GoogleDataTransport','9.2.0'
    spec.dependency 'GoogleToolboxForMac'
    spec.dependency 'Protobuf'
    spec.dependency 'GoogleUtilities'
  end

