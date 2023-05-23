   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "0.0.0.30"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '10.3'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/0.0.0.30.zip"}
    spec.ios.vendored_frameworks = "EnVerify-0.0.0.30/EnQualify.xcframework" , "EnVerify-0.0.0.30/IDVerification.xcframework"
    spec.ios.frameworks = "EnQualify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0'
    spec.xcconfig = { 'OTHER_LDFLAGS[sdk=iphoneos*]' => '-lc++ -lsqlite3 -lz -framework AVFoundation -framework Accelerate -framework CFNetwork -framework CoreGraphics -framework CoreImage -framework CoreMedia -framework CoreTelephony -framework CoreVideo -framework FBLPromises -framework Foundation -framework LocalAuthentication -framework Security -framework SocketIO -framework SystemConfiguration -framework TensorFlowLite -framework UIKit' ,'OTHER_LDFLAGS[sdk=iphonesimulator*]' => '-Wl,-undefined,dynamic_lookup,-ObjC,$(inherited)'}
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64' ,  'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => '' , 'IPHONEOS_DEPLOYMENT_TARGET' => '11.0' ,'ONLY_ACTIVE_ARCH' => 'YES'}
    spec.user_target_xcconfig = { 'VALID_ARCHS' => 'arm64' , 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => '' , 'IPHONEOS_DEPLOYMENT_TARGET' => '11.0' ,'ONLY_ACTIVE_ARCH' => 'YES'}
    spec.dependency 'Starscream', '~> 3.0.0'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift', '14.0.0'
    spec.dependency 'Alamofire', '5.6.2'
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

