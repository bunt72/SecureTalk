//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#ifndef TextSecureKit_Constants_h
#define TextSecureKit_Constants_h

typedef NS_ENUM(NSInteger, TSWhisperMessageType) {
    TSUnknownMessageType            = 0,
    TSEncryptedWhisperMessageType   = 1,
    TSIgnoreOnIOSWhisperMessageType = 2, // on droid this is the prekey bundle message irrelevant for us
    TSPreKeyWhisperMessageType      = 3,
    TSUnencryptedWhisperMessageType = 4,
};

#pragma mark Server Address

#define textSecureHTTPTimeOut 10

//#define textSecureWebSocketAPI @"wss://192.168.2.110/v1/websocket/"
//#define textSecureServerURL @"https://192.168.2.110/"

#define textSecureWebSocketAPI @"wss://umnik-pc.speedport_w_723v_1_45_000/v1/websocket/"
#define textSecureServerURL @"https://umnik-pc.speedport_w_723v_1_45_000/"

//#define textSecureWebSocketAPI @"wss://sotger32.vds.serverdale.com/v1/websocket/"
//#define textSecureServerURL @"https://sotger32.vds.serverdale.com/"


#ifndef DEBUG

//Production
//#define textSecureWebSocketAPI @"wss://textsecure-service.whispersystems.org/v1/websocket/"
//#define textSecureServerURL @"https://textsecure-service.whispersystems.org/"

#else
//
//// Staging

//#define textSecureWebSocketAPI @"wss://textsecure-service.whispersystems.org/v1/websocket/"
//#define textSecureServerURL @"https://textsecure-service.whispersystems.org/"


#endif

//#define textSecureCDNServerURL @"https://cdn.signal.org"
#define textSecureCDNServerURL @"http://192.168.2.110:9000/global-securetalk-profiles"
#define textSecureServiceReflectorHost @"signal-reflector-meek.appspot.com"
#define textSecureCDNReflectorHost @"signal-cdn-reflector.appspot.com"



//#define textSecureServiceReflectorHost @"meek-signal-service-staging.appspot.com";
//#define textSecureCDNReflectorHost @"meek-signal-cdn-staging.appspot.com";


#define textSecureAccountsAPI @"v1/accounts"
#define textSecureAttributesAPI @"/attributes/"

#define textSecureMessagesAPI @"v1/messages/"
#define textSecureKeysAPI @"v2/keys"
#define textSecureSignedKeysAPI @"v2/keys/signed"
#define textSecureDirectoryAPI @"v1/directory"
#define textSecureAttachmentsAPI @"v1/attachments"
#define textSecureDeviceProvisioningCodeAPI @"v1/devices/provisioning/code"
#define textSecureDeviceProvisioningAPIFormat @"v1/provisioning/%@"
#define textSecureDevicesAPIFormat @"v1/devices/%@"
#define textSecureProfileAPI @"v1/profile"
#define textSecureProfileAPIFormat @"v1/profile/%@"
#define textSecureSetProfileNameAPIFormat @"v1/profile/name/%@"
#define textSecureProfileAvatarFormAPI @"v1/profile/form/avatar"

#define SignalApplicationGroup @"group.com.konke.SecureTalk"

#endif
