/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface OspreyChannelRequestOptions : NSObject {

	BOOL _compressionEnabled;
	BOOL _forceHTTPv2;

}

@property (assign,getter=isCompressionEnabled,nonatomic) BOOL compressionEnabled;              //@synthesize compressionEnabled=_compressionEnabled - In the implementation block
@property (assign,nonatomic) BOOL forceHTTPv2;                                                 //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
-(id)init;
-(BOOL)isCompressionEnabled;
-(void)setCompressionEnabled:(BOOL)arg1 ;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(void)applyToOspreyMutableRequest:(id)arg1 ;
@end

