/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BiomeStreams/BiomeStreams-Structs.h>
@class NSString, NSXPCConnection;

@interface BMStreamsAccessRequest : NSObject {

	SCD_Struct_BM2 _token;
	NSString* _identifier;
	NSXPCConnection* _weakConnection;

}
-(void)requestReadAccessTokenWithStream:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestWriteAccessTokenWithStream:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithAuditToken:(SCD_Struct_BM2)arg1 identifier:(id)arg2 connection:(id)arg3 ;
-(BOOL)_hasDirectoryForStream:(long long)arg1 ;
-(void)_createPublicStreamDirectories;
-(BOOL)hasReadEntitlementForStream:(long long)arg1 ;
-(BOOL)hasWriteEntitlementForStream:(long long)arg1 ;
@end

