/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSSet;

@interface NWTLSParameters : NSObject {

	NSData* _TLSSessionID;
	NSSet* _SSLCipherSuites;
	unsigned long long _minimumSSLProtocolVersion;
	unsigned long long _maximumSSLProtocolVersion;

}

@property (copy) NSData * TLSSessionID;                                       //@synthesize TLSSessionID=_TLSSessionID - In the implementation block
@property (setter=SLCipherSuites,copy) NSSet * SSLCipherSuites;               //@synthesize SSLCipherSuites=_SSLCipherSuites - In the implementation block
@property (assign) unsigned long long minimumSSLProtocolVersion;              //@synthesize minimumSSLProtocolVersion=_minimumSSLProtocolVersion - In the implementation block
@property (assign) unsigned long long maximumSSLProtocolVersion;              //@synthesize maximumSSLProtocolVersion=_maximumSSLProtocolVersion - In the implementation block
-(NSData *)TLSSessionID;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(NSSet *)SSLCipherSuites;
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(unsigned long long)minimumSSLProtocolVersion;
-(void)setMinimumSSLProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)maximumSSLProtocolVersion;
-(void)setMaximumSSLProtocolVersion:(unsigned long long)arg1 ;
@end
