   Pod::Spec.new do |spec|
    spec.name         = "EnVerify"
    spec.version      = "1.3.13.4"
    spec.summary      = "EnVerify."
    spec.authors      = { "Enqura" => "http://www.enqura.com" }
    spec.homepage     = "http://www.enqura.com"
    spec.license          = { :type => 'MIT', :text => "MIT License" }
    spec.platform     = :ios
    spec.ios.deployment_target = '11.0'
    spec.source       = {:http =>  "https://github.com/EnquraTechnology/Enverify/archive/refs/tags/1.3.13.4.zip"}
    spec.vendored_frameworks = "EnVerify-1.3.13.4/EnQualify.xcframework" , "EnVerify-1.3.13.4/IDVerification.xcframework"
    spec.ios.frameworks = "EnQualify"
    spec.requires_arc = true	
    spec.swift_versions = '5.0' 
    spec.xcconfig = { 'IPHONEOS_DEPLOYMENT_TARGET' => '11.0','ONLY_ACTIVE_ARCH' => 'YES' , 'VALID_ARCHS' => 'arm64' }
 spec.pod_target_xcconfig = {
'OTHER_LDFLAGS[sdk=iphoneos*]' => '$(inherited) -ObjC -lc++ -framework EnQualify -framework FBLPromises -framework Alamofire -framework GTMSessionFetcher -framework GoogleAppMeasurement -framework GoogleAppMeasurementIdentitySupport -framework GoogleDataTransport -framework GoogleToolboxForMac -framework GoogleUtilities -framework GoogleUtilitiesComponents -framework Starscream -framework SocketIO -framework MLImage -framework MLKitBarcodeScanning -framework MLKitFaceDetection -framework MLKitTextRecognition -framework MLKitCommon -framework MLKitVision -framework WebRTC',
'OTHER_LDFLAGS[sdk=iphonesimulator*]' => '-ObjC -lc++ -framework EnQualify -framework FBLPromises -framework Alamofire -framework GTMSessionFetcher -framework GoogleAppMeasurement -framework GoogleAppMeasurementIdentitySupport -framework GoogleDataTransport -framework GoogleToolboxForMac -framework GoogleUtilities -framework GoogleUtilitiesComponents -framework Starscream -framework SocketIO'
}
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
  end

