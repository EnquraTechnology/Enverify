   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "1.1.38"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '10.3'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/1.1.38.zip"}
    spec.ios.vendored_frameworks = "EnVerify-1.1.38/EnVerify.framework" , "EnVerify-1.1.38/IDVerify.framework"
    spec.ios.frameworks = "EnVerify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0'
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64' ,  'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64' , 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
    spec.dependency 'Starscream', '~> 3.0.0'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift'
    spec.dependency 'Alamofire', '~> 5.5.0'
    spec.dependency 'GoogleMLKit/TextRecognition','2.2.0'
    spec.dependency 'GoogleMLKit/FaceDetection'
    spec.dependency 'GoogleMLKit/BarcodeScanning'
    spec.dependency 'OpenSSL-Universal','1.0.2.20'
    spec.dependency 'SwiftyJSON', '~> 5.0'
    spec.dependency 'TensorFlowLiteSwift'
    spec.dependency 'PromisesObjC','2.1.1'
    spec.dependency 'GTMSessionFetcher','1.7.2'
    spec.dependency 'GoogleDataTransport','9.2.1'
    spec.dependency 'GoogleToolboxForMac'
    spec.dependency 'Protobuf','3.12'
    spec.dependency 'GoogleUtilities'
  end

