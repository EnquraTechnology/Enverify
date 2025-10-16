   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "1.3.23.3"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license      = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '12.0'
    spec.source       = {:http =>  "https://enqualifymobile.enqura.com/EnQualifyv1Packages/1.3.23.3/1.3.23.3.zip"}
    spec.ios.vendored_frameworks = "EnQualify.xcframework" , "IDVerification.xcframework"
    spec.ios.frameworks = "EnQualify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0' 
    spec.xcconfig = { 'IPHONEOS_DEPLOYMENT_TARGET' => '12.0','ONLY_ACTIVE_ARCH' => 'YES' , 'VALID_ARCHS' => 'arm64 x86_64' }
    
    spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'arm64 x86_64', 'OTHER_LDFLAGS[sdk=iphoneos*]' => '$(inherited) -ObjC -lc++ -framework EnQualify -framework FBLPromises -framework Alamofire -framework GTMSessionFetcher -framework GoogleAppMeasurement -framework GoogleAppMeasurementIdentitySupport -framework GoogleDataTransport -framework GoogleToolboxForMac -framework GoogleUtilities -framework GoogleUtilitiesComponents -framework Starscream -framework SocketIO -framework MLImage -framework MLKitBarcodeScanning -framework MLKitFaceDetection -framework MLKitTextRecognition -framework MLKitCommon -framework MLKitVision -framework WebRTC',
'OTHER_LDFLAGS[sdk=iphonesimulator*]' => '-ObjC -lc++ -framework EnQualify -framework FBLPromises -framework Alamofire -framework GTMSessionFetcher -framework GoogleAppMeasurement -framework GoogleAppMeasurementIdentitySupport -framework GoogleDataTransport -framework GoogleToolboxForMac -framework GoogleUtilities -framework GoogleUtilitiesComponents -framework SocketIO'
}

    spec.dependency 'Starscream', '~> 4.0.8'
    spec.dependency 'GoogleWebRTC'
    spec.dependency 'Socket.IO-Client-Swift', '16.1.1'
    spec.dependency 'Alamofire', '5.10.2'
    spec.dependency 'GoogleMLKit/TextRecognition', '6.0.0'
    spec.dependency 'GoogleMLKit/FaceDetection', '6.0.0'
    spec.dependency 'OpenSSL-Universal', '3.3.2000'
    spec.dependency 'TensorFlowLiteSwift', '~> 2.12.0'
    spec.dependency 'GoogleMLKit/ImageLabeling'
    spec.dependency 'lottie-ios'
  end