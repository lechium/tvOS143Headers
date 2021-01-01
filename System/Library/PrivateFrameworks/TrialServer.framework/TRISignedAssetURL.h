/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface TRISignedAssetURL : NSObject <NSCopying> {

	NSURL* _url;
	NSString* _signature;

}

@property (nonatomic,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * signature;              //@synthesize signature=_signature - In the implementation block
+(id)assetURLWithUrl:(id)arg1 signature:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSURL *)url;
-(NSString *)signature;
-(id)initWithUrl:(id)arg1 signature:(id)arg2 ;
-(BOOL)isEqualToAssetURL:(id)arg1 ;
-(id)copyWithReplacementUrl:(id)arg1 ;
-(id)copyWithReplacementSignature:(id)arg1 ;
@end
