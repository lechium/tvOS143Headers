//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface LockdownService : NSObject
{
    struct _lockdown_connection *_connection;	// 8 = 0x8
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

+ (id)serviceWithBundleID:(id)arg1;	// IMP=0x0000000100005144
- (void).cxx_destruct;	// IMP=0x0000000100006188
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
@property struct _lockdown_connection *connection; // @synthesize connection=_connection;
- (void)sendResponseToHost:(id)arg1;	// IMP=0x0000000100005f20
- (_Bool)runServiceWithRequestHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005540
- (void)disconnect;	// IMP=0x000000010000548c
- (int)checkin;	// IMP=0x0000000100005360
- (int)underlyingSocket;	// IMP=0x0000000100005314
- (long long)send:(id)arg1;	// IMP=0x000000010000522c
- (_Bool)isConnectionValid;	// IMP=0x00000001000051e4
- (void)dealloc;	// IMP=0x0000000100005198
- (id)initWithBundleID:(id)arg1;	// IMP=0x00000001000050a8

@end
