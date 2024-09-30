   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "1.3.17.2"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '12.0'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/1.3.17.2.zip"}
    spec.ios.vendored_frameworks = "EnVerify-1.3.17.2/EnQualify.xcframework" , "EnVerify-1.3.17.2/IDVerification.xcframework"
    spec.ios.frameworks = "EnQualify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0' 
    spec.xcconfig = { 'IPHONEOS_DEPLOYMENT_TARGET' => '12.0','ONLY_ACTIVE_ARCH' => 'YES' , 'VALID_ARCHS' => 'arm64 x86_64' }
    
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64', 'OTHER_LDFLAGS[sdk=iphoneos*]' => '$(inherited) -ObjC -lc++ -framework EnQualify -framework FBLPromises -framework Alamofire -framework GTMSessionFetcher -framework GoogleAppMeasurement -framework GoogleAppMeasurementIdentitySupport -framework GoogleDataTransport -framework GoogleToolboxForMac -framework GoogleUtilities -framework GoogleUtilitiesComponents -framework Starscream -framework SocketIO -framework MLImage -framework MLKitBarcodeScanning -framework MLKitFaceDetection -framework MLKitTextRecognition -framework MLKitCommon -framework MLKitVision -framework WebRTC',
'OTHER_LDFLAGS[sdk=iphonesimulator*]' => '-ObjC -lc++ -framework EnQualify -framework FBLPromises -framework Alamofire -framework GTMSessionFetcher -framework GoogleAppMeasurement -framework GoogleAppMeasurementIdentitySupport -framework GoogleDataTransport -framework GoogleToolboxForMac -framework GoogleUtilities -framework GoogleUtilitiesComponents -framework SocketIO'
}

    spec.dependency 'Starscream', '~> 3.0.0'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift', '14.0.0'
    spec.dependency 'Alamofire', '5.6.2'
    spec.dependency 'GoogleMLKit/TextRecognition', '4.0.0'
    spec.dependency 'GoogleMLKit/FaceDetection', '4.0.0'
    spec.dependency 'GoogleMLKit/BarcodeScanning', '4.0.0'
    spec.dependency 'OpenSSL-Universal','1.1.1900'
    spec.dependency 'TensorFlowLiteSwift'
  end
