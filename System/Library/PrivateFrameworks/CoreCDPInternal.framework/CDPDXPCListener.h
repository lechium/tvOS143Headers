/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSXPCListener * listener;              //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(BOOL)_connection:(id)arg1 hasEntitlement:(id)arg2 ;
-(unsigned long long)_clientTypeForConnection:(id)arg1 ;
-(BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)arg1 ;
@end

