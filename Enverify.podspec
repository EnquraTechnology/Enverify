   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "1.1.992"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '10.3'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/1.1.992.zip"}
    spec.ios.vendored_frameworks = "EnVerify-1.1.992/EnQualify.xcframework" , "EnVerify-1.1.992/IDVerification.xcframework"
    spec.ios.frameworks = "EnQualify"
    spec.requires_arc = false
    spec.preserve_paths = 'inc/EnQualify/*.h'
    spec.vendored_libraries = 'lib/EnQualify.a'
    spec.libraries = 'EnQualify'
    spec.swift_versions = '5.0'
    spec.xcconfig = { 'HEADER_SEARCH_PATHS' => '${PODS_ROOT}/#{s.name}/inc/EnQualify/**'}
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64' ,  'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    spec.user_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64' , 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'}
    spec.dependency 'Starscream', '~> 3.0.0'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift'
    spec.dependency 'Alamofire', '~> 5.5.0'
    spec.dependency 'GoogleMLKit/TextRecognition','2.2.0'
    spec.dependency 'GoogleMLKit/FaceDetection'
    spec.dependency 'GoogleMLKit/BarcodeScanning'
    spec.dependency 'OpenSSL-Universal','1.1.1900'
    spec.dependency 'SwiftyJSON', '~> 5.0'
    spec.dependency 'TensorFlowLiteSwift'
    spec.dependency 'PromisesObjC'
    spec.dependency 'GTMSessionFetcher'
    spec.dependency 'GoogleDataTransport'
    spec.dependency 'GoogleToolboxForMac'
    spec.dependency 'Protobuf'
    spec.dependency 'GoogleUtilities'
  end

