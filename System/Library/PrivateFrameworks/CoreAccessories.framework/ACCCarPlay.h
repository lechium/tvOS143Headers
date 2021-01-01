/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCConnection;

@interface ACCCarPlay : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(id)_init;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)isCarPlayPairedWithCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)isWirelessCarPlayAllowedForCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)carPlayAppLinksStateForCertSerial:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)carPlayIconStateForCertSerial:(id)arg1 andAppCategories:(unsigned long long)arg2 withReply:(/*^block*/id)arg3 ;
-(void)carPlayStartSessionForConnectionID:(unsigned)arg1 properties:(id)arg2 ;
@end

