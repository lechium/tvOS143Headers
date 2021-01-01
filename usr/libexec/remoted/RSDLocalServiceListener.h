//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RSDLocalService, RSDRemoteDevice;
@protocol OS_dispatch_source;

@interface RSDLocalServiceListener : NSObject
{
    _Bool _canceled;	// 8 = 0x8
    int _socket;	// 12 = 0xc
    RSDLocalService *_service;	// 16 = 0x10
    RSDRemoteDevice *_device;	// 24 = 0x18
    char *_port;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_socket_source;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100003fe0
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *socket_source; // @synthesize socket_source=_socket_source;
@property(nonatomic) int socket; // @synthesize socket=_socket;
@property(nonatomic) char *port; // @synthesize port=_port;
@property(nonatomic) __weak RSDRemoteDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) RSDLocalService *service; // @synthesize service=_service;
- (void)dealloc;	// IMP=0x0000000100003e70
- (void)cancel;	// IMP=0x0000000100003e20
- (id)copyServiceDescription;	// IMP=0x0000000100003cf4
- (id)initWithService:(id)arg1 forDevice:(id)arg2 withPort:(char *)arg3 onSocket:(int)arg4;	// IMP=0x0000000100003870

@end

